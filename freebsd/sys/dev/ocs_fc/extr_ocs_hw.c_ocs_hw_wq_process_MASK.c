
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_11__ {int status; } ;
typedef TYPE_2__ sli4_fc_wcqe_t ;
struct TYPE_12__ {int os; int q_hist; } ;
typedef TYPE_3__ ocs_hw_t ;
typedef int int32_t ;
struct TYPE_13__ {int arg; int (* callback ) (int ,int *,int ) ;} ;
typedef TYPE_4__ hw_wq_callback_t ;
struct TYPE_14__ {TYPE_1__* queue; } ;
typedef TYPE_5__ hw_cq_t ;
struct TYPE_10__ {int index; int length; int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (TYPE_3__*,scalar_t__) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *,int ,void*,int ,int ,int) ;
 int FUNC_3 (int ,int *,int ) ;

void
FUNC_4(ocs_hw_t *VAR_2, hw_cq_t *VAR_3, uint8_t *VAR_4, int32_t VAR_5, uint16_t VAR_6)
{
 hw_wq_callback_t *VAR_7;

 FUNC_2(&VAR_2->q_hist, VAR_1, (void *)VAR_4, ((sli4_fc_wcqe_t *)VAR_4)->status, VAR_3->queue->id,
         ((VAR_3->queue->index - 1) & (VAR_3->queue->length - 1)));

 if(VAR_6 == VAR_0) {
  if(VAR_5) {
   FUNC_1(VAR_2->os, "reque xri failed, status = %d \n", VAR_5);
  }
  return;
 }

 VAR_7 = FUNC_0(VAR_2, VAR_6);
 if (VAR_7 == ((void*)0)) {
  FUNC_1(VAR_2->os, "invalid request tag: x%x\n", VAR_6);
  return;
 }

 if (VAR_7->callback == ((void*)0)) {
  FUNC_1(VAR_2->os, "wqcb callback is NULL\n");
  return;
 }

 (*VAR_7->callback)(VAR_7->arg, VAR_4, VAR_5);
}
