
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
typedef scalar_t__ LONGEST ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ FUNC_2 (struct value*) ;
 scalar_t__ FUNC_3 (struct value*) ;
 int FUNC_4 (struct value*) ;
 struct type* FUNC_5 (int ) ;
 struct type* FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (struct type*) ;
 scalar_t__ FUNC_9 (struct type*) ;
 int FUNC_10 (struct type*) ;
 int FUNC_11 (struct type*) ;
 scalar_t__ FUNC_12 (struct value*) ;
 struct value* FUNC_13 (int ,scalar_t__) ;
 struct value* FUNC_14 (struct value**,int *,char*,int *,char*) ;

__attribute__((used)) static struct value *
FUNC_15 (struct value *VAR_1)
{
  struct type *VAR_2 = FUNC_5 (FUNC_4 (VAR_1));
  if (FUNC_9 (VAR_2))
    {
      struct type *VAR_3 =
 FUNC_6 (FUNC_11 (VAR_2));
      LONGEST VAR_4;

      if (&FUNC_6 == ((void*)0))
 FUNC_7 ("Bad GNAT array descriptor");




      if (FUNC_0 (VAR_2) == VAR_0)
 VAR_4 = FUNC_12 (VAR_1);
      else
 VAR_4 = FUNC_2 (VAR_1) + FUNC_3 (VAR_1);

      return
 FUNC_13 (FUNC_10 (VAR_3),
       VAR_4 - FUNC_1 (VAR_3));
    }

  else if (FUNC_8 (VAR_2))
    return FUNC_14 (&VAR_1, ((void*)0), "P_BOUNDS", ((void*)0),
        "Bad GNAT array descriptor");
  else
    return ((void*)0);
}
