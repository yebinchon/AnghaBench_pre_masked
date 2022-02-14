
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcap_usb_linux {scalar_t__ packets_read; } ;
struct pcap_stat {scalar_t__ ps_ifdrop; int ps_drop; scalar_t__ ps_recv; } ;
struct mon_bin_stats {int dropped; scalar_t__ queued; } ;
struct TYPE_3__ {int fd; int errbuf; struct pcap_usb_linux* priv; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct mon_bin_stats*) ;
 int FUNC_1 (int ,int ,int ,char*,int ) ;

__attribute__((used)) static int
FUNC_2(pcap_t *VAR_3, struct pcap_stat *VAR_4)
{
 struct pcap_usb_linux *VAR_5 = VAR_3->priv;
 int VAR_6;
 struct mon_bin_stats VAR_7;
 VAR_6 = FUNC_0(VAR_3->fd, VAR_0, &VAR_7);
 if (VAR_6 < 0)
 {
  FUNC_1(VAR_3->errbuf, VAR_1,
      VAR_2, "Can't read stats from fd %d", VAR_3->fd);
  return -1;
 }

 VAR_4->ps_recv = VAR_5->packets_read + VAR_7.queued;
 VAR_4->ps_drop = VAR_7.dropped;
 VAR_4->ps_ifdrop = 0;
 return 0;
}
