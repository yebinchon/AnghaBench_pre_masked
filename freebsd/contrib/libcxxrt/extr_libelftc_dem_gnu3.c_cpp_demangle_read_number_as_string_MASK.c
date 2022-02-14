
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpp_demangle_data {int dummy; } ;


 scalar_t__ FUNC_0 (char**,char*,long) ;
 int FUNC_1 (struct cpp_demangle_data*,long*) ;

__attribute__((used)) static int
FUNC_2(struct cpp_demangle_data *VAR_0, char **VAR_1)
{
 long VAR_2;

 if (!FUNC_1(VAR_0, &VAR_2)) {
  *VAR_1 = ((void*)0);
  return (0);
 }

 if (FUNC_0(VAR_1, "%ld", VAR_2) < 0) {
  *VAR_1 = ((void*)0);
  return (0);
 }

 return (1);
}
