
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nprim; } ;
struct policydb {void** p_sens_val_to_name; TYPE_2__ p_levels; } ;
struct level_datum {TYPE_1__* level; int isalias; } ;
struct TYPE_3__ {int sens; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(void *VAR_1, void *VAR_2, void *VAR_3)
{
 struct policydb *VAR_4;
 struct level_datum *VAR_5;

 VAR_5 = VAR_2;
 VAR_4 = VAR_3;

 if (!VAR_5->isalias) {
  if (!VAR_5->level->sens ||
      VAR_5->level->sens > VAR_4->p_levels.nprim)
   return -VAR_0;
  VAR_4->p_sens_val_to_name[VAR_5->level->sens - 1] = VAR_1;
 }

 return 0;
}
