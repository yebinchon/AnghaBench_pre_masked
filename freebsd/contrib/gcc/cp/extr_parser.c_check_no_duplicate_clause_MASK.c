
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static void
FUNC_3 (tree VAR_0, enum tree_code VAR_1, const char *VAR_2)
{
  tree VAR_3;

  for (VAR_3 = VAR_0; VAR_3 ; VAR_3 = FUNC_0 (VAR_3))
    if (FUNC_1 (VAR_3) == VAR_1)
      {
 FUNC_2 ("too many %qs clauses", VAR_2);
 break;
      }
}
