
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rwlock {int rw_lock; } ;
struct lock_object {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rwlock*,int) ;
 int FUNC_1 (struct rwlock*) ;
 int FUNC_2 (struct rwlock*) ;

uintptr_t
FUNC_3(struct lock_object *VAR_3)
{
 struct rwlock *VAR_4;

 VAR_4 = (struct rwlock *)VAR_3;
 FUNC_0(VAR_4, VAR_1 | VAR_0);
 if (VAR_4->rw_lock & VAR_2) {
  FUNC_1(VAR_4);
  return (1);
 } else {
  FUNC_2(VAR_4);
  return (0);
 }
}
