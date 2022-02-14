
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpp_demangle_data {char* cur; } ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (struct cpp_demangle_data*) ;

__attribute__((used)) static int
FUNC_2(struct cpp_demangle_data *VAR_0)
{

 if (VAR_0 == ((void*)0) || *VAR_0->cur != 'L')
  return (0);
 ++VAR_0->cur;


 if (!FUNC_1(VAR_0))
  return (0);


 if (*VAR_0->cur == '_') {
  ++VAR_0->cur;
  while (FUNC_0(*VAR_0->cur) != 0)
   ++VAR_0->cur;
 }

 return (1);
}
