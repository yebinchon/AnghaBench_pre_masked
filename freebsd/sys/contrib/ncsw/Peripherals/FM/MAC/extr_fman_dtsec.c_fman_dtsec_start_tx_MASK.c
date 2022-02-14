
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtsec_regs {int tctrl; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

void FUNC_2(struct dtsec_regs *VAR_1)
{

 FUNC_1(FUNC_0(&VAR_1->tctrl) & ~VAR_0, &VAR_1->tctrl);
}
