
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tgec_regs {int hashtable_ctrl; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;

void FUNC_1(struct tgec_regs *VAR_1)
{
 uint32_t VAR_2;
 for (VAR_2 = 0; VAR_2 < 512; VAR_2++)
  FUNC_0(VAR_2 & ~VAR_0, &VAR_1->hashtable_ctrl);
}
