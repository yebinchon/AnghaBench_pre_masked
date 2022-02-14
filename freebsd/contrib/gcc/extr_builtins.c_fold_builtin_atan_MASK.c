
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int REAL_VALUE_TYPE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;
 int FUNC_5 (int *,int ,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static tree
FUNC_9 (tree VAR_4, tree VAR_5)
{

  tree VAR_6 = FUNC_2 (VAR_4);

  if (!FUNC_8 (VAR_4, VAR_1, VAR_2))
    return VAR_0;


  if (FUNC_7 (VAR_6))
    return VAR_6;


  if (FUNC_6 (VAR_6))
    {
      REAL_VALUE_TYPE VAR_7;

      FUNC_5 (&VAR_7, FUNC_3 (VAR_5), &VAR_3);
      FUNC_1 (&VAR_7, FUNC_0 (&VAR_7) - 2);
      return FUNC_4 (VAR_5, VAR_7);
    }

  return VAR_0;
}
