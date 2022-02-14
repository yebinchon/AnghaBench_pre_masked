
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * entry; int dma; } ;
struct TYPE_5__ {int mtx; int * br; } ;
struct mxge_slice_state {TYPE_2__ rx_done; TYPE_1__ tx; int * fw_stats; int fw_stats_dma; } ;
struct TYPE_7__ {int num_slices; struct mxge_slice_state* ss; } ;
typedef TYPE_3__ mxge_softc_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct mxge_slice_state*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(mxge_softc_t *VAR_1)
{
 struct mxge_slice_state *VAR_2;
 int VAR_3;


 if (VAR_1->ss == ((void*)0))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_slices; VAR_3++) {
  VAR_2 = &VAR_1->ss[VAR_3];
  if (VAR_2->fw_stats != ((void*)0)) {
   FUNC_3(&VAR_2->fw_stats_dma);
   VAR_2->fw_stats = ((void*)0);






   FUNC_2(&VAR_2->tx.mtx);
  }
  if (VAR_2->rx_done.entry != ((void*)0)) {
   FUNC_3(&VAR_2->rx_done.dma);
   VAR_2->rx_done.entry = ((void*)0);
  }
 }
 FUNC_1(VAR_1->ss, VAR_0);
 VAR_1->ss = ((void*)0);
}
