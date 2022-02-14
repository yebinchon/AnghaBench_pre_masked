
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;


 int FUNC_0 (struct value*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct type* FUNC_3 (struct value*,int) ;
 struct value* FUNC_4 (struct value*) ;
 int FUNC_5 (struct value*) ;
 struct value* FUNC_6 (struct type*,int ) ;
 int FUNC_7 (int ) ;

struct value *
FUNC_8 (struct value *VAR_0)
{
  if (FUNC_1 (FUNC_0 (VAR_0)))
    {
      struct type *VAR_1 = FUNC_3 (VAR_0, 1);
      if (VAR_1 == ((void*)0))
 return ((void*)0);
      return FUNC_6 (VAR_1, FUNC_7 (FUNC_5 (VAR_0)));
    }
  else if (FUNC_2 (FUNC_0 (VAR_0)))
    return FUNC_4 (VAR_0);
  else
    return VAR_0;
}
