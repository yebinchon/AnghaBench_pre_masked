
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_str {size_t size; } ;
struct cpp_demangle_data {char* cur; struct vector_str* cur_output; } ;


 int FUNC_0 (struct cpp_demangle_data*,struct vector_str*) ;
 int FUNC_1 (struct cpp_demangle_data*) ;
 int FUNC_2 (struct cpp_demangle_data*) ;
 int FUNC_3 (struct cpp_demangle_data*) ;
 int FUNC_4 (struct cpp_demangle_data*) ;
 int FUNC_5 (struct cpp_demangle_data*) ;
 int FUNC_6 (char*) ;
 int * FUNC_7 (char*,char*) ;
 int FUNC_8 (struct vector_str*) ;
 int FUNC_9 (struct vector_str*) ;
 int FUNC_10 (struct vector_str*,char*,size_t) ;
 char* FUNC_11 (struct vector_str*,size_t,int,size_t*) ;

__attribute__((used)) static int
FUNC_12(struct cpp_demangle_data *VAR_0)
{
 struct vector_str *VAR_1, VAR_2;
 size_t VAR_3, VAR_4;
 int VAR_5;
 char *VAR_6;

 if (VAR_0 == ((void*)0) || *VAR_0->cur == '\0')
  return (0);

 VAR_1 = VAR_0->cur_output;

 VAR_6 = ((void*)0);

 switch (*VAR_0->cur) {
 case 'S':
  return (FUNC_3(VAR_0));
 case 'N':
  return (FUNC_2(VAR_0));
 case 'Z':
  return (FUNC_1(VAR_0));
 }

 if (!FUNC_9(&VAR_2))
  return (0);

 VAR_3 = VAR_1->size;
 VAR_5 = 0;
 if (!FUNC_5(VAR_0))
  goto clean;
 if ((VAR_6 = FUNC_11(VAR_1, VAR_3, VAR_1->size - 1,
     &VAR_4)) == ((void*)0))
  goto clean;
 if (VAR_4 > 8 && FUNC_7(VAR_6, "operator") != ((void*)0)) {
  VAR_5 = 1;
  goto clean;
 }
 if (!FUNC_10(&VAR_2, VAR_6, VAR_4))
  goto clean;
 if (!FUNC_0(VAR_0, &VAR_2))
  goto clean;

 if (*VAR_0->cur == 'I') {
  VAR_3 = VAR_1->size;
  if (!FUNC_4(VAR_0))
   goto clean;
  FUNC_6(VAR_6);
  if ((VAR_6 = FUNC_11(VAR_1, VAR_3,
      VAR_1->size - 1, &VAR_4)) == ((void*)0))
   goto clean;
  if (!FUNC_10(&VAR_2, VAR_6, VAR_4))
   goto clean;
  if (!FUNC_0(VAR_0, &VAR_2))
   goto clean;
 }

 VAR_5 = 1;

clean:
 FUNC_6(VAR_6);
 FUNC_8(&VAR_2);

 return (VAR_5);
}
