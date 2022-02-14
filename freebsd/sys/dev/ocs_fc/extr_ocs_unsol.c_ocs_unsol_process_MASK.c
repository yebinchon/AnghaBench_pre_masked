
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;


typedef size_t uint8_t ;
struct TYPE_19__ {int pend_frames_lock; int pend_frames; scalar_t__ hold_frames; } ;
typedef TYPE_3__ ocs_xport_fcfi_t ;
struct TYPE_17__ {scalar_t__ override_fcfi; } ;
struct TYPE_16__ {int first_domain_idx; TYPE_1__ workaround; } ;
struct TYPE_20__ {TYPE_11__ hw; TYPE_2__* xport; } ;
typedef TYPE_4__ ocs_t ;
struct TYPE_21__ {size_t fcfi; int * hio; } ;
typedef TYPE_5__ ocs_hw_sequence_t ;
typedef int ocs_domain_t ;
typedef int int32_t ;
struct TYPE_18__ {TYPE_3__* fcfi; } ;


 size_t FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int *,TYPE_5__*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_11__*,size_t) ;
 int FUNC_4 (TYPE_11__*,TYPE_5__*) ;
 int FUNC_5 (int *,TYPE_5__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*,char*,size_t) ;
 int FUNC_9 (TYPE_4__*,int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int32_t
FUNC_11(ocs_t *VAR_0, ocs_hw_sequence_t *VAR_1)
{
 ocs_xport_fcfi_t *VAR_2 = ((void*)0);
 ocs_domain_t *VAR_3;
 uint8_t VAR_4 = VAR_1->fcfi;


 if (VAR_0->hw.workaround.override_fcfi) {
  if (VAR_0->hw.first_domain_idx > -1) {
   VAR_4 = VAR_0->hw.first_domain_idx;
  }
 }


 if (VAR_4 < FUNC_0(VAR_0->xport->fcfi)) {
  VAR_2 = &VAR_0->xport->fcfi[VAR_4];
 }


 if (VAR_2 == ((void*)0)) {
  FUNC_8(VAR_0, "FCFI %d is not valid, dropping frame\n", VAR_1->fcfi);
  if (VAR_1->hio != ((void*)0)) {
   FUNC_9(VAR_0, VAR_1->hio);
  }

  FUNC_4(&VAR_0->hw, VAR_1);
  return 0;
 }
 VAR_3 = FUNC_3(&VAR_0->hw, VAR_4);






 if (VAR_3 == ((void*)0) ||
     VAR_2->hold_frames ||
     !FUNC_6(&VAR_2->pend_frames)) {
  FUNC_7(&VAR_2->pend_frames_lock);
   FUNC_5(&VAR_2->pend_frames, VAR_1);
  FUNC_10(&VAR_2->pend_frames_lock);

  if (VAR_3 != ((void*)0)) {

   FUNC_2(VAR_3);
  }
 } else {




  if (FUNC_1(VAR_3, VAR_1)) {
   if (VAR_1->hio != ((void*)0)) {
    FUNC_9(VAR_0, VAR_1->hio);
   }
   FUNC_4(&VAR_0->hw, VAR_1);
  }
 }
 return 0;
}
