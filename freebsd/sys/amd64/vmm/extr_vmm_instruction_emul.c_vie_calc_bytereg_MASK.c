
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vie {size_t reg; int rex_present; } ;
typedef enum vm_reg_name { ____Placeholder_vm_reg_name } vm_reg_name ;


 int* VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct vie *VAR_1, enum vm_reg_name *VAR_2, int *VAR_3)
{
 *VAR_3 = 0;
 *VAR_2 = VAR_0[VAR_1->reg];
 if (!VAR_1->rex_present) {
  if (VAR_1->reg & 0x4) {
   *VAR_3 = 1;
   *VAR_2 = VAR_0[VAR_1->reg & 0x3];
  }
 }
}
