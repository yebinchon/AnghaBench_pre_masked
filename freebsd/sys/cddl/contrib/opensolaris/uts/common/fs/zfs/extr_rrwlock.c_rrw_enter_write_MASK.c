
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rr_lock; int * rr_writer; int rr_writer_wanted; int rr_cv; int rr_linked_rcount; int rr_anon_rcount; } ;
typedef TYPE_1__ rrwlock_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

void
FUNC_5(rrwlock_t *VAR_3)
{
 FUNC_2(&VAR_3->rr_lock);
 FUNC_0(VAR_3->rr_writer != VAR_2);

 while (FUNC_4(&VAR_3->rr_anon_rcount) > 0 ||
     FUNC_4(&VAR_3->rr_linked_rcount) > 0 ||
     VAR_3->rr_writer != ((void*)0)) {
  VAR_3->rr_writer_wanted = VAR_1;
  FUNC_1(&VAR_3->rr_cv, &VAR_3->rr_lock);
 }
 VAR_3->rr_writer_wanted = VAR_0;
 VAR_3->rr_writer = VAR_2;
 FUNC_3(&VAR_3->rr_lock);
}
