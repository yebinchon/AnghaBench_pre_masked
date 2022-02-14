
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum vect_var_kind { ____Placeholder_vect_var_kind } vect_var_kind ;


 char const* FUNC_0 (char const*,char const*,int *) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 () ;




__attribute__((used)) static tree
FUNC_3 (tree VAR_0, enum vect_var_kind VAR_1, const char *VAR_2)
{
  const char *VAR_3;
  tree VAR_4;

  switch (VAR_1)
  {
  case 128:
    VAR_3 = "vect_";
    break;
  case 129:
    VAR_3 = "stmp_";
    break;
  case 130:
    VAR_3 = "vect_p";
    break;
  default:
    FUNC_2 ();
  }

  if (VAR_2)
    VAR_4 = FUNC_1 (VAR_0, FUNC_0 (VAR_3, VAR_2, ((void*)0)));
  else
    VAR_4 = FUNC_1 (VAR_0, VAR_3);

  return VAR_4;
}
