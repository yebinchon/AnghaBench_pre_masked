
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rw_state; } ;
struct rtld_lock {TYPE_1__ lock; } ;
struct pthread {int rdlock_count; } ;
typedef int int32_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct pthread*) ;
 int VAR_0 ;
 struct pthread* FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1)
{
 struct pthread *VAR_2;
 struct rtld_lock *VAR_3;
 int32_t VAR_4;
 int VAR_5;

 VAR_2 = FUNC_3();
 FUNC_1();
 VAR_3 = (struct rtld_lock *)VAR_1;

 VAR_4 = VAR_3->lock.rw_state;
 if (FUNC_4(&VAR_3->lock) == 0) {
  if ((VAR_4 & VAR_0) == 0)
   VAR_2->rdlock_count--;
  FUNC_2(VAR_2);
 }
 FUNC_0();
}
