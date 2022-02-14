
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pcap_win {int nonblock; int adapter; } ;
struct TYPE_4__ {int timeout; } ;
struct TYPE_5__ {int errbuf; TYPE_1__ opt; struct pcap_win* priv; } ;
typedef TYPE_2__ pcap_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,char*,char*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(pcap_t *VAR_1, int VAR_2)
{
 struct pcap_win *VAR_3 = VAR_1->priv;
 int VAR_4;
 char VAR_5[VAR_0+1];

 if (VAR_2) {




  VAR_4 = -1;
 } else {
  VAR_4 = VAR_1->opt.timeout;
 }
 if (!FUNC_1(VAR_3->adapter, VAR_4)) {
  FUNC_3(FUNC_0(), VAR_5);
  FUNC_2(VAR_1->errbuf, VAR_0,
      "PacketSetReadTimeout: %s", VAR_5);
  return (-1);
 }
 VAR_3->nonblock = (VAR_4 == -1);
 return (0);
}
