
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_str {int size; int * container; } ;
struct vector_type_qualifier {struct vector_str ext_name; } ;
struct cpp_demangle_data {scalar_t__ push_head; int paren; int pfirst; char* cur; struct vector_str output_tmp; struct vector_str output; struct vector_str subst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cpp_demangle_data*,char*,int) ;
 int FUNC_2 (struct cpp_demangle_data*,struct vector_type_qualifier*,char*) ;
 int FUNC_3 (struct cpp_demangle_data*) ;
 int FUNC_4 (struct cpp_demangle_data*,char**) ;
 int FUNC_5 (struct cpp_demangle_data*,int*,struct vector_type_qualifier*) ;
 int FUNC_6 (struct cpp_demangle_data*) ;
 int FUNC_7 (struct cpp_demangle_data*,long*) ;
 int FUNC_8 (struct cpp_demangle_data*,char**) ;
 int FUNC_9 (struct cpp_demangle_data*) ;
 int FUNC_10 (struct cpp_demangle_data*) ;
 int FUNC_11 (struct cpp_demangle_data*) ;
 scalar_t__ FUNC_12 (struct cpp_demangle_data*) ;
 int FUNC_13 (struct cpp_demangle_data*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int ,char*,int) ;
 int FUNC_17 (struct vector_str*) ;
 int FUNC_18 (struct vector_str*,char*,size_t) ;
 int FUNC_19 (struct vector_str*) ;
 int FUNC_20 (struct vector_str*) ;
 int FUNC_21 (struct vector_str*,char*,int) ;
 int FUNC_22 (struct vector_str*,struct vector_str*) ;
 char* FUNC_23 (struct vector_str*,size_t,int,size_t*) ;
 int FUNC_24 (struct vector_type_qualifier*) ;
 int FUNC_25 (struct vector_type_qualifier*) ;
 int FUNC_26 (struct vector_type_qualifier*,int ) ;

