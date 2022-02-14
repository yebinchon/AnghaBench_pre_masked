
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_str {int dummy; } ;
struct type_delimit {int paren; int firstp; } ;
struct cpp_demangle_data {char* cur; int is_tmpl; struct vector_str output; struct vector_str* cur_output; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpp_demangle_data*,char*) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (struct cpp_demangle_data*) ;
 int FUNC_3 (struct cpp_demangle_data*) ;
 int FUNC_4 (struct cpp_demangle_data*,struct type_delimit*) ;
 int FUNC_5 (struct vector_str*) ;
 int FUNC_6 (struct vector_str*) ;
 int FUNC_7 (struct vector_str*,struct vector_str*) ;

__attribute__((used)) static int
FUNC_8(struct cpp_demangle_data *VAR_1)
{
 struct vector_str VAR_2;
 struct type_delimit VAR_3;
 size_t VAR_4;
 bool VAR_5;

 if (VAR_1 == ((void*)0))
  return (0);
 if (*(++VAR_1->cur) == '\0')
  return (0);

 FUNC_6(&VAR_2);
 VAR_1->cur_output = &VAR_2;

 if (!FUNC_2(VAR_1)) {
  FUNC_5(&VAR_2);
  return (0);
 }

 VAR_1->cur_output = &VAR_1->output;

 VAR_3.paren = 0;
 VAR_3.firstp = 1;
 VAR_5 = 0;
 VAR_4 = 0;






 if (VAR_1->is_tmpl) {
  VAR_1->is_tmpl = 0;


  if (!FUNC_4(VAR_1, ((void*)0))) {
   FUNC_5(&VAR_2);
   return (0);
  }

  VAR_5 = 1;
 }


 if (!FUNC_7(&VAR_1->output, &VAR_2)) {
  FUNC_5(&VAR_2);
  return (0);
 }
 FUNC_5(&VAR_2);

 while (*VAR_1->cur != '\0') {
  if (!FUNC_4(VAR_1, &VAR_3))
   return (0);
  if (VAR_5)
   VAR_5 = 0;
  if (*VAR_1->cur == 'E')
   break;
  if (VAR_4++ > VAR_0)
   return (0);
 }
 if (VAR_5)
  return (0);

 if (*(++VAR_1->cur) == '\0')
  return (0);
 if (VAR_3.paren == 1) {
  if (!FUNC_0(VAR_1, ")"))
   return (0);
  VAR_3.paren = 0;
 }
 if (*VAR_1->cur == 's')
  ++VAR_1->cur;
 else {
  if (!FUNC_0(VAR_1, "::"))
   return (0);
  if (!FUNC_3(VAR_1))
   return (0);
 }
 if (*VAR_1->cur == '_') {
  ++VAR_1->cur;
  while (FUNC_1(*VAR_1->cur) != 0)
   ++VAR_1->cur;
 }

 return (1);
}
