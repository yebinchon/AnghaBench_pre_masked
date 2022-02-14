
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {scalar_t__ arg; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,unsigned long*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_1, struct kernel_param *VAR_2,
  unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 if (!VAR_1)
  return -VAR_0;
 VAR_6 = FUNC_0(VAR_1, 0, &VAR_5);
 if (VAR_6 == -VAR_0 || VAR_5 < VAR_3 || VAR_5 > VAR_4)
  return -VAR_0;
 *((unsigned int *)VAR_2->arg) = VAR_5;
 return 0;
}
