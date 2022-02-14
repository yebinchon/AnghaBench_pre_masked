
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;


 int FUNC_0 (struct value*) ;
 int FUNC_1 (struct value*) ;
 scalar_t__ FUNC_2 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (struct type*) ;
 struct type* FUNC_4 (struct value*) ;
 struct type* VAR_3 ;
 struct type* FUNC_5 (struct type*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct value*) ;
 int FUNC_8 (struct value*) ;
 struct value* FUNC_9 (struct type*,int ) ;
 struct value* FUNC_10 (struct type*,int ) ;

struct value *
FUNC_11 (struct value *VAR_4)
{
  struct type *VAR_5;
  struct type *VAR_6 = FUNC_4 (VAR_4);

  FUNC_1 (VAR_4);
  FUNC_0 (VAR_4);

  VAR_5 = FUNC_5 (FUNC_4 (VAR_4));

  if (FUNC_2 (VAR_5) == VAR_1)
    return FUNC_9 (VAR_6, -FUNC_7 (VAR_4));
  else if (FUNC_2 (VAR_5) == VAR_2 || FUNC_2 (VAR_5) == VAR_0)
    {


      if (FUNC_3 (VAR_5) < FUNC_3 (VAR_3))
 VAR_6 = VAR_3;

      return FUNC_10 (VAR_6, -FUNC_8 (VAR_4));
    }
  else
    {
      FUNC_6 ("Argument to negate operation not a number.");
      return 0;
    }
}
