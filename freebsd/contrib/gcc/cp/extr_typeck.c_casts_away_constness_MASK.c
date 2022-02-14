
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static bool
FUNC_8 (tree VAR_2, tree VAR_3)
{
  if (FUNC_0 (VAR_3) == VAR_1)
    {






      VAR_2 = (FUNC_0 (VAR_2) == VAR_1 ? FUNC_1 (VAR_2) : VAR_2);
      return FUNC_8 (FUNC_5 (VAR_2),
       FUNC_5 (FUNC_1 (VAR_3)));
    }

  if (FUNC_3 (VAR_2) && FUNC_3 (VAR_3))







    return FUNC_8
      (FUNC_5 (FUNC_4 (VAR_2)),
       FUNC_5 (FUNC_4 (VAR_3)));



  if (FUNC_0 (VAR_2) != VAR_0
      || FUNC_0 (VAR_3) != VAR_0)
    return 0;


  VAR_2 = FUNC_2 (VAR_2);
  VAR_3 = FUNC_2 (VAR_3);
  FUNC_7 (&VAR_2, &VAR_3);
  if (!FUNC_6 (VAR_3, VAR_2))
    return 1;

  return 0;
}
