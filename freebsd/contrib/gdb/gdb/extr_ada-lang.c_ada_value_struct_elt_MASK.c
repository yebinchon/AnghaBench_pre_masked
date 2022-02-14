
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct value*) ;
 struct value* FUNC_2 (struct value*) ;
 struct value* FUNC_3 (char*,struct value*,int ,struct type*) ;
 struct value* FUNC_4 (struct value*) ;
 struct type* FUNC_5 (int ) ;
 int FUNC_6 (char*,char*) ;

struct value *
FUNC_7 (struct value *VAR_4, char *VAR_5, char *VAR_6)
{
  struct type *VAR_7;
  struct value *VAR_8;

  VAR_4 = FUNC_2 (VAR_4);
  VAR_7 = FUNC_5 (FUNC_1 (VAR_4));



  while (FUNC_0 (VAR_7) == VAR_0 || FUNC_0 (VAR_7) == VAR_1)
    {
      VAR_4 = FUNC_4 (VAR_4);
      VAR_7 = FUNC_5 (FUNC_1 (VAR_4));
    }

  if (FUNC_0 (VAR_7) != VAR_2 && FUNC_0 (VAR_7) != VAR_3)
    FUNC_6 ("Attempt to extract a component of a value that is not a %s.",
    VAR_6);

  VAR_8 = FUNC_3 (VAR_5, VAR_4, 0, VAR_7);
  if (VAR_8 == ((void*)0))
    FUNC_6 ("There is no member named %s.", VAR_5);

  return VAR_8;
}
