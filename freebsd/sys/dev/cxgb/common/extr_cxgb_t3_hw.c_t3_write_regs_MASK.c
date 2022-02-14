
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addr_val_pair {int val; scalar_t__ reg_addr; } ;
typedef int adapter_t ;


 int FUNC_0 (int *,scalar_t__,int ) ;

void FUNC_1(adapter_t *VAR_0, const struct addr_val_pair *VAR_1, int VAR_2,
     unsigned int VAR_3)
{
 while (VAR_2--) {
  FUNC_0(VAR_0, VAR_1->reg_addr + VAR_3, VAR_1->val);
  VAR_1++;
 }
}
