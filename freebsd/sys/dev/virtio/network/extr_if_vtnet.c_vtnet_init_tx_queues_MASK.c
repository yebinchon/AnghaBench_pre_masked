
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_txq {scalar_t__ vtntx_watchdog; } ;
struct vtnet_softc {int vtnet_act_vq_pairs; struct vtnet_txq* vtnet_txqs; } ;



__attribute__((used)) static int
FUNC_0(struct vtnet_softc *VAR_0)
{
 struct vtnet_txq *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->vtnet_act_vq_pairs; VAR_2++) {
  VAR_1 = &VAR_0->vtnet_txqs[VAR_2];
  VAR_1->vtntx_watchdog = 0;
 }

 return (0);
}
