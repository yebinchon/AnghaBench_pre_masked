
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* dyn_string_t ;
struct TYPE_4__ {int length; int* s; } ;


 int * FUNC_0 (TYPE_1__*,int) ;

int
FUNC_1 (dyn_string_t VAR_0, int VAR_1)
{

  if (FUNC_0 (VAR_0, VAR_0->length + 1) == ((void*)0))
    return 0;

  VAR_0->s[VAR_0->length] = VAR_1;

  VAR_0->s[VAR_0->length + 1] = '\0';

  ++(VAR_0->length);
  return 1;
}
