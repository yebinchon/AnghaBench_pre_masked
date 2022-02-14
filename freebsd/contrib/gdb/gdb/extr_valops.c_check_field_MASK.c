
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;


 int FUNC_0 (struct type*) ;
 int FUNC_1 (struct value*) ;
 scalar_t__ FUNC_2 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct type* FUNC_3 (struct type*) ;
 struct type* FUNC_4 (struct value*) ;
 int FUNC_5 (struct type*,char const*) ;
 int FUNC_6 (char*) ;

int
FUNC_7 (struct value *VAR_5, const char *VAR_6)
{
  struct type *VAR_7;

  FUNC_1 (VAR_5);

  VAR_7 = FUNC_4 (VAR_5);



  for (;;)
    {
      FUNC_0 (VAR_7);
      if (FUNC_2 (VAR_7) != VAR_1 && FUNC_2 (VAR_7) != VAR_2)
 break;
      VAR_7 = FUNC_3 (VAR_7);
    }

  if (FUNC_2 (VAR_7) == VAR_0)
    FUNC_6 ("not implemented: member type in check_field");

  if (FUNC_2 (VAR_7) != VAR_3
      && FUNC_2 (VAR_7) != VAR_4)
    FUNC_6 ("Internal error: `this' is not an aggregate");

  return FUNC_5 (VAR_7, VAR_6);
}
