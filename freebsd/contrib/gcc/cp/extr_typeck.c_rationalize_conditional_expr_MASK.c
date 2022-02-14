
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int ,int ,scalar_t__,int ,scalar_t__,int *) ;
 int FUNC_6 (int) ;

__attribute__((used)) static tree
FUNC_7 (enum tree_code VAR_4, tree VAR_5)
{



  if (FUNC_0 (VAR_5) == VAR_3 || FUNC_0 (VAR_5) == VAR_2)
    {
      tree VAR_6 = FUNC_1 (VAR_5, 0);
      tree VAR_7 = FUNC_1 (VAR_5, 1);


      FUNC_6 (!FUNC_2 (VAR_6)
    && !FUNC_2 (VAR_7));
      return
 FUNC_3 (FUNC_5 ((FUNC_0 (VAR_5) == VAR_3
          ? VAR_1 : VAR_0),
         VAR_6, FUNC_0 (VAR_6),
         VAR_7, FUNC_0 (VAR_7),
                          ((void*)0)),
       FUNC_4 (VAR_4, VAR_6, 0),
       FUNC_4 (VAR_4, VAR_7, 0));
    }

  return
    FUNC_3 (FUNC_1 (VAR_5, 0),
       FUNC_4 (VAR_4, FUNC_1 (VAR_5, 1), 0),
       FUNC_4 (VAR_4, FUNC_1 (VAR_5, 2), 0));
}
