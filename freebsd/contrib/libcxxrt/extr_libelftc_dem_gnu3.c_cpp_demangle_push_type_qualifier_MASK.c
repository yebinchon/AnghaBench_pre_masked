
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const** container; int size; } ;
struct vector_type_qualifier {size_t size; int* q_container; TYPE_1__ ext_name; } ;
struct vector_str {int dummy; } ;
struct cpp_demangle_data {int dummy; } ;
 int FUNC_0 (struct cpp_demangle_data*,char*,size_t) ;
 int FUNC_1 (struct cpp_demangle_data*,struct vector_str*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*,size_t,char*,char const*) ;
 size_t FUNC_5 (char const*) ;
 int FUNC_6 (struct vector_str*) ;
 int FUNC_7 (struct vector_str*) ;
 int FUNC_8 (struct vector_str*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_9(struct cpp_demangle_data *VAR_0,
    struct vector_type_qualifier *VAR_1, const char *VAR_2)
{
 struct vector_str VAR_3;
 size_t VAR_4, VAR_5, VAR_6;
 int VAR_7;
 char *VAR_8;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return (0);

 if ((VAR_4 = VAR_1->size) == 0)
  return (1);

 VAR_7 = 0;
 if (VAR_2 != ((void*)0)) {
  if (!FUNC_7(&VAR_3))
   return (0);
  if (!FUNC_8(&VAR_3, VAR_2, FUNC_5(VAR_2)))
   goto clean;
 }

 VAR_5 = 0;
 while (VAR_4 > 0) {
  switch (VAR_1->q_container[VAR_4 - 1]) {
  case 132:
   if (!FUNC_0(VAR_0, "*", 1))
    goto clean;
   if (VAR_2 != ((void*)0)) {
    if (!FUNC_8(&VAR_3, "*", 1))
     goto clean;
    if (!FUNC_1(VAR_0,
        &VAR_3))
     goto clean;
   }
   break;

  case 131:
   if (!FUNC_0(VAR_0, "&", 1))
    goto clean;
   if (VAR_2 != ((void*)0)) {
    if (!FUNC_8(&VAR_3, "&", 1))
     goto clean;
    if (!FUNC_1(VAR_0,
        &VAR_3))
     goto clean;
   }
   break;

  case 136:
   if (!FUNC_0(VAR_0, " complex", 8))
    goto clean;
   if (VAR_2 != ((void*)0)) {
    if (!FUNC_8(&VAR_3, " complex", 8))
     goto clean;
    if (!FUNC_1(VAR_0,
        &VAR_3))
     goto clean;
   }
   break;

  case 133:
   if (!FUNC_0(VAR_0, " imaginary", 10))
    goto clean;
   if (VAR_2 != ((void*)0)) {
    if (!FUNC_8(&VAR_3, " imaginary",
        10))
     goto clean;
    if (!FUNC_1(VAR_0,
        &VAR_3))
     goto clean;
   }
   break;

  case 134:
   if (VAR_1->ext_name.size == 0 ||
       VAR_5 > VAR_1->ext_name.size - 1)
    goto clean;
   if ((VAR_6 = FUNC_5(VAR_1->ext_name.container[VAR_5])) ==
       0)
    goto clean;
   if ((VAR_8 = FUNC_3(VAR_6 + 2)) == ((void*)0))
    goto clean;
   FUNC_4(VAR_8, VAR_6 + 2, " %s",
       VAR_1->ext_name.container[VAR_5]);

   if (!FUNC_0(VAR_0, VAR_8, VAR_6 + 1)) {
    FUNC_2(VAR_8);
    goto clean;
   }

   if (VAR_2 != ((void*)0)) {
    if (!FUNC_8(&VAR_3, VAR_8,
        VAR_6 + 1)) {
     FUNC_2(VAR_8);
     goto clean;
    }
    if (!FUNC_1(VAR_0,
        &VAR_3)) {
     FUNC_2(VAR_8);
     goto clean;
    }
   }
   FUNC_2(VAR_8);
   ++VAR_5;
   break;

  case 130:
   if (!FUNC_0(VAR_0, " restrict", 9))
    goto clean;
   if (VAR_2 != ((void*)0)) {
    if (!FUNC_8(&VAR_3, " restrict", 9))
     goto clean;
    if (!FUNC_1(VAR_0,
        &VAR_3))
     goto clean;
   }
   break;

  case 129:
   if (!FUNC_0(VAR_0, " volatile", 9))
    goto clean;
   if (VAR_2 != ((void*)0)) {
    if (!FUNC_8(&VAR_3, " volatile", 9))
     goto clean;
    if (!FUNC_1(VAR_0,
        &VAR_3))
     goto clean;
   }
   break;

  case 135:
   if (!FUNC_0(VAR_0, " const", 6))
    goto clean;
   if (VAR_2 != ((void*)0)) {
    if (!FUNC_8(&VAR_3, " const", 6))
     goto clean;
    if (!FUNC_1(VAR_0,
        &VAR_3))
     goto clean;
   }
   break;

  case 128:
   if (VAR_1->ext_name.size == 0 ||
       VAR_5 > VAR_1->ext_name.size - 1)
    goto clean;
   if ((VAR_6 = FUNC_5(VAR_1->ext_name.container[VAR_5])) ==
       0)
    goto clean;
   if ((VAR_8 = FUNC_3(VAR_6 + 12)) == ((void*)0))
    goto clean;
   FUNC_4(VAR_8, VAR_6 + 12, " __vector(%s)",
       VAR_1->ext_name.container[VAR_5]);
   if (!FUNC_0(VAR_0, VAR_8, VAR_6 + 11)) {
    FUNC_2(VAR_8);
    goto clean;
   }
   if (VAR_2 != ((void*)0)) {
    if (!FUNC_8(&VAR_3, VAR_8,
        VAR_6 + 11)) {
     FUNC_2(VAR_8);
     goto clean;
    }
    if (!FUNC_1(VAR_0,
        &VAR_3)) {
     FUNC_2(VAR_8);
     goto clean;
    }
   }
   FUNC_2(VAR_8);
   ++VAR_5;
   break;
  }
  --VAR_4;
 }

 VAR_7 = 1;
clean:
 if (VAR_2 != ((void*)0))
  FUNC_6(&VAR_3);

 return (VAR_7);
}
