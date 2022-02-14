
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpp_demangle_data {char* cur; int paren; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (struct cpp_demangle_data*,char*,int) ;
 int FUNC_2 (struct cpp_demangle_data*) ;
 int FUNC_3 (struct cpp_demangle_data*) ;
 int FUNC_4 (struct cpp_demangle_data*,int) ;

__attribute__((used)) static int
FUNC_5(struct cpp_demangle_data *VAR_1)
{
 size_t VAR_2;

 if (VAR_1 == ((void*)0))
  return (0);
 if (*(++VAR_1->cur) == '\0')
  return (0);
 if (!FUNC_2(VAR_1))
  return (0);

 VAR_2 = 0;
 for (;;) {
  if (!FUNC_4(VAR_1, 1))
   return (0);
  if (*VAR_1->cur == 'E')
   break;
  if (VAR_2++ > VAR_0)
   return (0);
 }
 if (*(++VAR_1->cur) == '\0')
  return (0);
 if (VAR_1->paren == 1) {
  if (!FUNC_1(VAR_1, ")", 1))
   return (0);
  VAR_1->paren = 0;
 }
 if (*VAR_1->cur == 's')
  ++VAR_1->cur;
 else {
  if (!FUNC_1(VAR_1, "::", 2))
   return (0);
  if (!FUNC_3(VAR_1))
   return (0);
 }
 if (*VAR_1->cur == '_') {
  ++VAR_1->cur;
  while (FUNC_0(*VAR_1->cur) != 0)
   ++VAR_1->cur;
 }

 return (1);
}
