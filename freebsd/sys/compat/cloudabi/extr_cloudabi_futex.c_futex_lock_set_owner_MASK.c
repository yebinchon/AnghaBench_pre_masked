
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct futex_lock {int fl_owner; } ;
typedef int cloudabi_lock_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_0(struct futex_lock *VAR_4, cloudabi_lock_t VAR_5)
{


 if ((VAR_5 & ~VAR_1) == 0) {
  VAR_4->fl_owner = VAR_2;
  return;
 }
 VAR_5 &= ~(VAR_1 | VAR_0);


 if (VAR_5 == VAR_3) {
  VAR_4->fl_owner = VAR_2;
  return;
 }
 VAR_4->fl_owner = VAR_5;
}
