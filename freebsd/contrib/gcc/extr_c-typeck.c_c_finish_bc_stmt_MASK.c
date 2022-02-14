
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_5 () ;
 int VAR_3 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int VAR_4 ;

tree
FUNC_9 (tree *VAR_5, bool VAR_6)
{
  bool VAR_7;
  tree VAR_8 = *VAR_5;
  VAR_7 = !FUNC_3 (VAR_3);

  if (!VAR_8)
    {
      if (!VAR_7)
 *VAR_5 = VAR_8 = FUNC_5 ();
    }
  else if (FUNC_0 (VAR_8) == VAR_1)
    ;
  else switch (FUNC_1 (VAR_8))
    {
    case 0:
      if (VAR_6)
 FUNC_6 ("break statement not within loop or switch");
      else
 FUNC_6 ("continue statement not within a loop");
      return VAR_2;

    case 1:
      FUNC_7 (VAR_6);
      FUNC_6 ("break statement used with OpenMP for loop");
      return VAR_2;

    default:
      FUNC_8 ();
    }

  if (VAR_7)
    return VAR_2;

  return FUNC_2 (FUNC_4 (VAR_0, VAR_4, VAR_8));
}
