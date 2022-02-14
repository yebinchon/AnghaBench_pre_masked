
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int mask; TYPE_5__* info; int * dmat; int extra_map; TYPE_5__* shadow; } ;
struct TYPE_8__ {int mask; TYPE_5__* info; int * dmat; int extra_map; TYPE_5__* shadow; } ;
struct TYPE_7__ {int mask; TYPE_5__* info; int * dmat; TYPE_5__* seg_list; TYPE_5__* req_bytes; } ;
struct TYPE_6__ {int * entry; int dma; } ;
struct mxge_slice_state {TYPE_4__ rx_big; TYPE_3__ rx_small; TYPE_2__ tx; TYPE_1__ rx_done; } ;
struct TYPE_10__ {int map; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct mxge_slice_state *VAR_1)
{
 int VAR_2;


 if (VAR_1->rx_done.entry != ((void*)0))
  FUNC_3(&VAR_1->rx_done.dma);
 VAR_1->rx_done.entry = ((void*)0);

 if (VAR_1->tx.req_bytes != ((void*)0))
  FUNC_2(VAR_1->tx.req_bytes, VAR_0);
 VAR_1->tx.req_bytes = ((void*)0);

 if (VAR_1->tx.seg_list != ((void*)0))
  FUNC_2(VAR_1->tx.seg_list, VAR_0);
 VAR_1->tx.seg_list = ((void*)0);

 if (VAR_1->rx_small.shadow != ((void*)0))
  FUNC_2(VAR_1->rx_small.shadow, VAR_0);
 VAR_1->rx_small.shadow = ((void*)0);

 if (VAR_1->rx_big.shadow != ((void*)0))
  FUNC_2(VAR_1->rx_big.shadow, VAR_0);
 VAR_1->rx_big.shadow = ((void*)0);

 if (VAR_1->tx.info != ((void*)0)) {
  if (VAR_1->tx.dmat != ((void*)0)) {
   for (VAR_2 = 0; VAR_2 <= VAR_1->tx.mask; VAR_2++) {
    FUNC_1(VAR_1->tx.dmat,
         VAR_1->tx.info[VAR_2].map);
   }
   FUNC_0(VAR_1->tx.dmat);
  }
  FUNC_2(VAR_1->tx.info, VAR_0);
 }
 VAR_1->tx.info = ((void*)0);

 if (VAR_1->rx_small.info != ((void*)0)) {
  if (VAR_1->rx_small.dmat != ((void*)0)) {
   for (VAR_2 = 0; VAR_2 <= VAR_1->rx_small.mask; VAR_2++) {
    FUNC_1(VAR_1->rx_small.dmat,
         VAR_1->rx_small.info[VAR_2].map);
   }
   FUNC_1(VAR_1->rx_small.dmat,
        VAR_1->rx_small.extra_map);
   FUNC_0(VAR_1->rx_small.dmat);
  }
  FUNC_2(VAR_1->rx_small.info, VAR_0);
 }
 VAR_1->rx_small.info = ((void*)0);

 if (VAR_1->rx_big.info != ((void*)0)) {
  if (VAR_1->rx_big.dmat != ((void*)0)) {
   for (VAR_2 = 0; VAR_2 <= VAR_1->rx_big.mask; VAR_2++) {
    FUNC_1(VAR_1->rx_big.dmat,
         VAR_1->rx_big.info[VAR_2].map);
   }
   FUNC_1(VAR_1->rx_big.dmat,
        VAR_1->rx_big.extra_map);
   FUNC_0(VAR_1->rx_big.dmat);
  }
  FUNC_2(VAR_1->rx_big.info, VAR_0);
 }
 VAR_1->rx_big.info = ((void*)0);
}
