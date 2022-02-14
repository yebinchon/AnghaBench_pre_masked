
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct tx_ring {int me; struct ixl_tx_queue* que; int tx_paddr; struct i40e_tx_desc* tx_base; int tail; int * tx_rsq; } ;
struct ixl_vsi {int enable_head_writeback; struct ixl_tx_queue* tx_queues; TYPE_1__* shared; } ;
struct ixl_tx_queue {struct ixl_vsi* vsi; struct tx_ring txr; } ;
struct iavf_sc {struct ixl_vsi vsi; } ;
struct i40e_tx_desc {int dummy; } ;
typedef int qidx_t ;
typedef TYPE_1__* if_softc_ctx_t ;
typedef int if_ctx_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int isc_ntxqsets; int* isc_ntxd; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct iavf_sc* FUNC_5 (int ) ;
 int * FUNC_6 (int,int ,int) ;

__attribute__((used)) static int
FUNC_7(if_ctx_t VAR_5, caddr_t *VAR_6, uint64_t *VAR_7, int VAR_8, int VAR_9)
{
 struct iavf_sc *VAR_10 = FUNC_5(VAR_5);
 struct ixl_vsi *VAR_11 = &VAR_10->vsi;
 if_softc_ctx_t VAR_12 = VAR_11->shared;
 struct ixl_tx_queue *VAR_13;
 int VAR_14, VAR_15, VAR_16 = 0;

 FUNC_1(VAR_12->isc_ntxqsets > 0);
 FUNC_1(VAR_8 == 1);
 FUNC_1(VAR_12->isc_ntxqsets == VAR_9);


 if (!(VAR_11->tx_queues =
     (struct ixl_tx_queue *) FUNC_6(sizeof(struct ixl_tx_queue) *VAR_9, VAR_1, VAR_2 | VAR_3))) {
  FUNC_2(FUNC_4(VAR_5), "Unable to allocate TX ring memory\n");
  return (VAR_0);
 }

 for (VAR_14 = 0, VAR_13 = VAR_11->tx_queues; VAR_14 < VAR_9; VAR_14++, VAR_13++) {
  struct tx_ring *VAR_17 = &VAR_13->txr;

  VAR_17->me = VAR_14;
  VAR_13->vsi = VAR_11;

  if (!VAR_11->enable_head_writeback) {

   if (!(VAR_17->tx_rsq = FUNC_6(sizeof(qidx_t) * VAR_12->isc_ntxd[0], VAR_1, VAR_2))) {
    FUNC_2(FUNC_4(VAR_5), "failed to allocate tx_rsq memory\n");
    VAR_16 = VAR_0;
    goto fail;
   }

   for (VAR_15 = 0; VAR_15 < VAR_12->isc_ntxd[0]; VAR_15++)
    VAR_17->tx_rsq[VAR_15] = VAR_4;
  }

  VAR_17->tail = FUNC_0(VAR_17->me);
  VAR_17->tx_base = (struct i40e_tx_desc *)VAR_6[VAR_14 * VAR_8];
  VAR_17->tx_paddr = VAR_7[VAR_14 * VAR_8];
  VAR_17->que = VAR_13;
 }

 return (0);
fail:
 FUNC_3(VAR_5);
 return (VAR_16);
}
