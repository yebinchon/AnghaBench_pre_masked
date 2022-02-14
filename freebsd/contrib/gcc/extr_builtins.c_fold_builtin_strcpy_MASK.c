
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ) ;
 int * VAR_5 ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ,int ) ;

tree
FUNC_13 (tree VAR_7, tree VAR_8, tree VAR_9)
{
  tree VAR_10, VAR_11, VAR_12;

  if (!FUNC_12 (VAR_8,
    VAR_3, VAR_3, VAR_4))
    return 0;

  VAR_10 = FUNC_3 (VAR_8);
  VAR_11 = FUNC_3 (FUNC_0 (VAR_8));


  if (FUNC_8 (VAR_11, VAR_10, 0))
    return FUNC_7 (FUNC_2 (FUNC_2 (VAR_7)), VAR_10);

  if (VAR_6)
    return 0;

  VAR_12 = VAR_5[VAR_0];
  if (!VAR_12)
    return 0;

  if (!VAR_9)
    {
      VAR_9 = FUNC_6 (VAR_11, 1);
      if (! VAR_9 || FUNC_1 (VAR_9))
 return 0;
    }

  VAR_9 = FUNC_9 (VAR_2, VAR_9, FUNC_10 (1));
  VAR_8 = FUNC_5 (VAR_1, VAR_9);
  VAR_8 = FUNC_11 (VAR_1, VAR_11, VAR_8);
  VAR_8 = FUNC_11 (VAR_1, VAR_10, VAR_8);
  return FUNC_7 (FUNC_2 (FUNC_2 (VAR_7)),
         FUNC_4 (VAR_12, VAR_8));
}
