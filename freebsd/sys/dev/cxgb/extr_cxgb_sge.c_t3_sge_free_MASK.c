
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int * parent_dmat; int * rx_dmat; int * rx_jumbo_dmat; int * tx_dmat; } ;


 int FUNC_0 (int *) ;

int
FUNC_1(struct adapter * VAR_0)
{

 if (VAR_0->tx_dmat != ((void*)0))
  FUNC_0(VAR_0->tx_dmat);

 if (VAR_0->rx_jumbo_dmat != ((void*)0))
  FUNC_0(VAR_0->rx_jumbo_dmat);

 if (VAR_0->rx_dmat != ((void*)0))
  FUNC_0(VAR_0->rx_dmat);

 if (VAR_0->parent_dmat != ((void*)0))
  FUNC_0(VAR_0->parent_dmat);

 return (0);
}
