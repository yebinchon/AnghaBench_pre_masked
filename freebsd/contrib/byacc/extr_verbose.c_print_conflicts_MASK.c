
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int suppressed; int symbol; int number; int action_code; struct TYPE_3__* next; } ;
typedef TYPE_1__ action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int,...) ;
 TYPE_1__** VAR_3 ;
 char** VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_1(int VAR_6)
{
    int VAR_7, VAR_8, VAR_9;
    action *VAR_10;

    VAR_8 = 0;
    VAR_9 = -1;
    VAR_7 = -1;
    for (VAR_10 = VAR_3[VAR_6]; VAR_10; VAR_10 = VAR_10->next)
    {
 if (VAR_10->suppressed == 2)
     continue;

 if (VAR_10->symbol != VAR_7)
 {
     VAR_7 = VAR_10->symbol;
     VAR_9 = VAR_10->number;
     if (VAR_10->action_code == VAR_1)
  VAR_8 = VAR_1;
     else
  VAR_8 = VAR_0;
 }
 else if (VAR_10->suppressed == 1)
 {
     if (VAR_6 == VAR_2 && VAR_7 == 0)
     {
  FUNC_0(VAR_5, "%d: shift/reduce conflict (accept, reduce %d) on $end\n", VAR_6, VAR_10->number - 2);

     }
     else
     {
  if (VAR_8 == VAR_1)
  {
      FUNC_0(VAR_5, "%d: shift/reduce conflict (shift %d, reduce %d) on %s\n", VAR_6, VAR_9, VAR_10->number - 2,

       VAR_4[VAR_7]);
  }
  else
  {
      FUNC_0(VAR_5, "%d: reduce/reduce conflict (reduce %d, reduce %d) on %s\n", VAR_6, VAR_9 - 2, VAR_10->number - 2,

       VAR_4[VAR_7]);
  }
     }
 }
    }
}
