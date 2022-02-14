
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_stmt_iterator ;
typedef int tree ;
struct walk_stmt_info {int tsi; struct nesting_info* info; } ;
struct var_map_elt {int new; int old; } ;
struct nesting_info {int var_map; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_4 (int ,struct var_map_elt*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int VAR_4 ;

__attribute__((used)) static tree
FUNC_9 (tree *VAR_5, int *VAR_6, void *VAR_7)
{
  struct walk_stmt_info *VAR_8 = (struct walk_stmt_info *) VAR_7;
  struct nesting_info *VAR_9 = VAR_8->info;
  tree VAR_10 = *VAR_5, VAR_11, VAR_12, VAR_13;
  struct var_map_elt *VAR_14, VAR_15;
  tree_stmt_iterator VAR_16;

  *VAR_6 = 0;
  if (FUNC_1 (VAR_10) != VAR_1)
    return VAR_2;
  VAR_11 = FUNC_0 (VAR_10);

  VAR_15.old = VAR_11;
  VAR_14 = (struct var_map_elt *) FUNC_4 (VAR_9->var_map, &VAR_15);
  if (!VAR_14)
    return VAR_2;
  VAR_12 = VAR_14->new;



  VAR_16 = VAR_8->tsi;
  FUNC_7 (&VAR_16);
  if (FUNC_5 (VAR_16) || FUNC_2 (FUNC_8 (VAR_16)))
    {
      VAR_13 = FUNC_3 (VAR_0, VAR_4, VAR_11);
      FUNC_6 (&VAR_8->tsi, VAR_13, VAR_3);
    }
  VAR_13 = FUNC_3 (VAR_1, VAR_4, VAR_12);
  FUNC_6 (&VAR_8->tsi, VAR_13, VAR_3);

  return VAR_2;
}
