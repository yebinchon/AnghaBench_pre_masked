
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reg_entry {int type; int number; TYPE_1__* neon; } ;
typedef enum arm_reg_type { ____Placeholder_arm_reg_type } arm_reg_type ;
struct TYPE_2__ {int defined; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char*,struct reg_entry*,int) ;
 struct reg_entry* FUNC_1 (char**) ;

__attribute__((used)) static int
FUNC_2 (char **VAR_2, enum arm_reg_type VAR_3)
{
  char *VAR_4 = *VAR_2;
  struct reg_entry *VAR_5 = FUNC_1 (VAR_2);
  int VAR_6;


  if (VAR_5 && VAR_5->neon && (VAR_5->neon->defined & VAR_1))
    return VAR_0;

  if (VAR_5 && VAR_5->type == VAR_3)
    return VAR_5->number;

  if ((VAR_6 = FUNC_0 (VAR_2, VAR_4, VAR_5, VAR_3)) != VAR_0)
    return VAR_6;

  *VAR_2 = VAR_4;
  return VAR_0;
}
