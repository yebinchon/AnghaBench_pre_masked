
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* optab ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_5__ {TYPE_1__* handlers; } ;
struct TYPE_4__ {scalar_t__ libfunc; } ;


 scalar_t__ FUNC_0 (char const*) ;

void
FUNC_1 (optab VAR_0, enum machine_mode VAR_1, const char *VAR_2)
{
  if (VAR_2)
    VAR_0->handlers[VAR_1].libfunc = FUNC_0 (VAR_2);
  else
    VAR_0->handlers[VAR_1].libfunc = 0;
}
