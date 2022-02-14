
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (scalar_t__,int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_6 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static tree
FUNC_9 (tree VAR_7, tree VAR_8)
{
  tree VAR_9 = FUNC_4 (VAR_7);
  tree VAR_10, VAR_11, VAR_12;

  if (FUNC_0 (VAR_8) == VAR_1)
    {
      VAR_10 = FUNC_2 (VAR_8, 0);
      VAR_11 = FUNC_2 (VAR_8, 1);
    }
  else if (FUNC_0 (VAR_8) == VAR_0)
    {
      VAR_10 = FUNC_3 (VAR_8);
      VAR_11 = FUNC_1 (VAR_8);
    }
  else
    {
      VAR_8 = FUNC_8 (VAR_8);
      VAR_10 = FUNC_5 (VAR_5, VAR_9, VAR_8);
      VAR_11 = FUNC_5 (VAR_2, VAR_9, VAR_8);
    }

  VAR_10 = FUNC_8 (VAR_10);
  VAR_11 = FUNC_8 (VAR_11);
  VAR_12 = FUNC_6 (VAR_4, VAR_9,
       FUNC_6 (VAR_3, VAR_9, VAR_10, VAR_10),
       FUNC_6 (VAR_3, VAR_9, VAR_11, VAR_11));
  return FUNC_6 (VAR_1, VAR_7, VAR_12,
        FUNC_7 (VAR_9, VAR_6));
}
