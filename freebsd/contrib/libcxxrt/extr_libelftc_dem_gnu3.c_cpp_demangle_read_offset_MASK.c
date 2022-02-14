
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpp_demangle_data {char* cur; } ;


 int FUNC_0 (struct cpp_demangle_data*) ;
 int FUNC_1 (struct cpp_demangle_data*) ;

__attribute__((used)) static int
FUNC_2(struct cpp_demangle_data *VAR_0)
{

 if (VAR_0 == ((void*)0))
  return (0);

 if (*VAR_0->cur == 'h') {
  ++VAR_0->cur;
  return (FUNC_0(VAR_0));
 } else if (*VAR_0->cur == 'v') {
  ++VAR_0->cur;
  return (FUNC_1(VAR_0));
 }

 return (0);
}
