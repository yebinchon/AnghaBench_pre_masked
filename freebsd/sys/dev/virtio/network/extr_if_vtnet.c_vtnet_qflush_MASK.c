
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_txq {int vtntx_br; } ;
struct vtnet_softc {int vtnet_act_vq_pairs; struct vtnet_txq* vtnet_txqs; } ;
struct mbuf {int dummy; } ;
struct ifnet {struct vtnet_softc* if_softc; } ;


 int FUNC_0 (struct vtnet_txq*) ;
 int FUNC_1 (struct vtnet_txq*) ;
 struct mbuf* FUNC_2 (int ) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_5(struct ifnet *VAR_0)
{
 struct vtnet_softc *VAR_1;
 struct vtnet_txq *VAR_2;
 struct mbuf *VAR_3;
 int VAR_4;

 VAR_1 = VAR_0->if_softc;

 for (VAR_4 = 0; VAR_4 < VAR_1->vtnet_act_vq_pairs; VAR_4++) {
  VAR_2 = &VAR_1->vtnet_txqs[VAR_4];

  FUNC_0(VAR_2);
  while ((VAR_3 = FUNC_2(VAR_2->vtntx_br)) != ((void*)0))
   FUNC_4(VAR_3);
  FUNC_1(VAR_2);
 }

 FUNC_3(VAR_0);
}
