
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* dyn_string_t ;
struct TYPE_4__ {char* s; } ;


 int FUNC_0 (TYPE_1__*) ;

char*
FUNC_1 (dyn_string_t VAR_0)
{

  char* VAR_1 = VAR_0->s;

  VAR_0->s = ((void*)0);

  FUNC_0 (VAR_0);

  return VAR_1;
}
