
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_txq {int dummy; } ;
struct vtnet_softc {int vtnet_max_vq_pairs; struct vtnet_txq* vtnet_txqs; struct vtnet_rxq* vtnet_rxqs; } ;
struct vtnet_rxq {int dummy; } ;


 int FUNC_0 (struct vtnet_rxq*) ;
 int FUNC_1 (struct vtnet_rxq*) ;
 int FUNC_2 (struct vtnet_txq*) ;
 int FUNC_3 (struct vtnet_txq*) ;

__attribute__((used)) static void
FUNC_4(struct vtnet_softc *VAR_0)
{
 struct vtnet_rxq *VAR_1;
 struct vtnet_txq *VAR_2;
 int VAR_3;







 for (VAR_3 = 0; VAR_3 < VAR_0->vtnet_max_vq_pairs; VAR_3++) {
  VAR_1 = &VAR_0->vtnet_rxqs[VAR_3];
  FUNC_0(VAR_1);
  FUNC_1(VAR_1);

  VAR_2 = &VAR_0->vtnet_txqs[VAR_3];
  FUNC_2(VAR_2);
  FUNC_3(VAR_2);
 }
}
