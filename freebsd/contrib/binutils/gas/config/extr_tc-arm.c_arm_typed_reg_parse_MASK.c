
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neon_type_el {int dummy; } ;
struct neon_typed_alias {int defined; struct neon_type_el eltype; } ;
typedef enum arm_reg_type { ____Placeholder_arm_reg_type } arm_reg_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char**,int,int*,struct neon_typed_alias*) ;

__attribute__((used)) static int
FUNC_3 (char **VAR_2, enum arm_reg_type VAR_3,
                     enum arm_reg_type *VAR_4, struct neon_type_el *VAR_5)
{
  struct neon_typed_alias VAR_6;
  char *VAR_7 = *VAR_2;
  int VAR_8 = FUNC_2 (&VAR_7, VAR_3, VAR_4, &VAR_6);

  if (VAR_8 == VAR_0)
    return VAR_0;


  if ((VAR_6.defined & VAR_1) != 0)
    {
      FUNC_1 (FUNC_0("register operand expected, but got scalar"));
      return VAR_0;
    }

  if (VAR_5)
    *VAR_5 = VAR_6.eltype;

  *VAR_2 = VAR_7;

  return VAR_8;
}
