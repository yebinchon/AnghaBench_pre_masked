
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vtnet_txq {int vtntx_defrtask; int vtntx_tq; int vtntx_br; } ;
struct vtnet_softc {int vtnet_act_vq_pairs; struct vtnet_txq* vtnet_txqs; } ;
struct TYPE_2__ {int flowid; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {struct vtnet_softc* if_softc; } ;


 scalar_t__ FUNC_0 (struct mbuf*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct vtnet_txq*) ;
 int FUNC_2 (struct vtnet_txq*) ;
 int VAR_1 ;
 int FUNC_3 (struct ifnet*,int ,struct mbuf*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct vtnet_txq*,struct mbuf*) ;

__attribute__((used)) static int
FUNC_6(struct ifnet *VAR_2, struct mbuf *VAR_3)
{
 struct vtnet_softc *VAR_4;
 struct vtnet_txq *VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_4 = VAR_2->if_softc;
 VAR_7 = VAR_4->vtnet_act_vq_pairs;


 if (FUNC_0(VAR_3) != VAR_0)
  VAR_6 = VAR_3->m_pkthdr.flowid % VAR_7;
 else
  VAR_6 = VAR_1 % VAR_7;

 VAR_5 = &VAR_4->vtnet_txqs[VAR_6];

 if (FUNC_1(VAR_5) != 0) {
  VAR_8 = FUNC_5(VAR_5, VAR_3);
  FUNC_2(VAR_5);
 } else {
  VAR_8 = FUNC_3(VAR_2, VAR_5->vtntx_br, VAR_3);
  FUNC_4(VAR_5->vtntx_tq, &VAR_5->vtntx_defrtask);
 }

 return (VAR_8);
}
