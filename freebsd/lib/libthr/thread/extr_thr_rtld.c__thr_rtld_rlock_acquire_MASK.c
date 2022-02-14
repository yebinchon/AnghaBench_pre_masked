
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtld_lock {int lock; } ;
struct pthread {int rdlock_count; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct pthread*) ;
 struct pthread* FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int ,int *) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0)
{
 struct pthread *VAR_1;
 struct rtld_lock *VAR_2;
 int VAR_3;

 VAR_1 = FUNC_3();
 FUNC_1();
 VAR_2 = (struct rtld_lock *)VAR_0;

 FUNC_2(VAR_1);
 while (FUNC_4(&VAR_2->lock, 0, ((void*)0)) != 0)
  ;
 VAR_1->rdlock_count++;
 FUNC_0();
}
