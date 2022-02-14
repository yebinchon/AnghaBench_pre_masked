
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ size; } ;
struct cpp_demangle_data {char* cur; TYPE_1__ output; scalar_t__ mem_rst; scalar_t__ mem_cst; scalar_t__ mem_vat; scalar_t__ paren; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct cpp_demangle_data*) ;
 int FUNC_1 (struct cpp_demangle_data*,char const*) ;
 int FUNC_2 (struct cpp_demangle_data*) ;
 int FUNC_3 (struct cpp_demangle_data*,int) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,int,char*,char const*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char const*,char*,int) ;
 char* FUNC_8 (TYPE_1__*,size_t*) ;
 int FUNC_9 (TYPE_1__*,char*,int) ;

char *
FUNC_10(const char *VAR_1)
{
 struct cpp_demangle_data VAR_2;
 ssize_t VAR_3;
 unsigned int VAR_4;
 char *VAR_5 = ((void*)0);

 if (VAR_1 == ((void*)0))
  return (((void*)0));

 VAR_3 = FUNC_6(VAR_1);
 if (VAR_3 > 11 && !FUNC_7(VAR_1, "_GLOBAL__I_", 11)) {
  if ((VAR_5 = FUNC_4(VAR_3 + 19)) == ((void*)0))
   return (((void*)0));
  FUNC_5(VAR_5, VAR_3 + 19,
      "global constructors keyed to %s", VAR_1 + 11);
  return (VAR_5);
 }


 if ((VAR_3 < 2) || (VAR_1[0] != '_' || VAR_1[1] != 'Z' )) {
  if (!FUNC_1(&VAR_2, VAR_1))
   return (((void*)0));
  if (!FUNC_3(&VAR_2, 0))
   goto clean;
  VAR_5 = FUNC_8(&VAR_2.output, (size_t *) ((void*)0));
  goto clean;
 }


 if (!FUNC_1(&VAR_2, VAR_1 + 2))
  return (((void*)0));

 VAR_5 = ((void*)0);

 if (!FUNC_2(&VAR_2))
  goto clean;

 VAR_4 = 0;
 while (*VAR_2.cur != '\0') {



  if (*VAR_2.cur == '@' && *(VAR_2.cur + 1) == '@')
   break;
  if (!FUNC_3(&VAR_2, 1))
   goto clean;
  if (VAR_4++ > VAR_0)
   goto clean;
 }

 if (VAR_2.output.size == 0)
  goto clean;
 if (VAR_2.paren && !FUNC_9(&VAR_2.output, ")", 1))
  goto clean;
 if (VAR_2.mem_vat && !FUNC_9(&VAR_2.output, " volatile", 9))
  goto clean;
 if (VAR_2.mem_cst && !FUNC_9(&VAR_2.output, " const", 6))
  goto clean;
 if (VAR_2.mem_rst && !FUNC_9(&VAR_2.output, " restrict", 9))
  goto clean;

 VAR_5 = FUNC_8(&VAR_2.output, (size_t *) ((void*)0));

clean:
 FUNC_0(&VAR_2);

 return (VAR_5);
}