__attribute__((used)) static int
FUNC_27(struct cpp_demangle_data *VAR_9, int VAR_10)
{
 struct vector_type_qualifier VAR_11;
 struct vector_str *VAR_12;
 size_t VAR_13, VAR_14;
 int VAR_15, VAR_16;
 long VAR_17;
 char *VAR_18, *VAR_19, *VAR_20;

 if (VAR_9 == ((void*)0))
  return (0);

 VAR_12 = &VAR_9->output;
 if (VAR_9->output.size > 0 && !FUNC_16(VAR_9->output.container[VAR_9->output.size - 1], ">", 1)) {
  VAR_9->push_head++;
  VAR_12 = &VAR_9->output_tmp;
 } else if (VAR_10 == 1) {
  if (VAR_9->paren == 0) {
   if (!FUNC_1(VAR_9, "(", 1))
    return (0);
   if (VAR_9->output.size < 2)
    return (0);
   VAR_9->paren = 1;
   VAR_9->pfirst = 1;

   if (VAR_9->subst.size == 1 &&
       !FUNC_20(&VAR_9->subst))
    return (0);
  }

  if (VAR_9->pfirst)
   VAR_9->pfirst = 0;
  else if (*VAR_9->cur != 'I' &&
      !FUNC_1(VAR_9, ", ", 2))
   return (0);
 }

 FUNC_0(VAR_12 != ((void*)0));





 if (!FUNC_25(&VAR_11))
  return (0);

 VAR_15 = 0;
 VAR_16 = 1;
 VAR_13 = VAR_12->size;
 VAR_18 = VAR_19 = VAR_20 = ((void*)0);
again:

 switch (*VAR_9->cur) {
 case 'a':

  if (!FUNC_1(VAR_9, "signed char", 11))
   goto clean;
  ++VAR_9->cur;
  goto rtn;

 case 'A':

  if (!FUNC_3(VAR_9))
   goto clean;
  VAR_16 = 0;
  goto rtn;

 case 'b':

  if (!FUNC_1(VAR_9, "bool", 4))
   goto clean;
  ++VAR_9->cur;
  goto rtn;

 case 'C':

  if (!FUNC_26(&VAR_11, VAR_0))
   goto clean;
  ++VAR_9->cur;
  goto again;

 case 'c':

  if (!FUNC_1(VAR_9, "char", 4))
   goto clean;
  ++VAR_9->cur;
  goto rtn;

 case 'd':

  if (!FUNC_1(VAR_9, "double", 6))
   goto clean;
  ++VAR_9->cur;
  goto rtn;

 case 'D':
  ++VAR_9->cur;
  switch (*VAR_9->cur) {
  case 'd':

   if (!FUNC_1(VAR_9, "decimal64", 9))
    goto clean;
   ++VAR_9->cur;
   break;
  case 'e':

   if (!FUNC_1(VAR_9, "decimal128", 10))
    goto clean;
   ++VAR_9->cur;
   break;
  case 'f':

   if (!FUNC_1(VAR_9, "decimal32", 9))
    goto clean;
   ++VAR_9->cur;
   break;
  case 'h':

   if (!FUNC_1(VAR_9, "half", 4))
    goto clean;
   ++VAR_9->cur;
   break;
  case 'i':

   if (!FUNC_1(VAR_9, "char32_t", 8))
    goto clean;
   ++VAR_9->cur;
   break;
  case 'n':

   if (!FUNC_1(VAR_9, "decltype(nullptr)",
       17))
    goto clean;
   ++VAR_9->cur;
   break;
  case 's':

   if (!FUNC_1(VAR_9, "char16_t", 8))
    goto clean;
   ++VAR_9->cur;
   break;
  case 'v':

   ++VAR_9->cur;
   if (*VAR_9->cur == '_') {
    ++VAR_9->cur;
    if (!FUNC_4(VAR_9,
        &VAR_19))
     goto clean;
    if (!FUNC_21(&VAR_11.ext_name, VAR_19,
        FUNC_15(VAR_19)))
     goto clean;
   } else {
    if (!FUNC_8(VAR_9,
        &VAR_20))
     goto clean;
    if (!FUNC_21(&VAR_11.ext_name, VAR_20,
        FUNC_15(VAR_20)))
     goto clean;
   }
   if (*VAR_9->cur != '_')
    goto clean;
   ++VAR_9->cur;
   if (!FUNC_26(&VAR_11, VAR_8))
    goto clean;
   goto again;
  default:
   goto clean;
  }
  goto rtn;

 case 'e':

  if (!FUNC_1(VAR_9, "long double", 11))
   goto clean;
  ++VAR_9->cur;
  goto rtn;

 case 'f':

  if (!FUNC_1(VAR_9, "float", 5))
   goto clean;
  ++VAR_9->cur;
  goto rtn;

 case 'F':

  if (!FUNC_5(VAR_9, &VAR_15, &VAR_11))
   goto clean;
  VAR_16 = 0;
  goto rtn;

 case 'g':

  if (!FUNC_1(VAR_9, "__float128", 10))
   goto clean;
  ++VAR_9->cur;
  goto rtn;

 case 'G':

  if (!FUNC_26(&VAR_11, VAR_3))
   goto clean;
  ++VAR_9->cur;
  goto again;

 case 'h':

  if (!FUNC_1(VAR_9, "unsigned char", 13))
   goto clean;
  ++VAR_9->cur;
  goto rtn;

 case 'i':

  if (!FUNC_1(VAR_9, "int", 3))
   goto clean;
  ++VAR_9->cur;
  goto rtn;

 case 'j':

  if (!FUNC_1(VAR_9, "unsigned int", 12))
   goto clean;
  ++VAR_9->cur;
  goto rtn;

 case 'K':

  if (!FUNC_26(&VAR_11, VAR_1))
   goto clean;
  ++VAR_9->cur;
  goto again;

 case 'l':

  if (!FUNC_1(VAR_9, "long", 4))
   goto clean;
  ++VAR_9->cur;
  goto rtn;

 case 'm':

  if (!FUNC_1(VAR_9, "unsigned long", 13))
   goto clean;

  ++VAR_9->cur;

  goto rtn;
 case 'M':

  if (!FUNC_9(VAR_9))
   goto clean;
  VAR_16 = 0;
  goto rtn;

 case 'n':

  if (!FUNC_1(VAR_9, "__int128", 8))
   goto clean;
  ++VAR_9->cur;
  goto rtn;

 case 'o':

  if (!FUNC_1(VAR_9, "unsigned __int128", 17))
   goto clean;
  ++VAR_9->cur;
  goto rtn;

 case 'P':

  if (!FUNC_26(&VAR_11, VAR_4))
   goto clean;
  ++VAR_9->cur;
  goto again;

 case 'r':

  if (!FUNC_26(&VAR_11, VAR_6))
   goto clean;
  ++VAR_9->cur;
  goto again;

 case 'R':

  if (!FUNC_26(&VAR_11, VAR_5))
   goto clean;
  ++VAR_9->cur;
  goto again;

 case 's':

  if (!FUNC_1(VAR_9, "short", 5))
   goto clean;
  ++VAR_9->cur;
  goto rtn;

 case 'S':

  if (!FUNC_11(VAR_9))
   goto clean;
  VAR_16 = 0;
  goto rtn;

 case 't':

  if (!FUNC_1(VAR_9, "unsigned short", 14))
   goto clean;
  ++VAR_9->cur;
  goto rtn;

 case 'T':

  if (!FUNC_13(VAR_9))
   goto clean;
  VAR_16 = 0;
  goto rtn;

 case 'u':

  ++VAR_9->cur;
  if (!FUNC_10(VAR_9))
   goto clean;
  VAR_16 = 0;
  goto rtn;

 case 'U':

  if (!FUNC_7(VAR_9, &VAR_17))
   goto clean;
  if (VAR_17 <= 0)
   goto clean;
  if (!FUNC_21(&VAR_11.ext_name, VAR_9->cur, VAR_17))
   return (0);
  VAR_9->cur += VAR_17;
  if (!FUNC_26(&VAR_11, VAR_2))
   goto clean;
  goto again;

 case 'v':

  if (!FUNC_1(VAR_9, "void", 4))
   goto clean;
  ++VAR_9->cur;
  goto rtn;

 case 'V':

  if (!FUNC_26(&VAR_11, VAR_7))
   goto clean;
  ++VAR_9->cur;
  goto again;

 case 'w':

  if (!FUNC_1(VAR_9, "wchar_t", 7))
   goto clean;
  ++VAR_9->cur;
  goto rtn;

 case 'x':

  if (!FUNC_1(VAR_9, "long long", 9))
   goto clean;
  ++VAR_9->cur;
  goto rtn;

 case 'y':

  if (!FUNC_1(VAR_9, "unsigned long long", 18))
   goto clean;
  ++VAR_9->cur;
  goto rtn;

 case 'z':

  if (!FUNC_1(VAR_9, "...", 3))
   goto clean;
  ++VAR_9->cur;
  goto rtn;
 }

 if (!FUNC_6(VAR_9))
  goto clean;

 VAR_16 = 0;
rtn:
 if ((VAR_18 = FUNC_23(VAR_12, VAR_13, VAR_12->size - 1,
     &VAR_14)) == ((void*)0))
  goto clean;

 if (VAR_16 == 0) {
  if (!FUNC_18(&VAR_9->subst, VAR_18, VAR_14) &&
      !FUNC_21(&VAR_9->subst, VAR_18, VAR_14))
   goto clean;
 }

 if (!FUNC_2(VAR_9, &VAR_11, VAR_18))
  goto clean;

 FUNC_14(VAR_18);
 FUNC_14(VAR_19);
 FUNC_14(VAR_20);
 FUNC_24(&VAR_11);

 if (VAR_9->push_head > 0) {
  if (*VAR_9->cur == 'I' && FUNC_12(VAR_9)
      == 0)
   return (0);

  if (--VAR_9->push_head > 0)
   return (1);

  if (!FUNC_21(&VAR_9->output_tmp, " ", 1))
   return (0);

  if (!FUNC_22(&VAR_9->output,
      &VAR_9->output_tmp))
   return (0);

  FUNC_17(&VAR_9->output_tmp);
  if (!FUNC_19(&VAR_9->output_tmp))
   return (0);

  if (!FUNC_1(VAR_9, "(", 1))
   return (0);

  VAR_9->paren = 1;
  VAR_9->pfirst = 1;
 }

 return (1);
clean:
 FUNC_14(VAR_18);
 FUNC_14(VAR_19);
 FUNC_14(VAR_20);
 FUNC_24(&VAR_11);

 return (0);
}
