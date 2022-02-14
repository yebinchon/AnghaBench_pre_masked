
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_softc {int vtnet_act_vq_pairs; int * vtnet_rxqs; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct vtnet_softc *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->vtnet_act_vq_pairs; VAR_1++)
  FUNC_0(&VAR_0->vtnet_rxqs[VAR_1]);
}
