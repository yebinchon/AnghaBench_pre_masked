
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zthr_request_lock; int zthr_state_lock; int zthr_cancel; int zthr_cv; int * zthr_thread; } ;
typedef TYPE_1__ zthr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(zthr_t *VAR_1)
{
 FUNC_3(&VAR_1->zthr_request_lock);
 FUNC_3(&VAR_1->zthr_state_lock);
 if (VAR_1->zthr_thread != ((void*)0)) {
  VAR_1->zthr_cancel = VAR_0;


  FUNC_1(&VAR_1->zthr_cv);

  while (VAR_1->zthr_thread != ((void*)0))
   FUNC_2(&VAR_1->zthr_cv, &VAR_1->zthr_state_lock);

  FUNC_0(!VAR_1->zthr_cancel);
 }

 FUNC_4(&VAR_1->zthr_state_lock);
 FUNC_4(&VAR_1->zthr_request_lock);
}
