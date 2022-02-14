
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int REAL_VALUE_TYPE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int FUNC_7 (int ,int ) ;
 int VAR_3 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,int ,int *) ;
 int FUNC_10 (int ,int ,int ) ;

__attribute__((used)) static tree
FUNC_11 (tree VAR_4, tree VAR_5)
{
  tree VAR_6;

  if (! FUNC_10 (VAR_5, VAR_1, VAR_2))
    return 0;


  VAR_6 = FUNC_5 (VAR_5);
  if (FUNC_1 (VAR_6) == VAR_0 && ! FUNC_2 (VAR_6))
    {
      REAL_VALUE_TYPE VAR_7;

      VAR_7 = FUNC_3 (VAR_6);
      if (! FUNC_0 (VAR_7) || ! VAR_3)
 {
   tree VAR_8 = FUNC_4 (FUNC_4 (VAR_4));
   REAL_VALUE_TYPE VAR_9;

   FUNC_9 (&VAR_9, FUNC_6 (VAR_8), &VAR_7);
   return FUNC_7 (VAR_8, VAR_9);
 }
    }

  return FUNC_8 (VAR_4, VAR_5);
}
