
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t u_char ;
typedef int * tcb_p ;
typedef TYPE_2__* lcb_p ;
typedef TYPE_3__* hcb_p ;
struct TYPE_10__ {int notask_ba; int * target; } ;
struct TYPE_8__ {void* itlq_tbl_sa; } ;
struct TYPE_9__ {int* cb_tags; void** itlq_tbl; TYPE_1__ head; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_3__*,size_t,size_t) ;
 int* FUNC_2 (int,char*) ;
 void** FUNC_3 (int,char*) ;
 TYPE_2__* FUNC_4 (int *,size_t) ;
 int FUNC_5 (void**,int,char*) ;
 int FUNC_6 (void**) ;

__attribute__((used)) static void FUNC_7 (hcb_p VAR_1, u_char VAR_2, u_char VAR_3)
{
 tcb_p VAR_4 = &VAR_1->target[VAR_2];
 lcb_p VAR_5 = FUNC_4(VAR_4, VAR_3);
 int VAR_6;




 if (!VAR_5 && !(VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3)))
  return;





 VAR_5->itlq_tbl = FUNC_3(VAR_0*4, "ITLQ_TBL");
 if (!VAR_5->itlq_tbl)
  return;
 VAR_5->cb_tags = FUNC_2(VAR_0, "CB_TAGS");
 if (!VAR_5->cb_tags) {
  FUNC_5(VAR_5->itlq_tbl, VAR_0*4, "ITLQ_TBL");
  VAR_5->itlq_tbl = ((void*)0);
  return;
 }




 for (VAR_6 = 0 ; VAR_6 < VAR_0 ; VAR_6++)
  VAR_5->itlq_tbl[VAR_6] = FUNC_0(VAR_1->notask_ba);




 for (VAR_6 = 0 ; VAR_6 < VAR_0 ; VAR_6++)
  VAR_5->cb_tags[VAR_6] = VAR_6;





 VAR_5->head.itlq_tbl_sa = FUNC_0(FUNC_6(VAR_5->itlq_tbl));
}
