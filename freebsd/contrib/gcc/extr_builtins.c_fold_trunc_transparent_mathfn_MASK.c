
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum built_in_function { ____Placeholder_built_in_function } built_in_function ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ) ;

__attribute__((used)) static tree
FUNC_12 (tree VAR_5, tree VAR_6)
{
  enum built_in_function VAR_7 = FUNC_0 (VAR_5);
  tree VAR_8;

  if (! FUNC_11 (VAR_6, VAR_1, VAR_2))
    return 0;

  VAR_8 = FUNC_2 (VAR_6);

  if (VAR_7 == FUNC_6 (VAR_8))
    return VAR_8;



  if (! VAR_3 && FUNC_8 (VAR_8))
    return VAR_8;

  if (VAR_4)
    {
      tree VAR_9 = FUNC_10 (VAR_8);
      tree VAR_10 = FUNC_1 (FUNC_1 (VAR_5));
      tree VAR_11 = FUNC_1 (VAR_9);
      tree VAR_12;

      if (FUNC_3 (VAR_11) < FUNC_3 (VAR_10)
   && (VAR_12 = FUNC_9 (VAR_11, VAR_7)))
 {
   VAR_6 =
     FUNC_5 (VAR_0, FUNC_7 (VAR_11, VAR_9));
   return FUNC_7 (VAR_10,
          FUNC_4 (VAR_12, VAR_6));
 }
    }
  return 0;
}
