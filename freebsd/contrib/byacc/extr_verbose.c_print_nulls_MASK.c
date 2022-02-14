
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ action_code; int suppressed; size_t number; struct TYPE_3__* next; } ;
typedef TYPE_1__ action ;
typedef size_t Value_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 size_t* VAR_1 ;
 TYPE_1__** VAR_2 ;
 size_t* VAR_3 ;
 scalar_t__* VAR_4 ;
 char** VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_1(int VAR_7)
{
    action *VAR_8;
    Value_t VAR_9, VAR_10, VAR_11, VAR_12;

    VAR_12 = 0;
    for (VAR_8 = VAR_2[VAR_7]; VAR_8; VAR_8 = VAR_8->next)
    {
 if (VAR_8->action_code == VAR_0 &&
     (VAR_8->suppressed == 0 || VAR_8->suppressed == 1))
 {
     VAR_9 = VAR_8->number;
     if (VAR_4[VAR_9] + 1 == VAR_4[VAR_9 + 1])
     {
  for (VAR_10 = 0; VAR_10 < VAR_12 && VAR_9 > VAR_1[VAR_10]; ++VAR_10)
      continue;

  if (VAR_10 == VAR_12)
  {
      ++VAR_12;
      VAR_1[VAR_10] = VAR_9;
  }
  else if (VAR_9 != VAR_1[VAR_10])
  {
      ++VAR_12;
      for (VAR_11 = (Value_t)(VAR_12 - 1); VAR_11 > VAR_10; --VAR_11)
   VAR_1[VAR_11] = VAR_1[VAR_11 - 1];
      VAR_1[VAR_10] = VAR_9;
  }
     }
 }
    }

    for (VAR_9 = 0; VAR_9 < VAR_12; ++VAR_9)
    {
 VAR_10 = VAR_1[VAR_9];
 FUNC_0(VAR_6, "\t%s : .  (%lu)\n", VAR_5[VAR_3[VAR_10]],
  VAR_10 - 2);
    }
    FUNC_0(VAR_6, "\n");
}
