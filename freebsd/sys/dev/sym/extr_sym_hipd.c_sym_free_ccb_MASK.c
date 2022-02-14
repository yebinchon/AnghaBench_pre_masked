
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_2__* tcb_p ;
typedef TYPE_3__* lcb_p ;
typedef TYPE_4__* hcb_p ;
typedef TYPE_5__* ccb_p ;
struct TYPE_17__ {size_t target; int tag; int link_ccbq; int host_status; int * cam_ccb; scalar_t__ dmamapped; int dmamap; int lun; } ;
struct TYPE_16__ {int free_ccbq; int data_dmat; TYPE_5__* last_cp; int bad_itl_ba; int bad_itlq_ba; TYPE_2__* target; } ;
struct TYPE_13__ {void* resel_sa; void* itl_task_sa; } ;
struct TYPE_15__ {int* cb_tags; size_t if_tag; scalar_t__ busy_itlq; scalar_t__ busy_itl; TYPE_1__ head; void** itlq_tbl; } ;
struct TYPE_14__ {TYPE_5__* nego_cp; int busy0_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,size_t,int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 size_t VAR_4 ;
 int FUNC_2 (int ,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (char*,TYPE_5__*,int) ;
 int VAR_5 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int *) ;
 TYPE_3__* FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(hcb_p VAR_6, ccb_p VAR_7)
{
 tcb_p VAR_8 = &VAR_6->target[VAR_7->target];
 lcb_p VAR_9 = FUNC_7(VAR_8, VAR_7->lun);

 if (VAR_0 & VAR_1) {
  FUNC_0(VAR_6, VAR_7->target, VAR_7->lun);
  FUNC_4 ("ccb @%p freeing tag %d.\n", VAR_7, VAR_7->tag);
 }




 if (VAR_9) {



  if (VAR_7->tag != VAR_3) {



   VAR_9->cb_tags[VAR_9->if_tag] = VAR_7->tag;
   if (++VAR_9->if_tag == VAR_4)
    VAR_9->if_tag = 0;




   VAR_9->itlq_tbl[VAR_7->tag] = FUNC_3(VAR_6->bad_itlq_ba);
   --VAR_9->busy_itlq;
  } else {




   VAR_9->head.itl_task_sa = FUNC_3(VAR_6->bad_itl_ba);
   --VAR_9->busy_itl;
  }



  if (VAR_9->busy_itlq == 0 && VAR_9->busy_itl == 0)
   VAR_9->head.resel_sa =
    FUNC_3(FUNC_1 (VAR_6, VAR_5));
 }




 else
  FUNC_5(VAR_8->busy0_map, VAR_7->lun);






 if (VAR_7 == VAR_8->nego_cp)
  VAR_8->nego_cp = ((void*)0);
 if (VAR_7->dmamapped) {
  FUNC_2(VAR_6->data_dmat, VAR_7->dmamap);
  VAR_7->dmamapped = 0;
 }




 VAR_7->cam_ccb = ((void*)0);
 VAR_7->host_status = VAR_2;
 FUNC_8(&VAR_7->link_ccbq);
 FUNC_6(&VAR_7->link_ccbq, &VAR_6->free_ccbq);
}
