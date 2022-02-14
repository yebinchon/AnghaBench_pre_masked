
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_str {size_t size; } ;
struct cpp_demangle_data {char* cur; scalar_t__ push_head; struct vector_str output; struct vector_str output_tmp; } ;


 int FUNC_0 (struct cpp_demangle_data*,char*,int) ;
 int FUNC_1 (struct cpp_demangle_data*,struct vector_str*) ;
 int FUNC_2 (struct cpp_demangle_data*) ;
 int FUNC_3 (struct cpp_demangle_data*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct vector_str*) ;
 int FUNC_6 (struct vector_str*) ;
 int FUNC_7 (struct vector_str*,char*,size_t) ;
 char* FUNC_8 (struct vector_str*,size_t,int,size_t*) ;

__attribute__((used)) static int
FUNC_9(struct cpp_demangle_data *VAR_0)
{
 struct vector_str *VAR_1, VAR_2;
 size_t VAR_3, VAR_4;
 int VAR_5;
 char *VAR_6;

 if (VAR_0 == ((void*)0))
  return (0);

 if (!FUNC_6(&VAR_2))
  return (0);

 VAR_6 = ((void*)0);
 VAR_5 = 0;
 if (!FUNC_0(VAR_0, "std::", 5))
  goto clean;

 if (!FUNC_7(&VAR_2, "std::", 5))
  goto clean;

 VAR_0->cur += 2;

 VAR_1 = VAR_0->push_head > 0 ? &VAR_0->output_tmp : &VAR_0->output;

 VAR_3 = VAR_1->size;
 if (!FUNC_3(VAR_0))
  goto clean;

 if ((VAR_6 = FUNC_8(VAR_1, VAR_3, VAR_1->size - 1,
     &VAR_4)) == ((void*)0))
  goto clean;

 if (!FUNC_7(&VAR_2, VAR_6, VAR_4))
  goto clean;

 if (!FUNC_1(VAR_0, &VAR_2))
  goto clean;

 if (*VAR_0->cur == 'I') {
  VAR_3 = VAR_1->size;
  if (!FUNC_2(VAR_0))
   goto clean;
  FUNC_4(VAR_6);
  if ((VAR_6 = FUNC_8(VAR_1, VAR_3,
      VAR_1->size - 1, &VAR_4)) == ((void*)0))
   goto clean;
  if (!FUNC_7(&VAR_2, VAR_6, VAR_4))
   goto clean;
  if (!FUNC_1(VAR_0, &VAR_2))
   goto clean;
 }

 VAR_5 = 1;
clean:
 FUNC_4(VAR_6);
 FUNC_5(&VAR_2);

 return (VAR_5);
}
