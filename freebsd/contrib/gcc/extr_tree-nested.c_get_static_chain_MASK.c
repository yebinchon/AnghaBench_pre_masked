
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_stmt_iterator ;
typedef scalar_t__ tree ;
struct nesting_info {scalar_t__ context; struct nesting_info* outer; int frame_decl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (struct nesting_info*) ;
 scalar_t__ FUNC_5 (struct nesting_info*) ;
 scalar_t__ FUNC_6 (struct nesting_info*,scalar_t__,int *) ;

__attribute__((used)) static tree
FUNC_7 (struct nesting_info *VAR_3, tree VAR_4,
    tree_stmt_iterator *VAR_5)
{
  struct nesting_info *VAR_6;
  tree VAR_7;

  if (VAR_3->context == VAR_4)
    {
      VAR_7 = FUNC_3 (VAR_3->frame_decl, VAR_4);
    }
  else
    {
      VAR_7 = FUNC_4 (VAR_3);

      for (VAR_6 = VAR_3->outer; VAR_6->context != VAR_4; VAR_6 = VAR_6->outer)
 {
   tree VAR_8 = FUNC_5 (VAR_6);

   VAR_7 = FUNC_1 (VAR_1, FUNC_0 (FUNC_0 (VAR_7)), VAR_7);
   VAR_7 = FUNC_2 (VAR_0, FUNC_0 (VAR_8), VAR_7, VAR_8, VAR_2);
   VAR_7 = FUNC_6 (VAR_3, VAR_7, VAR_5);
 }
    }

  return VAR_7;
}
