
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcap_win {int adapter; } ;
struct pcap_stat {int ps_capt; int ps_ifdrop; int ps_drop; int ps_recv; } ;
struct bpf_stat {int bs_capt; int ps_ifdrop; int bs_drop; int bs_recv; } ;
struct TYPE_3__ {struct pcap_stat stat; int errbuf; struct pcap_win* priv; } ;
typedef TYPE_1__ pcap_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,struct bpf_stat*) ;
 int FUNC_2 (int ,int ,char*,char*) ;
 int FUNC_3 (int ,char*) ;

struct pcap_stat *
FUNC_4(pcap_t *VAR_1, int *VAR_2)
{
 struct pcap_win *VAR_3 = VAR_1->priv;
 struct bpf_stat VAR_4;
 char VAR_5[VAR_0+1];

 *VAR_2 = sizeof (VAR_1->stat);
 if (!FUNC_1(VAR_3->adapter, &VAR_4)) {
  FUNC_3(FUNC_0(), VAR_5);
  FUNC_2(VAR_1->errbuf, VAR_0,
      "PacketGetStatsEx error: %s", VAR_5);
  return (((void*)0));
 }
 VAR_1->stat.ps_recv = VAR_4.bs_recv;
 VAR_1->stat.ps_drop = VAR_4.bs_drop;
 VAR_1->stat.ps_ifdrop = VAR_4.ps_ifdrop;



 return (&VAR_1->stat);
}
