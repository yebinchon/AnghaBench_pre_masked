
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rr_track_all; int rr_writer_wanted; int rr_linked_rcount; int rr_anon_rcount; int * rr_writer; int rr_cv; int rr_lock; } ;
typedef TYPE_1__ rrwlock_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ,int *) ;
 int FUNC_1 (int *,int *,int ,int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(rrwlock_t *VAR_3, boolean_t VAR_4)
{
 FUNC_1(&VAR_3->rr_lock, ((void*)0), VAR_2, ((void*)0));
 FUNC_0(&VAR_3->rr_cv, ((void*)0), VAR_1, ((void*)0));
 VAR_3->rr_writer = ((void*)0);
 FUNC_2(&VAR_3->rr_anon_rcount);
 FUNC_2(&VAR_3->rr_linked_rcount);
 VAR_3->rr_writer_wanted = VAR_0;
 VAR_3->rr_track_all = VAR_4;
}
