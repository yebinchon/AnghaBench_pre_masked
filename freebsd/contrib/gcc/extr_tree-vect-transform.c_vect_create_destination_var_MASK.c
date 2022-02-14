
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum vect_var_kind { ____Placeholder_vect_var_kind } vect_var_kind ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 char* FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int,char const*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static tree
FUNC_6 (tree VAR_3, tree VAR_4)
{
  tree VAR_5;
  const char *VAR_6;
  tree VAR_7;
  enum vect_var_kind VAR_8;

  VAR_8 = VAR_4 ? VAR_2 : VAR_1;
  VAR_7 = VAR_4 ? VAR_4 : FUNC_1 (VAR_3);

  FUNC_3 (FUNC_0 (VAR_3) == VAR_0);

  VAR_6 = FUNC_4 (VAR_3);
  if (!VAR_6)
    VAR_6 = "var_";
  VAR_5 = FUNC_5 (VAR_7, VAR_2, VAR_6);
  FUNC_2 (VAR_5);

  return VAR_5;
}
