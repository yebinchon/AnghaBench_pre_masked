
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rr_linked_rcount; int rr_anon_rcount; int * rr_writer; int rr_cv; int rr_lock; } ;
typedef TYPE_1__ rrwlock_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(rrwlock_t *VAR_0)
{
 FUNC_2(&VAR_0->rr_lock);
 FUNC_1(&VAR_0->rr_cv);
 FUNC_0(VAR_0->rr_writer == ((void*)0));
 FUNC_3(&VAR_0->rr_anon_rcount);
 FUNC_3(&VAR_0->rr_linked_rcount);
}
