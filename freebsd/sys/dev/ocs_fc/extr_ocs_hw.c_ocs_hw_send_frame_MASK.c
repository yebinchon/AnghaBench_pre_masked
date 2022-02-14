
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_21__ {int wqebuf; } ;
typedef TYPE_3__ ocs_hw_wqe_t ;
struct TYPE_20__ {int wqe_size; } ;
struct TYPE_26__ {TYPE_2__ config; } ;
struct TYPE_22__ {int os; TYPE_8__ sli; TYPE_7__** hw_wq; int * wq_class_array; } ;
typedef TYPE_4__ ocs_hw_t ;
struct TYPE_23__ {TYPE_14__* wqcb; TYPE_4__* hw; TYPE_3__ wqe; } ;
typedef TYPE_5__ ocs_hw_send_frame_context_t ;
typedef int ocs_hw_rtn_e ;
struct TYPE_24__ {int len; } ;
typedef TYPE_6__ ocs_dma_t ;
typedef scalar_t__ int32_t ;
struct TYPE_25__ {int use_count; TYPE_1__* send_frame_io; } ;
typedef TYPE_7__ hw_wq_t ;
typedef int fc_header_le_t ;
struct TYPE_19__ {int indicator; } ;
struct TYPE_18__ {int instance_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_7__*,TYPE_3__*) ;
 TYPE_14__* FUNC_2 (TYPE_4__*,void (*) (void*,int *,int32_t),void*) ;
 int FUNC_3 (int ,char*,...) ;
 TYPE_7__* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_8__*,int ,int ,int ,int ,int *,TYPE_6__*,int ,int ,int ,int ) ;

ocs_hw_rtn_e
FUNC_6(ocs_hw_t *VAR_4, fc_header_le_t *VAR_5, uint8_t VAR_6, uint8_t VAR_7, ocs_dma_t *VAR_8,
     ocs_hw_send_frame_context_t *VAR_9, void (*VAR_10)(void *VAR_11, uint8_t *VAR_12, int32_t VAR_13), void *VAR_14)
{
 int32_t VAR_15;
 ocs_hw_wqe_t *VAR_16;
 uint32_t VAR_17;
 hw_wq_t *VAR_18;

 VAR_16 = &VAR_9->wqe;


 VAR_9->hw = VAR_4;


 VAR_9->wqcb = FUNC_2(VAR_4, VAR_10, VAR_14);
 if (VAR_9->wqcb == ((void*)0)) {
  FUNC_3(VAR_4->os, "can't allocate request tag\n");
  return VAR_1;
 }


 VAR_18 = FUNC_4(VAR_4->wq_class_array[1]);
 if (VAR_18 == ((void*)0)) {
  VAR_18 = VAR_4->hw_wq[0];
 }


 VAR_17 = VAR_18->send_frame_io->indicator;


 VAR_15 = FUNC_5(&VAR_4->sli, VAR_16->wqebuf, VAR_4->sli.config.wqe_size, VAR_6, VAR_7, (uint32_t*) VAR_5, VAR_8,
    VAR_8->len, VAR_3, VAR_17, VAR_9->wqcb->instance_index);
 if (VAR_15) {
  FUNC_3(VAR_4->os, "sli_send_frame_wqe failed: %d\n", VAR_15);
  return VAR_0;
 }


 VAR_15 = FUNC_1(VAR_18, VAR_16);
 if (VAR_15) {
  FUNC_3(VAR_4->os, "hw_wq_write failed: %d\n", VAR_15);
  return VAR_0;
 }

 FUNC_0(VAR_18->use_count++);

 return VAR_2;
}
