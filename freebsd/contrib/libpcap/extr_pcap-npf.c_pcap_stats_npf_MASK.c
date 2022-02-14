
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcap_win {int adapter; } ;
struct pcap_stat {int ps_ifdrop; int ps_drop; int ps_recv; } ;
struct bpf_stat {int ps_ifdrop; int bs_drop; int bs_recv; } ;
struct TYPE_3__ {int errbuf; struct pcap_win* priv; } ;
typedef TYPE_1__ pcap_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,struct bpf_stat*) ;
 int FUNC_2 (int ,int ,char*,char*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(pcap_t *VAR_1, struct pcap_stat *VAR_2)
{
 struct pcap_win *VAR_3 = VAR_1->priv;
 struct bpf_stat VAR_4;
 char VAR_5[VAR_0+1];
 if (!FUNC_1(VAR_3->adapter, &VAR_4)) {
  FUNC_3(FUNC_0(), VAR_5);
  FUNC_2(VAR_1->errbuf, VAR_0,
      "PacketGetStats error: %s", VAR_5);
  return (-1);
 }
 VAR_2->ps_recv = VAR_4.bs_recv;
 VAR_2->ps_drop = VAR_4.bs_drop;
 VAR_2->ps_ifdrop = 0;


 return (0);
}
