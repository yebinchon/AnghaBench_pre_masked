
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct role_datum {int value; scalar_t__ bounds; } ;
struct TYPE_2__ {int nprim; } ;
struct policydb {struct role_datum** role_val_to_struct; void** p_role_val_to_name; TYPE_1__ p_roles; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(void *VAR_1, void *VAR_2, void *VAR_3)
{
 struct policydb *VAR_4;
 struct role_datum *VAR_5;

 VAR_5 = VAR_2;
 VAR_4 = VAR_3;
 if (!VAR_5->value
     || VAR_5->value > VAR_4->p_roles.nprim
     || VAR_5->bounds > VAR_4->p_roles.nprim)
  return -VAR_0;
 VAR_4->p_role_val_to_name[VAR_5->value - 1] = VAR_1;
 VAR_4->role_val_to_struct[VAR_5->value - 1] = VAR_5;
 return 0;
}
