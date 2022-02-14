
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
struct walk_stmt_info {int tsi; scalar_t__ val_only; scalar_t__ is_lhs; } ;
typedef enum gimplify_status { ____Placeholder_gimplify_status } gimplify_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int **,int **,int *,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_3 (tree *VAR_7, struct walk_stmt_info *VAR_8)
{
  enum gimplify_status VAR_9;
  tree VAR_10 = ((void*)0);

  if (VAR_8->is_lhs)
    VAR_9 = FUNC_1 (VAR_7, &VAR_10, ((void*)0), VAR_5, VAR_2);
  else if (VAR_8->val_only)
    VAR_9 = FUNC_1 (VAR_7, &VAR_10, ((void*)0), VAR_6, VAR_3);
  else
    VAR_9 = FUNC_1 (VAR_7, &VAR_10, ((void*)0), VAR_4, VAR_3);
  FUNC_0 (VAR_9 == VAR_0);

  if (VAR_10)
    FUNC_2 (&VAR_8->tsi, VAR_10, VAR_1);
}
