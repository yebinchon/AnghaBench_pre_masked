
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef int c_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ) ;
 scalar_t__ FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int ,char*) ;

__attribute__((used)) static tree
FUNC_3 (c_parser *VAR_2, enum tree_code VAR_3, tree VAR_4)
{
  if (FUNC_1 (VAR_2, VAR_1, "expected %<(%>"))
    {
      VAR_4 = FUNC_0 (VAR_2, VAR_3, VAR_4);
      FUNC_2 (VAR_2, VAR_0, "expected %<)%>");
    }
  return VAR_4;
}
