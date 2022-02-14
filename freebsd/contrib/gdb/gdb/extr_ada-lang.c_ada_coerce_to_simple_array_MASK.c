
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;


 int FUNC_0 (struct value*) ;
 struct value* FUNC_1 (struct value*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct value* FUNC_4 (struct value*) ;
 int FUNC_5 (char*) ;
 struct value* FUNC_6 (struct value*) ;

struct value *
FUNC_7 (struct value *VAR_0)
{
  if (FUNC_2 (FUNC_0 (VAR_0)))
    {
      struct value *VAR_1 = FUNC_1 (VAR_0);
      if (VAR_1 == ((void*)0))
 FUNC_5 ("Bounds unavailable for null array pointer.");
      return FUNC_6 (VAR_1);
    }
  else if (FUNC_3 (FUNC_0 (VAR_0)))
    return FUNC_4 (VAR_0);
  else
    return VAR_0;
}
