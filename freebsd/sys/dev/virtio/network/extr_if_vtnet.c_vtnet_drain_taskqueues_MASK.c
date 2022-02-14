
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_txq {int vtntx_defrtask; int * vtntx_tq; int vtntx_intrtask; } ;
struct vtnet_softc {int vtnet_max_vq_pairs; struct vtnet_txq* vtnet_txqs; struct vtnet_rxq* vtnet_rxqs; } ;
struct vtnet_rxq {int vtnrx_intrtask; int * vtnrx_tq; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(struct vtnet_softc *VAR_0)
{
 struct vtnet_rxq *VAR_1;
 struct vtnet_txq *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->vtnet_max_vq_pairs; VAR_3++) {
  VAR_1 = &VAR_0->vtnet_rxqs[VAR_3];
  if (VAR_1->vtnrx_tq != ((void*)0))
   FUNC_0(VAR_1->vtnrx_tq, &VAR_1->vtnrx_intrtask);

  VAR_2 = &VAR_0->vtnet_txqs[VAR_3];
  if (VAR_2->vtntx_tq != ((void*)0)) {
   FUNC_0(VAR_2->vtntx_tq, &VAR_2->vtntx_intrtask);

   FUNC_0(VAR_2->vtntx_tq, &VAR_2->vtntx_defrtask);

  }
 }
}
