
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vector_str {size_t size; } ;
struct vector_type_qualifier {struct vector_str ext_name; } ;
struct type_delimit {int paren; int firstp; } ;
struct TYPE_2__ {int size; } ;
struct cpp_demangle_data {char* cur; int ref_qualifier; struct vector_str subst; void* ref_qualifier_type; int is_functype; TYPE_1__ output; struct vector_str* cur_output; } ;


 int FUNC_0 (struct cpp_demangle_data*,char*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_1 (struct vector_str*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cpp_demangle_data*) ;
 int FUNC_4 (struct cpp_demangle_data*,struct vector_str*) ;
 int FUNC_5 (struct cpp_demangle_data*,struct vector_type_qualifier*,char*) ;
 int FUNC_6 (struct cpp_demangle_data*) ;
 int FUNC_7 (struct cpp_demangle_data*,char**) ;
 int FUNC_8 (struct cpp_demangle_data*,int*,struct vector_type_qualifier*) ;
 int FUNC_9 (struct cpp_demangle_data*) ;
 int FUNC_10 (struct cpp_demangle_data*,long*) ;
 int FUNC_11 (struct cpp_demangle_data*,char**) ;
 int FUNC_12 (struct cpp_demangle_data*,struct vector_type_qualifier*) ;
 int FUNC_13 (struct cpp_demangle_data*) ;
 int FUNC_14 (struct cpp_demangle_data*) ;
 int FUNC_15 (struct cpp_demangle_data*) ;
 int FUNC_16 (struct cpp_demangle_data*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (struct vector_str*) ;
 int FUNC_19 (struct vector_str*,char*,size_t) ;
 int FUNC_20 (struct vector_str*) ;
 int FUNC_21 (struct vector_str*,char*,size_t) ;
 char* FUNC_22 (struct vector_str*,size_t,int,size_t*) ;
 int FUNC_23 (struct vector_type_qualifier*) ;
 int FUNC_24 (struct vector_type_qualifier*) ;
 int FUNC_25 (struct vector_type_qualifier*,void*) ;

__attribute__((used)) static int
FUNC_26(struct cpp_demangle_data *VAR_10,
    struct type_delimit *VAR_11)
{
 struct vector_type_qualifier VAR_12;
 struct vector_str *VAR_13, VAR_14;
 size_t VAR_15, VAR_16, VAR_17;
 int VAR_18, VAR_19;
 long VAR_20;
 const char *VAR_21;
 char *VAR_22, *VAR_23, *VAR_24, *VAR_25;
 bool VAR_26, VAR_27;

 if (VAR_10 == ((void*)0))
  return (0);

 VAR_13 = VAR_10->cur_output;
 if (VAR_11) {
  if (VAR_11->paren == 0) {
   if (!FUNC_0(VAR_10, "("))
    return (0);
   if (VAR_10->output.size < 2)
    return (0);
   VAR_11->paren = 1;
  }

  if (!VAR_11->firstp) {
   if (*VAR_10->cur != 'I') {
    if (!FUNC_0(VAR_10, ", "))
     return (0);
   }
  }
 }

 FUNC_2(VAR_13 != ((void*)0));





 if (!FUNC_24(&VAR_12))
  return (0);

 VAR_18 = 0;
 VAR_19 = 1;
 VAR_15 = VAR_13->size;
 VAR_22 = VAR_23 = VAR_24 = ((void*)0);
 VAR_26 = 0;

again:


 if (*VAR_10->cur != 'R' && *VAR_10->cur != 'O' && *VAR_10->cur != 'E')
  VAR_10->ref_qualifier = 0;


 switch (*VAR_10->cur) {
 case 'a':

  if (!FUNC_0(VAR_10, "signed char"))
   goto clean;
  ++VAR_10->cur;
  goto rtn;

 case 'A':

  if (!FUNC_6(VAR_10))
   goto clean;
  VAR_19 = 0;
  goto rtn;

 case 'b':

  if (!FUNC_0(VAR_10, "bool"))
   goto clean;
  ++VAR_10->cur;
  goto rtn;

 case 'C':

  if (!FUNC_25(&VAR_12, VAR_0))
   goto clean;
  ++VAR_10->cur;
  if (VAR_11)
   VAR_11->firstp = 0;
  goto again;

 case 'c':

  if (!FUNC_0(VAR_10, "char"))
   goto clean;
  ++VAR_10->cur;
  goto rtn;

 case 'd':

  if (!FUNC_0(VAR_10, "double"))
   goto clean;
  ++VAR_10->cur;
  goto rtn;

 case 'D':
  ++VAR_10->cur;
  switch (*VAR_10->cur) {
  case 'a':

   if (!FUNC_0(VAR_10, "auto"))
    goto clean;
   ++VAR_10->cur;
   break;
  case 'c':

   if (!FUNC_0(VAR_10, "decltype(auto)"))
    goto clean;
   ++VAR_10->cur;
   break;
  case 'd':

   if (!FUNC_0(VAR_10, "decimal64"))
    goto clean;
   ++VAR_10->cur;
   break;
  case 'e':

   if (!FUNC_0(VAR_10, "decimal128"))
    goto clean;
   ++VAR_10->cur;
   break;
  case 'f':

   if (!FUNC_0(VAR_10, "decimal32"))
    goto clean;
   ++VAR_10->cur;
   break;
  case 'h':

   if (!FUNC_0(VAR_10, "half"))
    goto clean;
   ++VAR_10->cur;
   break;
  case 'i':

   if (!FUNC_0(VAR_10, "char32_t"))
    goto clean;
   ++VAR_10->cur;
   break;
  case 'n':

   if (!FUNC_0(VAR_10, "decltype(nullptr)"))
    goto clean;
   ++VAR_10->cur;
   break;
  case 's':

   if (!FUNC_0(VAR_10, "char16_t"))
    goto clean;
   ++VAR_10->cur;
   break;
  case 'v':

   ++VAR_10->cur;
   if (*VAR_10->cur == '_') {
    ++VAR_10->cur;
    if (!FUNC_7(VAR_10,
        &VAR_23))
     goto clean;
    if (!FUNC_1(&VAR_12.ext_name, VAR_23))
     goto clean;
   } else {
    if (!FUNC_11(VAR_10,
        &VAR_24))
     goto clean;
    if (!FUNC_1(&VAR_12.ext_name, VAR_24))
     goto clean;
   }
   if (*VAR_10->cur != '_')
    goto clean;
   ++VAR_10->cur;
   if (!FUNC_25(&VAR_12, VAR_9))
    goto clean;
   if (VAR_11)
    VAR_11->firstp = 0;
   goto again;
  default:
   goto clean;
  }
  goto rtn;

 case 'e':

  if (!FUNC_0(VAR_10, "long double"))
   goto clean;
  ++VAR_10->cur;
  goto rtn;

 case 'E':

  if (VAR_10->ref_qualifier && VAR_10->is_functype) {
   VAR_26 = 1;

   FUNC_3(VAR_10);
   goto rtn;
  }
  goto clean;

 case 'f':

  if (!FUNC_0(VAR_10, "float"))
   goto clean;
  ++VAR_10->cur;
  goto rtn;

 case 'F':

  if (!FUNC_8(VAR_10, &VAR_18, &VAR_12))
   goto clean;
  VAR_19 = 0;
  goto rtn;

 case 'g':

  if (!FUNC_0(VAR_10, "__float128"))
   goto clean;
  ++VAR_10->cur;
  goto rtn;

 case 'G':

  if (!FUNC_25(&VAR_12, VAR_3))
   goto clean;
  ++VAR_10->cur;
  if (VAR_11)
   VAR_11->firstp = 0;
  goto again;

 case 'h':

  if (!FUNC_0(VAR_10, "unsigned char"))
   goto clean;
  ++VAR_10->cur;
  goto rtn;

 case 'i':

  if (!FUNC_0(VAR_10, "int"))
   goto clean;
  ++VAR_10->cur;
  goto rtn;

 case 'I':


  VAR_15 = VAR_13->size;
  if (!FUNC_15(VAR_10))
   goto clean;
  if ((VAR_25 = FUNC_22(VAR_13, VAR_15,
      VAR_13->size - 1, &VAR_17)) == ((void*)0))
   goto clean;
  if (!FUNC_20(&VAR_14)) {
   FUNC_17(VAR_25);
   goto clean;
  }
  if (!FUNC_21(&VAR_14, VAR_25, VAR_17)) {
   FUNC_17(VAR_25);
   FUNC_18(&VAR_14);
   goto clean;
  }
  FUNC_17(VAR_25);
  if (!FUNC_4(VAR_10, &VAR_14)) {
   FUNC_18(&VAR_14);
   goto clean;
  }
  FUNC_18(&VAR_14);
  goto rtn;

 case 'j':

  if (!FUNC_0(VAR_10, "unsigned int"))
   goto clean;
  ++VAR_10->cur;
  goto rtn;

 case 'K':

  if (!FUNC_25(&VAR_12, VAR_1))
   goto clean;
  ++VAR_10->cur;
  if (VAR_11)
   VAR_11->firstp = 0;
  goto again;

 case 'l':

  if (!FUNC_0(VAR_10, "long"))
   goto clean;
  ++VAR_10->cur;
  goto rtn;

 case 'm':

  if (!FUNC_0(VAR_10, "unsigned long"))
   goto clean;

  ++VAR_10->cur;

  goto rtn;
 case 'M':

  if (!FUNC_12(VAR_10, &VAR_12))
   goto clean;
  VAR_19 = 0;
  goto rtn;

 case 'n':

  if (!FUNC_0(VAR_10, "__int128"))
   goto clean;
  ++VAR_10->cur;
  goto rtn;

 case 'o':

  if (!FUNC_0(VAR_10, "unsigned __int128"))
   goto clean;
  ++VAR_10->cur;
  goto rtn;

 case 'O':

  if (VAR_10->ref_qualifier)
   goto clean;
  if (!FUNC_25(&VAR_12, VAR_6))
   goto clean;
  VAR_10->ref_qualifier = 1;
  VAR_10->ref_qualifier_type = VAR_6;
  ++VAR_10->cur;
  if (VAR_11)
   VAR_11->firstp = 0;
  goto again;

 case 'P':

  if (!FUNC_25(&VAR_12, VAR_4))
   goto clean;
  ++VAR_10->cur;
  if (VAR_11)
   VAR_11->firstp = 0;
  goto again;

 case 'r':

  if (!FUNC_25(&VAR_12, VAR_7))
   goto clean;
  ++VAR_10->cur;
  if (VAR_11)
   VAR_11->firstp = 0;
  goto again;

 case 'R':

  if (VAR_10->ref_qualifier)
   goto clean;
  if (!FUNC_25(&VAR_12, VAR_5))
   goto clean;
  VAR_10->ref_qualifier = 1;
  VAR_10->ref_qualifier_type = VAR_5;
  ++VAR_10->cur;
  if (VAR_11)
   VAR_11->firstp = 0;
  goto again;

 case 's':

  if (!FUNC_0(VAR_10, "short"))
   goto clean;
  ++VAR_10->cur;
  goto rtn;

 case 'S':

  if (!FUNC_14(VAR_10))
   goto clean;
  VAR_19 = 0;
  goto rtn;

 case 't':

  if (!FUNC_0(VAR_10, "unsigned short"))
   goto clean;
  ++VAR_10->cur;
  goto rtn;

 case 'T':

  if (!FUNC_16(VAR_10))
   goto clean;
  VAR_19 = 0;
  goto rtn;

 case 'u':

  ++VAR_10->cur;
  if (!FUNC_13(VAR_10))
   goto clean;
  VAR_19 = 0;
  goto rtn;

 case 'U':

  ++VAR_10->cur;
  if (!FUNC_10(VAR_10, &VAR_20))
   goto clean;
  if (VAR_20 <= 0)
   goto clean;
  if (!FUNC_21(&VAR_12.ext_name, VAR_10->cur, VAR_20))
   return (0);
  VAR_10->cur += VAR_20;
  if (!FUNC_25(&VAR_12, VAR_2))
   goto clean;
  if (VAR_11)
   VAR_11->firstp = 0;
  goto again;

 case 'v':

  VAR_27 = 0;
  if (VAR_11 && VAR_11->firstp) {




   VAR_27 = 1;
   for (VAR_21 = VAR_10->cur + 1; *VAR_21 != '\0'; VAR_21++) {
    if (*VAR_21 == 'E')
     break;
    if (*VAR_21 != 'R' && *VAR_21 != 'O') {
     VAR_27 = 0;
     break;
    }
   }
  }
  if (!VAR_27 && !FUNC_0(VAR_10, "void"))
   goto clean;
  ++VAR_10->cur;
  goto rtn;

 case 'V':

  if (!FUNC_25(&VAR_12, VAR_8))
   goto clean;
  ++VAR_10->cur;
  if (VAR_11)
   VAR_11->firstp = 0;
  goto again;

 case 'w':

  if (!FUNC_0(VAR_10, "wchar_t"))
   goto clean;
  ++VAR_10->cur;
  goto rtn;

 case 'x':

  if (!FUNC_0(VAR_10, "long long"))
   goto clean;
  ++VAR_10->cur;
  goto rtn;

 case 'y':

  if (!FUNC_0(VAR_10, "unsigned long long"))
   goto clean;
  ++VAR_10->cur;
  goto rtn;

 case 'z':

  if (!FUNC_0(VAR_10, "..."))
   goto clean;
  ++VAR_10->cur;
  goto rtn;
 }

 if (!FUNC_9(VAR_10))
  goto clean;

 VAR_19 = 0;
rtn:

 VAR_22 = FUNC_22(VAR_13, VAR_15, VAR_13->size - 1,
     &VAR_16);

 if (VAR_19 == 0) {
  if (!FUNC_19(&VAR_10->subst, VAR_22, VAR_16) &&
      !FUNC_21(&VAR_10->subst, VAR_22, VAR_16))
   goto clean;
 }

 if (!VAR_26 &&
     !FUNC_5(VAR_10, &VAR_12, VAR_22))
  goto clean;

 if (VAR_11)
  VAR_11->firstp = 0;

 FUNC_17(VAR_22);
 FUNC_17(VAR_23);
 FUNC_17(VAR_24);
 FUNC_23(&VAR_12);

 return (1);
clean:
 FUNC_17(VAR_22);
 FUNC_17(VAR_23);
 FUNC_17(VAR_24);
 FUNC_23(&VAR_12);

 return (0);
}
