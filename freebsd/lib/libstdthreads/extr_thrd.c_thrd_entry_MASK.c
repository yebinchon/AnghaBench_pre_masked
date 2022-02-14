
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thrd_param {int arg; scalar_t__ (* func ) (int ) ;} ;


 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void *
FUNC_2(void *VAR_0)
{
 struct thrd_param VAR_1;

 VAR_1 = *(struct thrd_param *)VAR_0;
 FUNC_0(VAR_0);
 return ((void *)(intptr_t)VAR_1.func(VAR_1.arg));
}
