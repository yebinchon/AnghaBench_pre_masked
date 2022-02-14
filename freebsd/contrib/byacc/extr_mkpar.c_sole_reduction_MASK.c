
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ action_code; int number; int symbol; struct TYPE_4__* next; } ;
typedef TYPE_1__ action ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__** VAR_2 ;

__attribute__((used)) static int
FUNC_1(int VAR_3)
{
    int VAR_4, VAR_5;
    action *VAR_6;

    VAR_4 = 0;
    VAR_5 = 0;
    for (VAR_6 = VAR_2[VAR_3]; VAR_6; VAR_6 = VAR_6->next)
    {
 if (VAR_6->action_code == VAR_1 && FUNC_0(VAR_6))
     return (0);
 else if ((VAR_6->action_code == VAR_0) && FUNC_0(VAR_6))
 {
     if (VAR_5 > 0 && VAR_6->number != VAR_5)
  return (0);
     if (VAR_6->symbol != 1)
  ++VAR_4;
     VAR_5 = VAR_6->number;
 }
    }

    if (VAR_4 == 0)
 return (0);
    return (VAR_5);
}
