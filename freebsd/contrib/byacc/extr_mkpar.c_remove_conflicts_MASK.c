
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int symbol; int suppressed; scalar_t__ action_code; scalar_t__ prec; scalar_t__ assoc; struct TYPE_4__* next; } ;
typedef TYPE_1__ action ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__** VAR_12 ;

__attribute__((used)) static void
FUNC_2(void)
{
    int VAR_13;
    int VAR_14;
    action *VAR_15, *VAR_16 = 0;

    VAR_8 = 0;
    VAR_4 = 0;
    VAR_6 = FUNC_0(VAR_11, VAR_9);
    VAR_2 = FUNC_0(VAR_11, VAR_9);
    for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++)
    {
 VAR_7 = 0;
 VAR_3 = 0;
 VAR_14 = -1;



 for (VAR_15 = VAR_12[VAR_13]; VAR_15; VAR_15 = VAR_15->next)
 {
     if (VAR_15->symbol != VAR_14)
     {

  VAR_16 = VAR_15;
  VAR_14 = VAR_15->symbol;
     }

     else if (VAR_13 == VAR_10 && VAR_14 == 0)
     {
  VAR_7++;
  VAR_15->suppressed = 1;
  FUNC_1(VAR_16);
     }
     else if (VAR_16 != 0 && VAR_16->action_code == VAR_5)
     {
  if (VAR_16->prec > 0 && VAR_15->prec > 0)
  {
      if (VAR_16->prec < VAR_15->prec)
      {
   VAR_16->suppressed = 2;
   VAR_16 = VAR_15;
      }
      else if (VAR_16->prec > VAR_15->prec)
      {
   VAR_15->suppressed = 2;
      }
      else if (VAR_16->assoc == VAR_0)
      {
   VAR_16->suppressed = 2;
   VAR_16 = VAR_15;
      }
      else if (VAR_16->assoc == VAR_1)
      {
   VAR_15->suppressed = 2;
      }
      else
      {
   VAR_16->suppressed = 2;
   VAR_15->suppressed = 2;
      }
  }
  else
  {
      VAR_7++;
      VAR_15->suppressed = 1;
      FUNC_1(VAR_16);
  }
     }
     else
     {
  VAR_3++;
  VAR_15->suppressed = 1;
  FUNC_1(VAR_16);
     }
 }
 VAR_8 += VAR_7;
 VAR_4 += VAR_3;
 VAR_6[VAR_13] = VAR_7;
 VAR_2[VAR_13] = VAR_3;
    }
}
