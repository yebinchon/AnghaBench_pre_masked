
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vector_type_qualifier {int dummy; } ;
struct TYPE_2__ {size_t size; char** container; } ;
struct cpp_demangle_data {float* cur; int cmd; int func_type; TYPE_1__ class_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpp_demangle_data*,char const*,int) ;
 int FUNC_1 (struct cpp_demangle_data*,struct vector_type_qualifier*,char const*) ;
 int FUNC_2 (struct cpp_demangle_data*,int ) ;
 size_t FUNC_3 (char const*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct vector_type_qualifier*) ;
 int FUNC_6 (struct vector_type_qualifier*) ;

__attribute__((used)) static int
FUNC_7(struct cpp_demangle_data *VAR_2, int *VAR_3,
    struct vector_type_qualifier *VAR_4)
{
 size_t VAR_5, VAR_6, VAR_7;
 const char *VAR_8;

 if (VAR_2 == ((void*)0) || *VAR_2->cur != 'F' || VAR_4 == ((void*)0))
  return (0);

 ++VAR_2->cur;
 if (*VAR_2->cur == 'Y') {
  if (VAR_3 != ((void*)0))
   *VAR_3 = 1;
  ++VAR_2->cur;
 }
 if (!FUNC_2(VAR_2, 0))
  return (0);
 if (*VAR_2->cur != 'E') {
  if (!FUNC_0(VAR_2, "(", 1))
   return (0);
  if (FUNC_4(&VAR_2->cmd, VAR_1)) {
   if ((VAR_5 = VAR_2->class_type.size) == 0)
    return (0);
   VAR_8 =
       VAR_2->class_type.container[VAR_5 - 1];
   if (VAR_8 == ((void*)0))
    return (0);
   if ((VAR_6 = FUNC_3(VAR_8)) == 0)
    return (0);
   if (!FUNC_0(VAR_2, VAR_8,
       VAR_6))
    return (0);
   if (!FUNC_0(VAR_2, "::*", 3))
    return (0);
   ++VAR_2->func_type;
  } else {
   if (!FUNC_1(VAR_2, VAR_4,
       (const char *) ((void*)0)))
    return (0);
   FUNC_5(VAR_4);
   if (!FUNC_6(VAR_4))
    return (0);
  }

  if (!FUNC_0(VAR_2, ")(", 2))
   return (0);

  VAR_7 = 0;
  for (;;) {
   if (!FUNC_2(VAR_2, 0))
    return (0);
   if (*VAR_2->cur == 'E')
    break;
   if (VAR_7++ > VAR_0)
    return (0);
  }

  if (FUNC_4(&VAR_2->cmd, VAR_1) == 1) {
   if (!FUNC_1(VAR_2, VAR_4,
       (const char *) ((void*)0)))
    return (0);
   FUNC_5(VAR_4);
   if (!FUNC_6(VAR_4))
    return (0);
  }

  if (!FUNC_0(VAR_2, ")", 1))
   return (0);
 }

 ++VAR_2->cur;

 return (1);
}
