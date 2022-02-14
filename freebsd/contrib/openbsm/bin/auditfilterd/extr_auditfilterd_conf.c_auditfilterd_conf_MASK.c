
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auditfilter_module_list {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (struct auditfilter_module_list*) ;
 int FUNC_1 (struct auditfilter_module_list*) ;
 scalar_t__ FUNC_2 (char const*,int *,struct auditfilter_module_list*) ;

int
FUNC_3(const char *VAR_0, FILE *VAR_1)
{
 struct auditfilter_module_list VAR_2;

 FUNC_0(&VAR_2);
 if (FUNC_2(VAR_0, VAR_1, &VAR_2) < 0)
  return (-1);

 FUNC_1(&VAR_2);

 return (0);
}
