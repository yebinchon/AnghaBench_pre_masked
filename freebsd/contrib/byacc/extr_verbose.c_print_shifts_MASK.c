
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int suppressed; scalar_t__ action_code; size_t symbol; int number; struct TYPE_3__* next; } ;
typedef TYPE_1__ action ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,char*,int) ;
 char** VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1(action *VAR_4)
{
    int VAR_5;
    action *VAR_6;

    VAR_5 = 0;
    for (VAR_6 = VAR_4; VAR_6; VAR_6 = VAR_6->next)
    {
 if (VAR_6->suppressed < 2 && VAR_6->action_code == VAR_0)
     ++VAR_5;
    }

    if (VAR_5 > 0)
    {
 for (; VAR_4; VAR_4 = VAR_4->next)
 {
     if (VAR_4->action_code == VAR_0 && VAR_4->suppressed == 0)
  FUNC_0(VAR_3, "\t%s  shift %d\n",
   VAR_2[VAR_4->symbol], VAR_4->number);





 }
    }
}
