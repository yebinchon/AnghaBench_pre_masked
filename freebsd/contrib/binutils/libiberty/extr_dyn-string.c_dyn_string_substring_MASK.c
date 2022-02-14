
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* dyn_string_t ;
struct TYPE_5__ {int length; char* s; } ;


 int FUNC_0 () ;
 int * FUNC_1 (TYPE_1__*,int) ;

int
FUNC_2 (dyn_string_t VAR_0, dyn_string_t VAR_1,
                      int VAR_2, int VAR_3)
{
  int VAR_4;
  int VAR_5 = VAR_3 - VAR_2;

  if (VAR_2 > VAR_3 || VAR_2 > VAR_1->length || VAR_3 > VAR_1->length)
    FUNC_0 ();


  if (FUNC_1 (VAR_0, VAR_5) == ((void*)0))
    return 0;

  for (VAR_4 = VAR_5; --VAR_4 >= 0; )
    VAR_0->s[VAR_4] = VAR_1->s[VAR_2 + VAR_4];

  VAR_0->s[VAR_5] = '\0';

  VAR_0->length = VAR_5;

  return 1;
}
