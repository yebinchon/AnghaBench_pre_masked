
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* dyn_string_t ;
struct TYPE_4__ {int length; int * s; } ;


 int * FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *,char const*,int) ;

int
FUNC_3 (dyn_string_t VAR_0, int VAR_1, const char *VAR_2)
{
  int VAR_3;
  int VAR_4 = FUNC_1 (VAR_2);

  if (FUNC_0 (VAR_0, VAR_0->length + VAR_4) == ((void*)0))
    return 0;

  for (VAR_3 = VAR_0->length; VAR_3 >= VAR_1; --VAR_3)
    VAR_0->s[VAR_3 + VAR_4] = VAR_0->s[VAR_3];

  FUNC_2 (VAR_0->s + VAR_1, VAR_2, VAR_4);

  VAR_0->length += VAR_4;
  return 1;
}
