
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sport_device {TYPE_1__* regs; } ;
struct TYPE_2__ {int tcr1; int rcr1; unsigned int rcr2; unsigned int rclkdiv; unsigned int rfsdiv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;

int FUNC_1(struct sport_device *VAR_3, unsigned int VAR_4,
  unsigned int VAR_5, unsigned int VAR_6, unsigned int VAR_7)
{
 if ((VAR_3->regs->tcr1 & VAR_2) || (VAR_3->regs->rcr1 & VAR_1))
  return -VAR_0;

 VAR_3->regs->rcr1 = VAR_4;
 VAR_3->regs->rcr2 = VAR_5;
 VAR_3->regs->rclkdiv = VAR_6;
 VAR_3->regs->rfsdiv = VAR_7;

 FUNC_0();

 return 0;
}
