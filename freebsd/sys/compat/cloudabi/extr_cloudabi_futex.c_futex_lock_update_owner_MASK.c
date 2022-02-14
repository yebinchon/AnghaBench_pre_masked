
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct futex_lock {scalar_t__ fl_owner; } ;
typedef int cloudabi_lock_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct futex_lock*,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int
FUNC_2(struct futex_lock *VAR_1, cloudabi_lock_t *VAR_2)
{
 cloudabi_lock_t VAR_3;
 int VAR_4;

 if (VAR_1->fl_owner == VAR_0) {
  VAR_4 = FUNC_1(VAR_2, &VAR_3);
  if (VAR_4 != 0)
   return (VAR_4);
  FUNC_0(VAR_1, VAR_3);
 }
 return (0);
}
