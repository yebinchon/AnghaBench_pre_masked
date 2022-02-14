
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nprim; } ;
struct policydb {struct cond_bool_datum** bool_val_to_struct; void** p_bool_val_to_name; TYPE_1__ p_bools; } ;
struct cond_bool_datum {int value; } ;


 int VAR_0 ;

int FUNC_0(void *VAR_1, void *VAR_2, void *VAR_3)
{
 struct policydb *VAR_4;
 struct cond_bool_datum *VAR_5;

 VAR_5 = VAR_2;
 VAR_4 = VAR_3;

 if (!VAR_5->value || VAR_5->value > VAR_4->p_bools.nprim)
  return -VAR_0;

 VAR_4->p_bool_val_to_name[VAR_5->value - 1] = VAR_1;
 VAR_4->bool_val_to_struct[VAR_5->value - 1] = VAR_5;

 return 0;
}
