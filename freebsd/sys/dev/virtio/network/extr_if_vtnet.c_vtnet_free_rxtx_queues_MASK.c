
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_softc {int vtnet_max_vq_pairs; int * vtnet_txqs; int * vtnet_rxqs; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct vtnet_softc *VAR_1)
{
 int VAR_2;

 if (VAR_1->vtnet_rxqs != ((void*)0)) {
  for (VAR_2 = 0; VAR_2 < VAR_1->vtnet_max_vq_pairs; VAR_2++)
   FUNC_1(&VAR_1->vtnet_rxqs[VAR_2]);
  FUNC_0(VAR_1->vtnet_rxqs, VAR_0);
  VAR_1->vtnet_rxqs = ((void*)0);
 }

 if (VAR_1->vtnet_txqs != ((void*)0)) {
  for (VAR_2 = 0; VAR_2 < VAR_1->vtnet_max_vq_pairs; VAR_2++)
   FUNC_2(&VAR_1->vtnet_txqs[VAR_2]);
  FUNC_0(VAR_1->vtnet_txqs, VAR_0);
  VAR_1->vtnet_txqs = ((void*)0);
 }
}
