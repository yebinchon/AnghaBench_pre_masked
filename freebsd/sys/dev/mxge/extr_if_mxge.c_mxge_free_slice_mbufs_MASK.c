
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int mask; TYPE_5__* info; int dmat; } ;
struct TYPE_10__ {int mask; TYPE_3__* info; int dmat; } ;
struct TYPE_8__ {int mask; TYPE_1__* info; int dmat; } ;
struct mxge_slice_state {TYPE_6__ tx; TYPE_4__ rx_small; TYPE_2__ rx_big; int lc; } ;
struct TYPE_11__ {int * m; int map; scalar_t__ flag; } ;
struct TYPE_9__ {int * m; int map; } ;
struct TYPE_7__ {int * m; int map; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct mxge_slice_state *VAR_0)
{
 int VAR_1;




 for (VAR_1 = 0; VAR_1 <= VAR_0->rx_big.mask; VAR_1++) {
  if (VAR_0->rx_big.info[VAR_1].m == ((void*)0))
   continue;
  FUNC_0(VAR_0->rx_big.dmat,
      VAR_0->rx_big.info[VAR_1].map);
  FUNC_1(VAR_0->rx_big.info[VAR_1].m);
  VAR_0->rx_big.info[VAR_1].m = ((void*)0);
 }

 for (VAR_1 = 0; VAR_1 <= VAR_0->rx_small.mask; VAR_1++) {
  if (VAR_0->rx_small.info[VAR_1].m == ((void*)0))
   continue;
  FUNC_0(VAR_0->rx_small.dmat,
      VAR_0->rx_small.info[VAR_1].map);
  FUNC_1(VAR_0->rx_small.info[VAR_1].m);
  VAR_0->rx_small.info[VAR_1].m = ((void*)0);
 }


 if (VAR_0->tx.info == ((void*)0))
  return;

 for (VAR_1 = 0; VAR_1 <= VAR_0->tx.mask; VAR_1++) {
  VAR_0->tx.info[VAR_1].flag = 0;
  if (VAR_0->tx.info[VAR_1].m == ((void*)0))
   continue;
  FUNC_0(VAR_0->tx.dmat,
      VAR_0->tx.info[VAR_1].map);
  FUNC_1(VAR_0->tx.info[VAR_1].m);
  VAR_0->tx.info[VAR_1].m = ((void*)0);
 }
}
