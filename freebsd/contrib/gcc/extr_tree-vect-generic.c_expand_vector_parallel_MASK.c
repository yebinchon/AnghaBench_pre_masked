
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int (* elem_op_func ) (int *,int ,int ,int ,int ,int ,int) ;
typedef int block_stmt_iterator ;
struct TYPE_3__ {int (* type_for_mode ) (int,int) ;} ;
struct TYPE_4__ {TYPE_1__ types; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int (*) (int *,int ,int ,int ,int ,int ,int),int ,int ,int ,int ,int) ;
 int FUNC_6 (int *,int ,int ) ;
 TYPE_2__ VAR_3 ;
 int FUNC_7 (int,int ,int ) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int ,int) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static tree
FUNC_10 (block_stmt_iterator *VAR_5, elem_op_func VAR_6, tree VAR_7,
   tree VAR_8, tree VAR_9,
   enum tree_code VAR_10)
{
  tree VAR_11, VAR_12;
  enum machine_mode VAR_13;
  int VAR_14 = FUNC_9 (FUNC_3 (VAR_7), 1) / VAR_2;





  if (FUNC_1 (FUNC_0 (VAR_7)) == VAR_4)
     return FUNC_5 (VAR_5, VAR_6,
         VAR_7, FUNC_0 (VAR_7),
         VAR_8, VAR_9, VAR_10);
  else if (VAR_14 > 1)
    {
      tree VAR_15 = FUNC_4 (VAR_14);
      VAR_11 = FUNC_5 (VAR_5, VAR_6,
            VAR_15, FUNC_0 (VAR_15),
     VAR_8, VAR_9, VAR_10);
      VAR_11 = FUNC_6 (VAR_5, VAR_15, VAR_11);
    }
  else
    {

      VAR_13 = FUNC_7 (FUNC_9 (FUNC_2 (VAR_7), 1), VAR_0, 0);
      VAR_12 = VAR_3.types.type_for_mode (VAR_13, 1);
      VAR_11 = VAR_6 (VAR_5, VAR_12, VAR_8, VAR_9, VAR_1, VAR_1, VAR_10);
    }

  return VAR_11;
}
