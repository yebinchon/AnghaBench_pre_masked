
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {scalar_t__ if_softc; } ;
struct TYPE_2__ {int * tx_free_queue; } ;
typedef TYPE_1__ cvm_oct_private_t ;


 int FUNC_0 (int *) ;

void FUNC_1(struct ifnet *VAR_0)
{
 cvm_oct_private_t *VAR_1 = (cvm_oct_private_t *)VAR_0->if_softc;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 16; VAR_2++) {
  FUNC_0(&VAR_1->tx_free_queue[VAR_2]);
 }
}
