
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tgec_regs {int imask; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

void FUNC_2(struct tgec_regs *VAR_0, uint32_t VAR_1)
{
 FUNC_1(FUNC_0(&VAR_0->imask) & ~VAR_1, &VAR_0->imask);
}
