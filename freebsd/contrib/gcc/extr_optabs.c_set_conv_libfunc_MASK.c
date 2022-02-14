
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef TYPE_2__* convert_optab ;
struct TYPE_5__ {TYPE_1__** handlers; } ;
struct TYPE_4__ {scalar_t__ libfunc; } ;


 scalar_t__ FUNC_0 (char const*) ;

void
FUNC_1 (convert_optab VAR_0, enum machine_mode VAR_1,
    enum machine_mode VAR_2, const char *VAR_3)
{
  if (VAR_3)
    VAR_0->handlers[VAR_1][VAR_2].libfunc = FUNC_0 (VAR_3);
  else
    VAR_0->handlers[VAR_1][VAR_2].libfunc = 0;
}
