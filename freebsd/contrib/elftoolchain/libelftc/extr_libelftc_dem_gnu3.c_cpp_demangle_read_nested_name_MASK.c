
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_str {size_t size; } ;
struct cpp_demangle_data {char* cur; int mem_rst; int mem_vat; int mem_cst; int mem_ref; int mem_rref; struct vector_str* cur_output; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpp_demangle_data*,char*) ;
 int FUNC_1 (struct vector_str*,char*) ;
 int FUNC_2 (struct cpp_demangle_data*,struct vector_str*) ;
 int FUNC_3 (struct cpp_demangle_data*) ;
 int FUNC_4 (struct cpp_demangle_data*) ;
 int FUNC_5 (struct cpp_demangle_data*) ;
 int FUNC_6 (struct cpp_demangle_data*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct vector_str*) ;
 int FUNC_9 (struct vector_str*) ;
 int FUNC_10 (struct vector_str*,char*,size_t) ;
 char* FUNC_11 (struct vector_str*,size_t,int,size_t*) ;

__attribute__((used)) static int
FUNC_12(struct cpp_demangle_data *VAR_1)
{
 struct vector_str *VAR_2, VAR_3;
 size_t VAR_4, VAR_5, VAR_6;
 int VAR_7;
 char *VAR_8;

 if (VAR_1 == ((void*)0) || *VAR_1->cur != 'N')
  return (0);
 if (*(++VAR_1->cur) == '\0')
  return (0);

 do {
  switch (*VAR_1->cur) {
  case 'r':
   VAR_1->mem_rst = 1;
   break;
  case 'V':
   VAR_1->mem_vat = 1;
   break;
  case 'K':
   VAR_1->mem_cst = 1;
   break;
  case 'R':
   VAR_1->mem_ref = 1;
   break;
  case 'O':
   VAR_1->mem_rref = 1;
   break;
  default:
   goto next;
  }
 } while (*(++VAR_1->cur));

next:
 VAR_2 = VAR_1->cur_output;
 if (!FUNC_9(&VAR_3))
  return (0);

 VAR_7 = 0;
 VAR_4 = 0;
 for (;;) {
  VAR_5 = VAR_2->size;
  switch (*VAR_1->cur) {
  case 'I':
   if (!FUNC_4(VAR_1))
    goto clean;
   break;
  case 'S':
   if (!FUNC_3(VAR_1))
    goto clean;
   break;
  case 'T':
   if (!FUNC_5(VAR_1))
    goto clean;
   break;
  default:
   if (!FUNC_6(VAR_1))
    goto clean;
  }

  if (VAR_5 == VAR_2->size)
   goto next_comp;
  if ((VAR_8 = FUNC_11(VAR_2, VAR_5,
      VAR_2->size - 1, &VAR_6)) == ((void*)0))
   goto clean;
  if (!FUNC_10(&VAR_3, VAR_8, VAR_6)) {
   FUNC_7(VAR_8);
   goto clean;
  }
  FUNC_7(VAR_8);

  if (!FUNC_2(VAR_1, &VAR_3))
   goto clean;

 next_comp:
  if (*VAR_1->cur == 'E')
   break;
  else if (*VAR_1->cur != 'I' && *VAR_1->cur != 'C' &&
      *VAR_1->cur != 'D' && VAR_5 != VAR_2->size) {
   if (!FUNC_0(VAR_1, "::"))
    goto clean;
   if (!FUNC_1(&VAR_3, "::"))
    goto clean;
  }
  if (VAR_4++ > VAR_0)
   goto clean;
 }

 ++VAR_1->cur;
 VAR_7 = 1;

clean:
 FUNC_8(&VAR_3);

 return (VAR_7);
}
