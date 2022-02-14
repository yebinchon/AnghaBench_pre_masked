
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_21__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef void* uint8_t ;
typedef void* uint32_t ;
struct TYPE_28__ {int nodes_free_list; } ;
typedef TYPE_2__ ocs_xport_t ;
struct TYPE_29__ {int hw; TYPE_2__* xport; } ;
typedef TYPE_3__ ocs_t ;
struct TYPE_30__ {int lookup; int node_list; scalar_t__ shutting_down; TYPE_3__* ocs; } ;
typedef TYPE_4__ ocs_sport_t ;
struct TYPE_26__ {TYPE_5__* app; } ;
struct TYPE_27__ {TYPE_5__* node; int indicator; } ;
struct TYPE_32__ {int size; TYPE_5__* virt; } ;
struct TYPE_31__ {int * mgmt_functions; scalar_t__ evtdepth; TYPE_1__ sm; TYPE_21__ rnode; TYPE_6__ sparm_dma_buf; int els_io_active_list; int els_io_pend_list; int active_ios; void* instance_index; int active_ios_lock; int pend_frames; int pend_frames_lock; void* targ; void* init; TYPE_3__* ocs; TYPE_4__* sport; void* max_wr_xfer_size; } ;
typedef TYPE_5__ ocs_node_t ;
typedef TYPE_6__ ocs_dma_t ;
typedef void* int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 void* FUNC_3 (int *,TYPE_21__*,void*,TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,TYPE_5__*) ;
 int FUNC_5 (int *,int ,int ) ;
 TYPE_5__* FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,int *,char*,void*) ;
 int FUNC_8 (TYPE_3__*,char*,void*) ;
 int FUNC_9 (TYPE_3__*,char*,void*) ;
 int FUNC_10 (TYPE_5__*,int ,int) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (int ,void*,TYPE_5__*) ;

ocs_node_t *
FUNC_17(ocs_sport_t *VAR_5, uint32_t VAR_6, uint8_t VAR_7, uint8_t VAR_8)
{
 int32_t VAR_9;
 ocs_node_t *VAR_10 = ((void*)0);
 uint32_t VAR_11;
 uint32_t VAR_12;
 ocs_t *VAR_13 = VAR_5->ocs;
 ocs_xport_t *VAR_14 = VAR_13->xport;
 ocs_dma_t VAR_15;

 FUNC_0(VAR_5, ((void*)0));

 if (VAR_5->shutting_down) {
  FUNC_8(VAR_13, "node allocation when shutting down %06x", VAR_6);
  return ((void*)0);
 }

 FUNC_1(VAR_13);
  VAR_10 = FUNC_6(&VAR_14->nodes_free_list);
 FUNC_2(VAR_13);
 if (VAR_10 == ((void*)0)) {
  FUNC_9(VAR_13, "node allocation failed %06x", VAR_6);
  return ((void*)0);
 }


 VAR_11 = VAR_10->instance_index;
 VAR_12 = VAR_10->max_wr_xfer_size;
 VAR_15 = VAR_10->sparm_dma_buf;

 FUNC_10(VAR_10, 0, sizeof(*VAR_10));
 VAR_10->instance_index = VAR_11;
 VAR_10->max_wr_xfer_size = VAR_12;
 VAR_10->sparm_dma_buf = VAR_15;
 VAR_10->rnode.indicator = VAR_0;

 VAR_10->sport = VAR_5;
 FUNC_14(VAR_5);

  VAR_10->ocs = VAR_13;
  VAR_10->init = VAR_7;
  VAR_10->targ = VAR_8;

  VAR_9 = FUNC_3(&VAR_13->hw, &VAR_10->rnode, VAR_6, VAR_5);
  if (VAR_9) {
   FUNC_9(VAR_13, "ocs_hw_node_alloc failed: %d\n", VAR_9);
   FUNC_15(VAR_5);


   FUNC_1(VAR_13);
   FUNC_4(&VAR_14->nodes_free_list, VAR_10);
   FUNC_2(VAR_13);

   return ((void*)0);
  }
  FUNC_4(&VAR_5->node_list, VAR_10);

  FUNC_11(VAR_10);
  FUNC_7(VAR_13, &VAR_10->pend_frames_lock, "pend_frames_lock[%d]", VAR_10->instance_index);
  FUNC_5(&VAR_10->pend_frames, VAR_3, VAR_1);
  FUNC_7(VAR_13, &VAR_10->active_ios_lock, "active_ios[%d]", VAR_10->instance_index);
  FUNC_5(&VAR_10->active_ios, VAR_4, VAR_1);
  FUNC_5(&VAR_10->els_io_pend_list, VAR_4, VAR_1);
  FUNC_5(&VAR_10->els_io_active_list, VAR_4, VAR_1);
  FUNC_13(VAR_10);


  FUNC_10(VAR_10->sparm_dma_buf.virt, 0, VAR_10->sparm_dma_buf.size);

  VAR_10->rnode.node = VAR_10;
  VAR_10->sm.app = VAR_10;
  VAR_10->evtdepth = 0;

  FUNC_12(VAR_10);

  FUNC_16(VAR_5->lookup, VAR_6, VAR_10);
 FUNC_15(VAR_5);
 VAR_10->mgmt_functions = &VAR_2;

 return VAR_10;
}
