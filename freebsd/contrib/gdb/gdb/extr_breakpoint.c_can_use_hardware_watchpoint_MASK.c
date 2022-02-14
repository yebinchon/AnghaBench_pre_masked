
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {scalar_t__ lval; scalar_t__ modifiable; struct value* next; } ;
struct type {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct value*) ;
 scalar_t__ FUNC_4 (struct value*) ;
 scalar_t__ FUNC_5 (struct value*) ;
 scalar_t__ FUNC_6 (struct value*) ;
 int FUNC_7 (struct value*) ;
 int VAR_2 ;
 struct type* FUNC_8 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_9 (struct value *VAR_6)
{
  int VAR_7 = 0;
  struct value *VAR_8 = VAR_6;


  if (!VAR_2)
    return 0;
  for (; VAR_6; VAR_6 = VAR_6->next)
    {
      if (FUNC_5 (VAR_6) == VAR_3)
 {
   if (FUNC_4 (VAR_6))



     ;
   else
     {


       struct type *VAR_9 = FUNC_8 (FUNC_7 (VAR_6));




       if (VAR_6 == VAR_8
    || (FUNC_1 (VAR_9) != VAR_1
        && FUNC_1 (VAR_9) != VAR_0))
  {
    CORE_ADDR VAR_10 = FUNC_3 (VAR_6) + FUNC_6 (VAR_6);
    int VAR_11 = FUNC_2 (FUNC_7 (VAR_6));

    if (!FUNC_0 (VAR_10, VAR_11))
      return 0;
    else
      VAR_7++;
  }
     }
 }
      else if (VAR_6->lval != VAR_5 && VAR_6->modifiable == 0)
 return 0;
      else if (VAR_6->lval == VAR_4)
 return 0;
    }



  return VAR_7;
}
