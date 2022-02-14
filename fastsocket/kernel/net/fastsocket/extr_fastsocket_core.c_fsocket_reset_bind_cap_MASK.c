
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int cap_effective; } ;
typedef int kernel_cap_t ;


 scalar_t__ FUNC_0 () ;

__attribute__((used)) static void FUNC_1(kernel_cap_t *VAR_0)
{
 struct cred *VAR_1;

 VAR_1 = (struct cred *)FUNC_0();
 VAR_1->cap_effective = *VAR_0;
}
