
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {scalar_t__ arg; } ;


 int FUNC_0 (char*,char*,unsigned int) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, struct kernel_param *VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = *(unsigned int *)VAR_1->arg;
 return FUNC_0(VAR_0, "%u", 1U << VAR_2);
}
