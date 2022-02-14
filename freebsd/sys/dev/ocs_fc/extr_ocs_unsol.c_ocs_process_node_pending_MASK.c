
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_12__ {int hw; } ;
typedef TYPE_1__ ocs_t ;
struct TYPE_13__ {scalar_t__ pend_frames_processed; int pend_frames_lock; int pend_frames; TYPE_1__* ocs; } ;
typedef TYPE_2__ ocs_node_t ;
struct TYPE_14__ {int * hio; } ;
typedef TYPE_3__ ocs_hw_sequence_t ;
typedef int int32_t ;


 int FUNC_0 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (int *) ;

int32_t
FUNC_8(ocs_node_t *VAR_0)
{
 ocs_t *VAR_1 = VAR_0->ocs;
 ocs_hw_sequence_t *VAR_2 = ((void*)0);
 uint32_t VAR_3 = 0;

 for (;;) {




  if (FUNC_5(VAR_0)) {
   break;
  }


  FUNC_2(&VAR_0->pend_frames_lock);
   VAR_2 = FUNC_1(&VAR_0->pend_frames);
   if (VAR_2 == ((void*)0)) {
    VAR_3 = VAR_0->pend_frames_processed;
    VAR_0->pend_frames_processed = 0;
    FUNC_7(&VAR_0->pend_frames_lock);
    break;
   }
   VAR_0->pend_frames_processed++;
  FUNC_7(&VAR_0->pend_frames_lock);


  if (FUNC_4(VAR_0, VAR_2)) {
   if (VAR_2->hio != ((void*)0)) {
    FUNC_6(VAR_1, VAR_2->hio);
   }
   FUNC_0(&VAR_1->hw, VAR_2);
  }
 }

 if (VAR_3 != 0) {
  FUNC_3(VAR_1, "%u node frames held and processed\n", VAR_3);
 }

 return 0;
}
