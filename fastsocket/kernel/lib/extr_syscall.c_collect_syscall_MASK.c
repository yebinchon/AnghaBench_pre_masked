
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct pt_regs*) ;
 int FUNC_1 (struct task_struct*,struct pt_regs*,int ,unsigned int,unsigned long*) ;
 long FUNC_2 (struct task_struct*,struct pt_regs*) ;
 struct pt_regs* FUNC_3 (struct task_struct*) ;
 scalar_t__ FUNC_4 (int) ;
 unsigned long FUNC_5 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_6(struct task_struct *VAR_1, long *VAR_2,
      unsigned long VAR_3[6], unsigned int VAR_4,
      unsigned long *VAR_5, unsigned long *VAR_6)
{
 struct pt_regs *VAR_7 = FUNC_3(VAR_1);
 if (FUNC_4(!VAR_7))
  return -VAR_0;

 *VAR_5 = FUNC_5(VAR_7);
 *VAR_6 = FUNC_0(VAR_7);

 *VAR_2 = FUNC_2(VAR_1, VAR_7);
 if (*VAR_2 != -1L && VAR_4 > 0)
  FUNC_1(VAR_1, VAR_7, 0, VAR_4, VAR_3);

 return 0;
}
