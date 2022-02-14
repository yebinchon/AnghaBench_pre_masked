
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_str {size_t size; } ;
struct cpp_demangle_data {struct vector_str* cur_output; } ;


 int FUNC_0 (struct cpp_demangle_data*,char*,size_t) ;
 int FUNC_1 (struct cpp_demangle_data*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,char const*,size_t) ;
 size_t FUNC_5 (char const*) ;
 char* FUNC_6 (struct vector_str*,size_t,int,size_t*) ;

__attribute__((used)) static int
FUNC_7(struct cpp_demangle_data *VAR_0,
    const char *VAR_1)
{
 struct vector_str *VAR_2;
 size_t VAR_3, VAR_4, VAR_5;
 int VAR_6;
 char *VAR_7, *VAR_8;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return (0);

 if ((VAR_5 = FUNC_5(VAR_1)) == 0)
  return (0);

 VAR_2 = VAR_0->cur_output;

 VAR_3 = VAR_2->size;
 VAR_8 = ((void*)0);
 VAR_7 = ((void*)0);

 if (!FUNC_1(VAR_0))
  return (0);
 if ((VAR_8 = FUNC_6(VAR_2, VAR_3, VAR_2->size - 1,
     &VAR_4)) == ((void*)0))
  return (0);

 VAR_6 = 0;
 if ((VAR_7 = FUNC_3(sizeof(char) * (VAR_4 + VAR_5 + 1))) ==
     ((void*)0))
  goto clean;

 FUNC_4(VAR_7, VAR_1, VAR_5);
 FUNC_4(VAR_7 + VAR_5, VAR_8, VAR_4);
 VAR_7[VAR_4 + VAR_5] = '\0';

 if (!FUNC_0(VAR_0, VAR_7, VAR_4 + VAR_5))
  goto clean;

 VAR_6 = 1;
clean:
 FUNC_2(VAR_7);
 FUNC_2(VAR_8);

 return (VAR_6);
}
