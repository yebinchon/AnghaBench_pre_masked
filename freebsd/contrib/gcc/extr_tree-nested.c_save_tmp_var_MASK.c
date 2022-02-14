
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_stmt_iterator ;
typedef int tree ;
struct nesting_info {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct nesting_info*,int ,int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static tree
FUNC_7 (struct nesting_info *VAR_2, tree VAR_3,
       tree_stmt_iterator *VAR_4)
{
  tree VAR_5, VAR_6;

  VAR_5 = FUNC_4 (VAR_2, FUNC_2 (VAR_3), ((void*)0));
  VAR_6 = FUNC_3 (VAR_0, FUNC_2 (VAR_5), VAR_3, VAR_5);
  FUNC_1 (VAR_6, FUNC_0 (FUNC_6 (*VAR_4)));
  FUNC_5 (VAR_4, VAR_6, VAR_1);

  return VAR_5;
}
