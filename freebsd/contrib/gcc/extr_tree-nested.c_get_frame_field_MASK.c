
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_stmt_iterator ;
typedef scalar_t__ tree ;
struct nesting_info {scalar_t__ context; scalar_t__ frame_decl; struct nesting_info* outer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (struct nesting_info*) ;
 scalar_t__ FUNC_4 (struct nesting_info*) ;
 int FUNC_5 (struct nesting_info*) ;
 scalar_t__ FUNC_6 (struct nesting_info*,scalar_t__,int *) ;

__attribute__((used)) static tree
FUNC_7 (struct nesting_info *VAR_3, tree VAR_4,
   tree VAR_5, tree_stmt_iterator *VAR_6)
{
  struct nesting_info *VAR_7;
  tree VAR_8;

  if (VAR_3->context == VAR_4)
    {

      (void) FUNC_5 (VAR_3);
      VAR_8 = VAR_3->frame_decl;
    }
  else
    {
      VAR_8 = FUNC_3 (VAR_3);

      for (VAR_7 = VAR_3->outer; VAR_7->context != VAR_4; VAR_7 = VAR_7->outer)
 {
   tree VAR_9 = FUNC_4 (VAR_7);

   VAR_8 = FUNC_1 (VAR_1, FUNC_0 (FUNC_0 (VAR_8)), VAR_8);
   VAR_8 = FUNC_2 (VAR_0, FUNC_0 (VAR_9), VAR_8, VAR_9, VAR_2);
   VAR_8 = FUNC_6 (VAR_3, VAR_8, VAR_6);
 }

      VAR_8 = FUNC_1 (VAR_1, FUNC_0 (FUNC_0 (VAR_8)), VAR_8);
    }

  VAR_8 = FUNC_2 (VAR_0, FUNC_0 (VAR_5), VAR_8, VAR_5, VAR_2);
  return VAR_8;
}
