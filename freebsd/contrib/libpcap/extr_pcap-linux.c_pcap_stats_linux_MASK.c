
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tpacket_stats_v3 {int dummy; } ;
struct tpacket_stats {scalar_t__ tp_drops; scalar_t__ tp_packets; } ;
struct pcap_stat {int ps_ifdrop; scalar_t__ ps_drop; int ps_recv; } ;
struct pcap_linux {long proc_dropped; struct pcap_stat stat; int packets_read; int device; } ;
typedef int socklen_t ;
struct TYPE_4__ {scalar_t__ promisc; } ;
struct TYPE_5__ {int errbuf; int fd; TYPE_1__ opt; struct pcap_linux* priv; } ;
typedef TYPE_2__ pcap_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int ,struct tpacket_stats*,int*) ;
 long FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,scalar_t__,char*) ;

__attribute__((used)) static int
FUNC_3(pcap_t *VAR_5, struct pcap_stat *VAR_6)
{
 struct pcap_linux *VAR_7 = VAR_5->priv;
 long VAR_8 = 0;




 if (VAR_5->opt.promisc)
 {
  VAR_8 = VAR_7->proc_dropped;
  VAR_7->proc_dropped = FUNC_1(VAR_7->device);
  VAR_7->stat.ps_ifdrop += (VAR_7->proc_dropped - VAR_8);
 }
 VAR_6->ps_recv = VAR_7->packets_read;
 VAR_6->ps_drop = 0;
 VAR_6->ps_ifdrop = VAR_7->stat.ps_ifdrop;
 return 0;
}
