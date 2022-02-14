
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rwlock {int dummy; } ;
struct lock_object {int dummy; } ;


 int FUNC_0 (struct rwlock*) ;
 int FUNC_1 (struct rwlock*) ;

void
FUNC_2(struct lock_object *VAR_0, uintptr_t VAR_1)
{
 struct rwlock *VAR_2;

 VAR_2 = (struct rwlock *)VAR_0;
 if (VAR_1)
  FUNC_0(VAR_2);
 else
  FUNC_1(VAR_2);
}
