
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ action_code; int suppressed; int number; size_t symbol; struct TYPE_3__* next; } ;
typedef TYPE_1__ action ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 char** VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1(action *VAR_4, int VAR_5)
{
    int VAR_6, VAR_7;
    action *VAR_8;

    VAR_7 = 0;
    for (VAR_8 = VAR_4; VAR_8; VAR_8 = VAR_8->next)
    {
 if (VAR_8->action_code == VAR_0 && VAR_8->suppressed < 2)
 {
     VAR_7 = 1;
     break;
 }
    }

    if (VAR_7 == 0)
 FUNC_0(VAR_3, "\t.  error\n");
    else
    {
 for (; VAR_4; VAR_4 = VAR_4->next)
 {
     if (VAR_4->action_code == VAR_0 && VAR_4->number != VAR_5)
     {
  VAR_6 = VAR_4->number - 2;
  if (VAR_4->suppressed == 0)
      FUNC_0(VAR_3, "\t%s  reduce %d\n",
       VAR_2[VAR_4->symbol], VAR_6);





     }
 }

 if (VAR_5 > 0)
     FUNC_0(VAR_3, "\t.  reduce %d\n", VAR_5 - 2);
    }
}
