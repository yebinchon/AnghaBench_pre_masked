
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vector_str {scalar_t__ size; } ;
struct type_delimit {int paren; int firstp; } ;
struct TYPE_2__ {int size; } ;
struct cpp_demangle_data {char* cur; int is_tmpl; struct vector_str output; scalar_t__ mem_rref; scalar_t__ mem_ref; scalar_t__ mem_rst; scalar_t__ mem_cst; scalar_t__ mem_vat; struct vector_str* cur_output; TYPE_1__ subst; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct vector_str*,char*) ;
 int FUNC_1 (struct cpp_demangle_data*) ;
 int FUNC_2 (struct cpp_demangle_data*,char const*) ;
 int FUNC_3 (struct cpp_demangle_data*) ;
 int FUNC_4 (struct cpp_demangle_data*,struct type_delimit*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char*,int,char*,char const*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char const*,char*,int) ;
 int FUNC_9 (struct vector_str*) ;
 char* FUNC_10 (struct vector_str*,size_t*) ;
 int FUNC_11 (struct vector_str*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (struct vector_str*,struct vector_str*) ;

char *
FUNC_14(const char *VAR_1)
{
 struct cpp_demangle_data VAR_2;
 struct vector_str VAR_3;
 struct type_delimit VAR_4;
 ssize_t VAR_5;
 unsigned int VAR_6;
 char *VAR_7;
 bool VAR_8, VAR_9;

 if (VAR_1 == ((void*)0) || (VAR_5 = FUNC_7(VAR_1)) < 2)
  return (((void*)0));

 if (VAR_5 > 11 && !FUNC_8(VAR_1, "_GLOBAL__I_", 11)) {
  if ((VAR_7 = FUNC_5(VAR_5 + 19)) == ((void*)0))
   return (((void*)0));
  FUNC_6(VAR_7, VAR_5 + 19,
      "global constructors keyed to %s", VAR_1 + 11);
  return (VAR_7);
 }

 if (VAR_1[0] != '_' || VAR_1[1] != 'Z')
  return (((void*)0));

 if (!FUNC_2(&VAR_2, VAR_1 + 2))
  return (((void*)0));

 VAR_7 = ((void*)0);
 VAR_8 = VAR_9 = 0;

 if (!FUNC_3(&VAR_2))
  goto clean;




 if (*VAR_2.cur != 0 && VAR_2.subst.size >= 1) {
  if (!FUNC_12(&VAR_2.subst))
   goto clean;
 }

 VAR_4.paren = 0;
 VAR_4.firstp = 1;
 VAR_6 = 0;






 if (VAR_2.is_tmpl) {
  VAR_2.is_tmpl = 0;
  if (!FUNC_11(&VAR_3))
   goto clean;
  VAR_2.cur_output = &VAR_3;
  VAR_8 = 1;
 }

 while (*VAR_2.cur != '\0') {



  if (*VAR_2.cur == '@' && *(VAR_2.cur + 1) == '@')
   break;

  if (VAR_8) {

   if (!FUNC_4(&VAR_2, ((void*)0)))
    goto clean;
  } else {

   if (!FUNC_4(&VAR_2, &VAR_4))
    goto clean;
  }

  if (VAR_8) {

   if (!FUNC_0(&VAR_3, " "))
    goto clean;
   if (!FUNC_13(&VAR_2.output,
       &VAR_3))
    goto clean;
   VAR_2.cur_output = &VAR_2.output;
   FUNC_9(&VAR_3);
   VAR_8 = 0;
   VAR_9 = 1;
  } else if (VAR_9)
   VAR_9 = 0;
  if (VAR_6++ > VAR_0)
   goto clean;
 }
 if (VAR_9)
  goto clean;

 if (VAR_2.output.size == 0)
  goto clean;
 if (VAR_4.paren && !FUNC_0(&VAR_2.output, ")"))
  goto clean;
 if (VAR_2.mem_vat && !FUNC_0(&VAR_2.output, " volatile"))
  goto clean;
 if (VAR_2.mem_cst && !FUNC_0(&VAR_2.output, " const"))
  goto clean;
 if (VAR_2.mem_rst && !FUNC_0(&VAR_2.output, " restrict"))
  goto clean;
 if (VAR_2.mem_ref && !FUNC_0(&VAR_2.output, " &"))
  goto clean;
 if (VAR_2.mem_rref && !FUNC_0(&VAR_2.output, " &&"))
  goto clean;

 VAR_7 = FUNC_10(&VAR_2.output, (size_t *) ((void*)0));

clean:
 if (VAR_8)
  FUNC_9(&VAR_3);

 FUNC_1(&VAR_2);

 return (VAR_7);
}
