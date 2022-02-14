
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int block_stmt_iterator ;






 scalar_t__ FUNC_0 (int) ;

 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

 int VAR_2 ;

 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *,int ,int ,int ,int ,int ,int) ;
 int FUNC_6 (int *,int ,int ,int ,int ,int) ;
 int FUNC_7 (int *,int ,int ,int ,int ,int ,int) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static tree
FUNC_8 (block_stmt_iterator *VAR_8, tree VAR_9, tree VAR_10,
    tree VAR_11, enum tree_code VAR_12)
{
  enum machine_mode VAR_13 = FUNC_3 (VAR_10);




  if (FUNC_0 (VAR_13) != VAR_1
      && FUNC_0 (VAR_13) != VAR_0)
    switch (VAR_12)
      {
      case 128:
      case 130:
        if (!FUNC_4 (VAR_9))
          return FUNC_5 (VAR_8, VAR_3, VAR_5, VAR_9,
                   FUNC_2 (VAR_11, 0),
      FUNC_2 (VAR_11, 1), VAR_12);
 break;

      case 129:
        if (!FUNC_4 (VAR_9))
          return FUNC_5 (VAR_8, VAR_6, VAR_4, VAR_9,
                   FUNC_2 (VAR_11, 0),
      VAR_2, VAR_12);
 break;

      case 134:
      case 133:
      case 131:
        return FUNC_6 (VAR_8, VAR_3, VAR_9,
                 FUNC_2 (VAR_11, 0),
           FUNC_2 (VAR_11, 1), VAR_12);

      case 132:
        return FUNC_6 (VAR_8, VAR_6, VAR_9,
                 FUNC_2 (VAR_11, 0),
           VAR_2, VAR_12);

      default:
 break;
      }

  if (FUNC_1 (VAR_12) == VAR_7)
    return FUNC_7 (VAR_8, VAR_6, VAR_9, VAR_10,
        FUNC_2 (VAR_11, 0),
        VAR_2, VAR_12);
  else
    return FUNC_7 (VAR_8, VAR_3, VAR_9, VAR_10,
        FUNC_2 (VAR_11, 0),
        FUNC_2 (VAR_11, 1), VAR_12);
}
