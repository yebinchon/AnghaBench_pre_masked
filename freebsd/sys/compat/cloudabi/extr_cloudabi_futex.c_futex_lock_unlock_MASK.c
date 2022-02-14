
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__ td_tid; } ;
struct futex_lock {scalar_t__ fl_owner; } ;
typedef int cloudabi_lock_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct futex_lock*,int *) ;
 int FUNC_1 (struct futex_lock*,int *) ;

__attribute__((used)) static int
FUNC_2(struct futex_lock *VAR_2, struct thread *VAR_3,
    cloudabi_lock_t *VAR_4)
{
 int VAR_5;


 VAR_5 = FUNC_0(VAR_2, VAR_4);
 if (VAR_5 != 0)
  return (VAR_5);
 if (VAR_2->fl_owner != VAR_1 && VAR_2->fl_owner != VAR_3->td_tid)
  return (VAR_0);
 return (FUNC_1(VAR_2, VAR_4));
}
