
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lock_resource {int state; scalar_t__ inflight_locks; int refmap; int dirty; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dlm_lock_resource*) ;
 int FUNC_2 (int ,int,int ) ;
 scalar_t__ FUNC_3 (int *) ;

int FUNC_4(struct dlm_lock_resource *VAR_2)
{
 if (!FUNC_1(VAR_2) &&
     (FUNC_3(&VAR_2->dirty) && !(VAR_2->state & VAR_0))) {


  int VAR_3 = FUNC_2(VAR_2->refmap, VAR_1, 0);
  if (VAR_3 >= VAR_1) {


   FUNC_0(VAR_2->inflight_locks != 0);
   return 1;
  }
 }
 return 0;
}
