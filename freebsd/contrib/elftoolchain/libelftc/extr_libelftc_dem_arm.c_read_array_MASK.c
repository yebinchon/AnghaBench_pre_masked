
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buf; } ;
struct demangle_data {char* p; int array; TYPE_1__ array_str; } ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,size_t) ;
 int FUNC_4 (char*,char const*,size_t) ;

__attribute__((used)) static bool
FUNC_5(struct demangle_data *VAR_0)
{
 size_t VAR_1;
 const char *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_0->p == ((void*)0))
  return (0);

 VAR_2 = VAR_0->p;
 FUNC_1(VAR_2 != ((void*)0));

 for (;;) {
  if (*VAR_2 == '\0')
   return (0);

  if (FUNC_0(*VAR_2) == 0)
   break;

  ++VAR_2;
 }

 if (*VAR_2 != '_')
  return (0);

 VAR_1 = VAR_2 - VAR_0->p;
 FUNC_1(VAR_1 > 0);

 FUNC_2(&VAR_0->array_str);
 if (FUNC_3(&VAR_0->array_str, VAR_1 + 3) == 0)
  return (0);

 FUNC_4(VAR_0->array_str.buf + 1, VAR_0->p, VAR_1);
 *VAR_0->array_str.buf = '[';
 *(VAR_0->array_str.buf + VAR_1 + 1) = ']';

 VAR_0->array = 1;
 VAR_0->p = VAR_2 + 1;

 return (1);
}
