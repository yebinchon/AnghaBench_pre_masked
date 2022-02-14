
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wi ;
typedef int walk_tree_fn ;
typedef int tree ;
struct walk_stmt_info {int val_only; struct nesting_info* info; int callback; } ;
struct nesting_info {int dummy; } ;


 int FUNC_0 (struct walk_stmt_info*,int ,int) ;
 int FUNC_1 (struct walk_stmt_info*,int *) ;

__attribute__((used)) static void
FUNC_2 (walk_tree_fn VAR_0, struct nesting_info *VAR_1, tree *VAR_2)
{
  struct walk_stmt_info VAR_3;

  FUNC_0 (&VAR_3, 0, sizeof (VAR_3));
  VAR_3.callback = VAR_0;
  VAR_3.info = VAR_1;
  VAR_3.val_only = 1;

  FUNC_1 (&VAR_3, VAR_2);
}
