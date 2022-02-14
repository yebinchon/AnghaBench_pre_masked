
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t size; } ;
struct cpp_demangle_data {char* cur; TYPE_1__ output; } ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct cpp_demangle_data*,char const*,int) ;
 int FUNC_3 (struct cpp_demangle_data*) ;
 int FUNC_4 (struct cpp_demangle_data*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*) ;
 char* FUNC_7 (TYPE_1__*,size_t,int,size_t*) ;

__attribute__((used)) static int
FUNC_8(struct cpp_demangle_data *VAR_0)
{
 size_t VAR_1, VAR_2, VAR_3, VAR_4, VAR_5;
 const char *VAR_6;
 char *VAR_7;

 if (VAR_0 == ((void*)0) || *(++VAR_0->cur) == '\0')
  return (0);

 if (*VAR_0->cur == '_') {
  if (*(++VAR_0->cur) == '\0')
   return (0);

  if (!FUNC_4(VAR_0, 0))
   return (0);

  if (!FUNC_2(VAR_0, "[]", 2))
   return (0);
 } else {
  if (FUNC_0(*VAR_0->cur) != 0) {
   VAR_6 = VAR_0->cur;
   while (FUNC_0(*VAR_0->cur) != 0)
    ++VAR_0->cur;
   if (*VAR_0->cur != '_')
    return (0);
   VAR_2 = VAR_0->cur - VAR_6;
   FUNC_1(VAR_2 > 0);
   if (*(++VAR_0->cur) == '\0')
    return (0);
   if (!FUNC_4(VAR_0, 0))
    return (0);
   if (!FUNC_2(VAR_0, "[", 1))
    return (0);
   if (!FUNC_2(VAR_0, VAR_6, VAR_2))
    return (0);
   if (!FUNC_2(VAR_0, "]", 1))
    return (0);
  } else {
   VAR_4 = VAR_0->output.size;
   if (!FUNC_3(VAR_0))
    return (0);
   if ((VAR_7 = FUNC_7(&VAR_0->output, VAR_4,
     VAR_0->output.size - 1, &VAR_3)) == ((void*)0))
    return (0);
   VAR_5 = VAR_0->output.size;
   for (VAR_1 = VAR_4; VAR_1 < VAR_5; ++VAR_1)
    if (!FUNC_6(&VAR_0->output)) {
     FUNC_5(VAR_7);
     return (0);
    }
   if (*VAR_0->cur != '_') {
    FUNC_5(VAR_7);
    return (0);
   }
   ++VAR_0->cur;
   if (*VAR_0->cur == '\0') {
    FUNC_5(VAR_7);
    return (0);
   }
   if (!FUNC_4(VAR_0, 0)) {
    FUNC_5(VAR_7);
    return (0);
   }
   if (!FUNC_2(VAR_0, "[", 1)) {
    FUNC_5(VAR_7);
    return (0);
   }
   if (!FUNC_2(VAR_0, VAR_7, VAR_3)) {
    FUNC_5(VAR_7);
    return (0);
   }
   if (!FUNC_2(VAR_0, "]", 1)) {
    FUNC_5(VAR_7);
    return (0);
   }
   FUNC_5(VAR_7);
  }
 }

 return (1);
}
