
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_str {size_t size; } ;
struct cpp_demangle_data {struct vector_str* cur_output; } ;


 int FUNC_0 (struct cpp_demangle_data*,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct vector_str*) ;
 char* FUNC_3 (struct vector_str*,size_t,int,size_t*) ;

__attribute__((used)) static int
FUNC_4(struct cpp_demangle_data *VAR_0, char **VAR_1)
{
 struct vector_str *VAR_2;
 size_t VAR_3, VAR_4, VAR_5, VAR_6;
 char *VAR_7;

 VAR_2 = VAR_0->cur_output;

 VAR_4 = VAR_2->size;

 if (!FUNC_0(VAR_0, ((void*)0)))
  return (0);

 if ((VAR_7 = FUNC_3(VAR_2, VAR_4, VAR_2->size - 1,
     &VAR_6)) == ((void*)0))
  return (0);

 VAR_5 = VAR_2->size;
 for (VAR_3 = VAR_4; VAR_3 < VAR_5; ++VAR_3) {
  if (!FUNC_2(VAR_2)) {
   FUNC_1(VAR_7);
   return (0);
  }
 }

 *VAR_1 = VAR_7;

 return (1);
}
