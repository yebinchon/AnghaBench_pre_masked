
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nprim; } ;
struct policydb {void** p_common_val_to_name; TYPE_1__ p_commons; } ;
struct common_datum {int value; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(void *VAR_1, void *VAR_2, void *VAR_3)
{
 struct policydb *VAR_4;
 struct common_datum *VAR_5;

 VAR_5 = VAR_2;
 VAR_4 = VAR_3;
 if (!VAR_5->value || VAR_5->value > VAR_4->p_commons.nprim)
  return -VAR_0;
 VAR_4->p_common_val_to_name[VAR_5->value - 1] = VAR_1;
 return 0;
}
