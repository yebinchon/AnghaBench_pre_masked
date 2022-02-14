
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* dyn_string_t ;
struct TYPE_5__ {int length; int * s; } ;


 int FUNC_0 () ;
 int * FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *,int *,int) ;

int
FUNC_3 (dyn_string_t VAR_0, int VAR_1, dyn_string_t VAR_2)
{
  int VAR_3;

  if (VAR_2 == VAR_0)
    FUNC_0 ();

  if (FUNC_1 (VAR_0, VAR_0->length + VAR_2->length) == ((void*)0))
    return 0;

  for (VAR_3 = VAR_0->length; VAR_3 >= VAR_1; --VAR_3)
    VAR_0->s[VAR_3 + VAR_2->length] = VAR_0->s[VAR_3];

  FUNC_2 (VAR_0->s + VAR_1, VAR_2->s, VAR_2->length);

  VAR_0->length += VAR_2->length;
  return 1;
}
