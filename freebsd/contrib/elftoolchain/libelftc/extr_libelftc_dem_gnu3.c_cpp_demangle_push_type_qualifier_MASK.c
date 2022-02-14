
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char** container; int size; } ;
struct vector_type_qualifier {size_t size; int* q_container; TYPE_1__ ext_name; } ;
struct vector_str {int dummy; } ;
struct cpp_demangle_data {int push_qualifier; } ;
typedef enum type_qualifier { ____Placeholder_type_qualifier } type_qualifier ;


 int FUNC_0 (struct cpp_demangle_data*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vector_str*,char const*) ;
 int FUNC_2 (struct cpp_demangle_data*,struct vector_str*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (size_t) ;
 int FUNC_5 (char*,size_t,char*,char*) ;
 size_t FUNC_6 (char*) ;
 int FUNC_7 (struct vector_str*) ;
 int FUNC_8 (struct vector_str*) ;

__attribute__((used)) static int
FUNC_9(struct cpp_demangle_data *VAR_2,
    struct vector_type_qualifier *VAR_3, const char *VAR_4)
{
 struct vector_str VAR_5;
 enum type_qualifier VAR_6;
 size_t VAR_7, VAR_8, VAR_9;
 char *VAR_10;
 int VAR_11;
 bool VAR_12;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
  return (0);

 if ((VAR_7 = VAR_3->size) == 0)
  return (1);

 VAR_11 = 0;
 if (VAR_4 != ((void*)0)) {
  if (!FUNC_8(&VAR_5))
   return (0);
  if (!FUNC_1(&VAR_5, VAR_4))
   goto clean;
 }

 VAR_12 = 1;
 VAR_8 = 0;
 while (VAR_7 > 0) {
  switch (VAR_3->q_container[VAR_7 - 1]) {
  case 133:
   VAR_12 = 0;
   if (VAR_2->push_qualifier == VAR_0)
    break;
   if (!FUNC_0(VAR_2, "*"))
    goto clean;
   if (VAR_4 != ((void*)0)) {
    if (!FUNC_1(&VAR_5, "*"))
     goto clean;
    if (!FUNC_2(VAR_2,
        &VAR_5))
     goto clean;
   }
   break;

  case 132:
   VAR_12 = 0;
   if (VAR_2->push_qualifier == VAR_0)
    break;
   if (!FUNC_0(VAR_2, "&"))
    goto clean;
   if (VAR_4 != ((void*)0)) {
    if (!FUNC_1(&VAR_5, "&"))
     goto clean;
    if (!FUNC_2(VAR_2,
        &VAR_5))
     goto clean;
   }
   break;

  case 131:
   VAR_12 = 0;
   if (VAR_2->push_qualifier == VAR_0)
    break;
   if (!FUNC_0(VAR_2, "&&"))
    goto clean;
   if (VAR_4 != ((void*)0)) {
    if (!FUNC_1(&VAR_5, "&&"))
     goto clean;
    if (!FUNC_2(VAR_2,
        &VAR_5))
     goto clean;
   }
   break;

  case 137:
   VAR_12 = 0;
   if (VAR_2->push_qualifier == VAR_0)
    break;
   if (!FUNC_0(VAR_2, " complex"))
    goto clean;
   if (VAR_4 != ((void*)0)) {
    if (!FUNC_1(&VAR_5, " complex"))
     goto clean;
    if (!FUNC_2(VAR_2,
        &VAR_5))
     goto clean;
   }
   break;

  case 134:
   VAR_12 = 0;
   if (VAR_2->push_qualifier == VAR_0)
    break;
   if (!FUNC_0(VAR_2, " imaginary"))
    goto clean;
   if (VAR_4 != ((void*)0)) {
    if (!FUNC_1(&VAR_5, " imaginary"))
     goto clean;
    if (!FUNC_2(VAR_2,
        &VAR_5))
     goto clean;
   }
   break;

  case 135:
   VAR_12 = 0;
   if (VAR_2->push_qualifier == VAR_0)
    break;
   if (VAR_3->ext_name.size == 0 ||
       VAR_8 > VAR_3->ext_name.size - 1)
    goto clean;
   if ((VAR_9 = FUNC_6(VAR_3->ext_name.container[VAR_8])) ==
       0)
    goto clean;
   if ((VAR_10 = FUNC_4(VAR_9 + 2)) == ((void*)0))
    goto clean;
   FUNC_5(VAR_10, VAR_9 + 2, " %s",
       VAR_3->ext_name.container[VAR_8]);

   if (!FUNC_0(VAR_2, VAR_10)) {
    FUNC_3(VAR_10);
    goto clean;
   }

   if (VAR_4 != ((void*)0)) {
    if (!FUNC_1(&VAR_5, VAR_10)) {
     FUNC_3(VAR_10);
     goto clean;
    }
    if (!FUNC_2(VAR_2,
        &VAR_5)) {
     FUNC_3(VAR_10);
     goto clean;
    }
   }
   FUNC_3(VAR_10);
   ++VAR_8;
   break;

  case 130:
   if (VAR_2->push_qualifier == VAR_1 &&
       VAR_12)
    break;
   if (VAR_2->push_qualifier == VAR_0 && !VAR_12)
    break;
   if (!FUNC_0(VAR_2, " restrict"))
    goto clean;
   if (VAR_4 != ((void*)0)) {
    if (!FUNC_1(&VAR_5, " restrict"))
     goto clean;
    if (VAR_7 - 1 > 0) {
     VAR_6 = VAR_3->q_container[VAR_7 - 2];
     if (VAR_6 == 130 || VAR_6 == 129 ||
         VAR_6 == 136)
      break;
    }
    if (!FUNC_2(VAR_2,
        &VAR_5))
     goto clean;
   }
   break;

  case 129:
   if (VAR_2->push_qualifier == VAR_1 &&
       VAR_12)
    break;
   if (VAR_2->push_qualifier == VAR_0 && !VAR_12)
    break;
   if (!FUNC_0(VAR_2, " volatile"))
    goto clean;
   if (VAR_4 != ((void*)0)) {
    if (!FUNC_1(&VAR_5, " volatile"))
     goto clean;
    if (VAR_7 - 1 > 0) {
     VAR_6 = VAR_3->q_container[VAR_7 - 2];
     if (VAR_6 == 130 || VAR_6 == 129 ||
         VAR_6 == 136)
      break;
    }
    if (!FUNC_2(VAR_2,
        &VAR_5))
     goto clean;
   }
   break;

  case 136:
   if (VAR_2->push_qualifier == VAR_1 &&
       VAR_12)
    break;
   if (VAR_2->push_qualifier == VAR_0 && !VAR_12)
    break;
   if (!FUNC_0(VAR_2, " const"))
    goto clean;
   if (VAR_4 != ((void*)0)) {
    if (!FUNC_1(&VAR_5, " const"))
     goto clean;
    if (VAR_7 - 1 > 0) {
     VAR_6 = VAR_3->q_container[VAR_7 - 2];
     if (VAR_6 == 130 || VAR_6 == 129 ||
         VAR_6 == 136)
      break;
    }
    if (!FUNC_2(VAR_2,
        &VAR_5))
     goto clean;
   }
   break;

  case 128:
   VAR_12 = 0;
   if (VAR_2->push_qualifier == VAR_0)
    break;
   if (VAR_3->ext_name.size == 0 ||
       VAR_8 > VAR_3->ext_name.size - 1)
    goto clean;
   if ((VAR_9 = FUNC_6(VAR_3->ext_name.container[VAR_8])) ==
       0)
    goto clean;
   if ((VAR_10 = FUNC_4(VAR_9 + 12)) == ((void*)0))
    goto clean;
   FUNC_5(VAR_10, VAR_9 + 12, " __vector(%s)",
       VAR_3->ext_name.container[VAR_8]);
   if (!FUNC_0(VAR_2, VAR_10)) {
    FUNC_3(VAR_10);
    goto clean;
   }
   if (VAR_4 != ((void*)0)) {
    if (!FUNC_1(&VAR_5, VAR_10)) {
     FUNC_3(VAR_10);
     goto clean;
    }
    if (!FUNC_2(VAR_2,
        &VAR_5)) {
     FUNC_3(VAR_10);
     goto clean;
    }
   }
   FUNC_3(VAR_10);
   ++VAR_8;
   break;
  }
  --VAR_7;
 }

 VAR_11 = 1;
clean:
 if (VAR_4 != ((void*)0))
  FUNC_7(&VAR_5);

 return (VAR_11);
}
