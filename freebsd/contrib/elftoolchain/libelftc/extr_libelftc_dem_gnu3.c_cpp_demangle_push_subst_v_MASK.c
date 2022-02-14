
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_str {int dummy; } ;
struct cpp_demangle_data {int dummy; } ;


 int FUNC_0 (struct cpp_demangle_data*,char*,size_t) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct vector_str*,size_t*) ;

__attribute__((used)) static int
FUNC_3(struct cpp_demangle_data *VAR_0, struct vector_str *VAR_1)
{
 size_t VAR_2;
 int VAR_3;
 char *VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return (0);

 if ((VAR_4 = FUNC_2(VAR_1, &VAR_2)) == ((void*)0))
  return (0);

 VAR_3 = FUNC_0(VAR_0, VAR_4, VAR_2);

 FUNC_1(VAR_4);

 return (VAR_3);
}
