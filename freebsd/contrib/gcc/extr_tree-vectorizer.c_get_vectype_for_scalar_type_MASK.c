
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (int ) ;

tree
FUNC_8 (tree VAR_5)
{
  enum machine_mode VAR_6 = FUNC_2 (VAR_5);
  int VAR_7 = FUNC_0 (VAR_6);
  int VAR_8;
  tree VAR_9;

  if (VAR_7 == 0 || VAR_7 >= VAR_3)
    return VAR_0;



  VAR_8 = VAR_3 / VAR_7;

  VAR_9 = FUNC_4 (VAR_5, VAR_8);
  if (FUNC_7 (VAR_1))
    {
      FUNC_5 (VAR_4, "get vectype with %d units of type ", VAR_8);
      FUNC_6 (VAR_4, VAR_5, VAR_2);
    }

  if (!VAR_9)
    return VAR_0;

  if (FUNC_7 (VAR_1))
    {
      FUNC_5 (VAR_4, "vectype: ");
      FUNC_6 (VAR_4, VAR_9, VAR_2);
    }

  if (!FUNC_3 (FUNC_2 (VAR_9))
      && !FUNC_1 (FUNC_2 (VAR_9)))
    {
      if (FUNC_7 (VAR_1))
        FUNC_5 (VAR_4, "mode not supported by target.");
      return VAR_0;
    }

  return VAR_9;
}
