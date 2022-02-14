
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_16__ {TYPE_3__* rq_thread_info; } ;
typedef TYPE_4__ ocs_xport_t ;
struct TYPE_17__ {scalar_t__ rq_threads; int hw; TYPE_4__* xport; } ;
typedef TYPE_5__ ocs_t ;
struct TYPE_18__ {TYPE_2__* header; } ;
typedef TYPE_6__ ocs_hw_sequence_t ;
typedef scalar_t__ int32_t ;
struct TYPE_19__ {int ox_id; } ;
typedef TYPE_7__ fc_header_t ;
struct TYPE_15__ {int seq_cbuf; } ;
struct TYPE_13__ {TYPE_7__* virt; } ;
struct TYPE_14__ {TYPE_1__ dma; } ;


 int FUNC_0 (char*) ;
 size_t FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,TYPE_6__*) ;
 int FUNC_3 (int *,TYPE_6__*) ;
 scalar_t__ FUNC_4 (TYPE_5__*,TYPE_6__*) ;

int32_t
FUNC_5(void *VAR_0, ocs_hw_sequence_t *VAR_1)
{
 ocs_t *VAR_2 = VAR_0;
 ocs_xport_t *VAR_3 = VAR_2->xport;
 int32_t VAR_4;

 FUNC_0("");

 if (VAR_2->rq_threads == 0) {
  VAR_4 = FUNC_4(VAR_2, VAR_1);
 } else {

  fc_header_t *VAR_5 = VAR_1->header->dma.virt;
  uint32_t VAR_6 = FUNC_1(VAR_5->ox_id);
  uint32_t VAR_7 = VAR_6 % VAR_2->rq_threads;

  VAR_4 = FUNC_2(VAR_3->rq_thread_info[VAR_7].seq_cbuf, VAR_1);
 }

 if (VAR_4) {
  FUNC_3(&VAR_2->hw, VAR_1);
 }

 return 0;
}
