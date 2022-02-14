
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_12 (tree VAR_13)
{
  tree VAR_14 = FUNC_9 (FUNC_3 (VAR_12));
  tree VAR_15 = VAR_13;

  for (;;)
    {
      if (FUNC_5 (VAR_15) == VAR_5)
 VAR_15 = FUNC_6 (VAR_15, 1);
      else if (FUNC_5 (VAR_15) == VAR_6
        || FUNC_5 (VAR_15) == VAR_7
        || FUNC_5 (VAR_15) == VAR_8)
 VAR_15 = FUNC_6 (VAR_15, 0);
      else
 break;
    }

  if (FUNC_5 (VAR_15) != VAR_0)
    return;
  VAR_15 = FUNC_6 (VAR_15, 0);

  if (FUNC_5 (VAR_14) == VAR_9)
    {
      if (FUNC_5 (VAR_15) == VAR_1
   || FUNC_5 (VAR_15) == VAR_10)
 {
   FUNC_11 (0, "returning reference to temporary");
   return;
 }
      if (FUNC_5 (VAR_15) == VAR_11
   && FUNC_1 (VAR_15)
   && FUNC_4 (FUNC_1 (VAR_15)))
 {
   FUNC_11 (0, "reference to non-lvalue returned");
   return;
 }
    }

  while (FUNC_5 (VAR_15) == VAR_4
  || FUNC_5 (VAR_15) == VAR_2)
    VAR_15 = FUNC_6 (VAR_15, 0);

  if (FUNC_2 (VAR_15)
      && FUNC_1 (VAR_15)
      && FUNC_0 (VAR_15)
      && !(FUNC_8 (VAR_15)
    || FUNC_7 (VAR_15)))
    {
      if (FUNC_5 (VAR_14) == VAR_9)
 FUNC_11 (0, "reference to local variable %q+D returned",
   VAR_15);

      else if (FUNC_5 (VAR_14) == VAR_3)
 FUNC_10 ("returning block that lives on the local stack");

      else
 FUNC_11 (0, "address of local variable %q+D returned",
   VAR_15);
      return;
    }
}
