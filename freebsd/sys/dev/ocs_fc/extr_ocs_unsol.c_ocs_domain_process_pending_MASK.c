
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_15__ {scalar_t__ pend_frames_processed; int pend_frames_lock; int pend_frames; } ;
typedef TYPE_2__ ocs_xport_fcfi_t ;
struct TYPE_16__ {int hw; TYPE_1__* xport; } ;
typedef TYPE_3__ ocs_t ;
struct TYPE_17__ {int * hio; } ;
typedef TYPE_4__ ocs_hw_sequence_t ;
struct TYPE_18__ {size_t fcf_indicator; TYPE_3__* ocs; } ;
typedef TYPE_5__ ocs_domain_t ;
typedef int int32_t ;
struct TYPE_14__ {TYPE_2__* fcfi; } ;


 size_t VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (TYPE_5__*,TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int *,TYPE_4__*) ;
 TYPE_4__* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*,char*,scalar_t__) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (int *) ;

int32_t
FUNC_9(ocs_domain_t *VAR_1)
{
 ocs_t *VAR_2 = VAR_1->ocs;
 ocs_xport_fcfi_t *VAR_3;
 ocs_hw_sequence_t *VAR_4 = ((void*)0);
 uint32_t VAR_5 = 0;

 FUNC_0(VAR_1->fcf_indicator < VAR_0, -1);
 VAR_3 = &VAR_2->xport->fcfi[VAR_1->fcf_indicator];

 for (;;) {




  if (FUNC_2(VAR_1)) {
   break;
  }


  FUNC_5(&VAR_3->pend_frames_lock);
   VAR_4 = FUNC_4(&VAR_3->pend_frames);
   if (VAR_4 == ((void*)0)) {
    VAR_5 = VAR_3->pend_frames_processed;
    VAR_3->pend_frames_processed = 0;
    FUNC_8(&VAR_3->pend_frames_lock);
    break;
   }
   VAR_3->pend_frames_processed++;
  FUNC_8(&VAR_3->pend_frames_lock);


  if (FUNC_1(VAR_1, VAR_4)) {
   if (VAR_4->hio != ((void*)0)) {
    FUNC_7(VAR_2, VAR_4->hio);
   }
   FUNC_3(&VAR_2->hw, VAR_4);
  }
 }
 if (VAR_5 != 0) {
  FUNC_6(VAR_2, "%u domain frames held and processed\n", VAR_5);
 }
 return 0;
}
