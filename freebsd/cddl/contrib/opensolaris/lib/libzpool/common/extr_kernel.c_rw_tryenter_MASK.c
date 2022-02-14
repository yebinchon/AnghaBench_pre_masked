
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ initialized; void* rw_owner; int rw_count; int rw_lock; } ;
typedef TYPE_1__ krwlock_t ;
typedef scalar_t__ krw_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int*,int) ;
 void* VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(krwlock_t *VAR_3, krw_t VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_3->initialized == VAR_0);
 FUNC_0(VAR_3->rw_owner != (void *)-1UL);
 FUNC_0(VAR_3->rw_owner != VAR_2);

 if (VAR_4 == VAR_1)
  VAR_5 = FUNC_2(&VAR_3->rw_lock);
 else
  VAR_5 = FUNC_3(&VAR_3->rw_lock);

 if (VAR_5 == 0) {
  FUNC_0(VAR_3->rw_owner == ((void*)0));
  if (VAR_4 == VAR_1) {
   FUNC_0(VAR_3->rw_count >= 0);
   FUNC_1(&VAR_3->rw_count, 1);
  } else {
   FUNC_0(VAR_3->rw_count == 0);
   VAR_3->rw_count = -1;
   VAR_3->rw_owner = VAR_2;
  }
  return (1);
 }

 return (0);
}
