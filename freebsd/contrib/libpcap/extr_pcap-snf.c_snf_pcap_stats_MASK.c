
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snf_ring_stats {scalar_t__ nic_pkt_bad; scalar_t__ nic_pkt_overflow; scalar_t__ ring_pkt_overflow; scalar_t__ ring_pkt_recv; } ;
struct pcap_stat {scalar_t__ ps_ifdrop; scalar_t__ ps_drop; scalar_t__ ps_recv; } ;
struct pcap_snf {int snf_ring; } ;
struct TYPE_3__ {int errbuf; struct pcap_snf* priv; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,char*) ;
 int FUNC_1 (int ,struct snf_ring_stats*) ;

__attribute__((used)) static int
FUNC_2(pcap_t *VAR_1, struct pcap_stat *VAR_2)
{
 struct snf_ring_stats VAR_3;
 struct pcap_snf *VAR_4 = VAR_1->priv;
 int VAR_5;

 if ((VAR_5 = FUNC_1(VAR_4->snf_ring, &VAR_3))) {
  FUNC_0(VAR_1->errbuf, VAR_0,
      VAR_5, "snf_get_stats");
  return -1;
 }
 VAR_2->ps_recv = VAR_3.ring_pkt_recv + VAR_3.ring_pkt_overflow;
 VAR_2->ps_drop = VAR_3.ring_pkt_overflow;
 VAR_2->ps_ifdrop = VAR_3.nic_pkt_overflow + VAR_3.nic_pkt_bad;
 return 0;
}
