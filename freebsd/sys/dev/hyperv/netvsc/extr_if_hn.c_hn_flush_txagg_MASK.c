
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ifnet {int dummy; } ;
struct hn_txdesc {struct mbuf* m; } ;
struct hn_tx_ring {int hn_stat_pkts; int * hn_agg_prevpkt; scalar_t__ hn_agg_pktleft; scalar_t__ hn_agg_szleft; struct hn_txdesc* hn_agg_txd; int hn_flush_failed; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ifnet*,struct hn_tx_ring*,struct hn_txdesc*) ;
 int FUNC_3 (struct ifnet*,int ,int) ;
 int FUNC_4 (struct mbuf*) ;

__attribute__((used)) static __inline int
FUNC_5(struct ifnet *VAR_1, struct hn_tx_ring *VAR_2)
{
 struct hn_txdesc *VAR_3;
 struct mbuf *VAR_4;
 int VAR_5, VAR_6;

 VAR_3 = VAR_2->hn_agg_txd;
 FUNC_0(VAR_3 != ((void*)0), ("no aggregate txdesc"));






 VAR_6 = VAR_2->hn_stat_pkts;






 VAR_4 = VAR_3->m;
 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (FUNC_1(VAR_5)) {

  FUNC_4(VAR_4);

  VAR_2->hn_flush_failed++;
  FUNC_3(VAR_1, VAR_0, VAR_6);
 }


 VAR_2->hn_agg_txd = ((void*)0);
 VAR_2->hn_agg_szleft = 0;
 VAR_2->hn_agg_pktleft = 0;
 VAR_2->hn_agg_prevpkt = ((void*)0);

 return (VAR_5);
}
