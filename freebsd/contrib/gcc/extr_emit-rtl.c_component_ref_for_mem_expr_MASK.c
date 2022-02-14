
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (scalar_t__,int ,int ,int ,int ) ;

__attribute__((used)) static tree
FUNC_5 (tree VAR_7)
{
  tree VAR_8 = FUNC_2 (VAR_7, 0);

  if (FUNC_1 (VAR_8) == VAR_0)
    VAR_8 = FUNC_5 (VAR_8);
  else
    {


      while (FUNC_1 (VAR_8) == VAR_3 || FUNC_1 (VAR_8) == VAR_1
      || FUNC_1 (VAR_8) == VAR_2
      || FUNC_1 (VAR_8) == VAR_6
      || FUNC_1 (VAR_8) == VAR_5)
 VAR_8 = FUNC_2 (VAR_8, 0);

      if (! FUNC_0 (VAR_8))
 VAR_8 = VAR_4;
    }

  if (VAR_8 == FUNC_2 (VAR_7, 0))
    return VAR_7;
  else
    return FUNC_4 (VAR_0, FUNC_3 (VAR_7), VAR_8,
     FUNC_2 (VAR_7, 1), VAR_4);
}
