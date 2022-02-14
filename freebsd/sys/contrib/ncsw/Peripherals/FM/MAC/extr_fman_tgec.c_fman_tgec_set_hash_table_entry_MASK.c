
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tgec_regs {int hashtable_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *) ;

void FUNC_1(struct tgec_regs *VAR_3, uint32_t VAR_4)
{
    uint32_t VAR_5 = (VAR_4 >> VAR_2) & VAR_0;
 FUNC_0(VAR_5 | VAR_1, &VAR_3->hashtable_ctrl);
}
