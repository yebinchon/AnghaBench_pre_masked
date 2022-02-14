
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg {unsigned long elr; unsigned long r_rip; unsigned long r_pc; unsigned long r_eip; unsigned long* r_regs; unsigned long pc; unsigned long sepc; unsigned long sp; unsigned long r_rsp; unsigned long r_sp; unsigned long r_esp; unsigned long* fixreg; } ;
struct proc_handle {scalar_t__ status; } ;
typedef int regs ;
typedef int proc_reg_t ;
typedef int caddr_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;


 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct reg*,int ,int) ;
 int FUNC_2 (struct proc_handle*) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;

int
FUNC_4(struct proc_handle *VAR_8, proc_reg_t VAR_9, unsigned long *VAR_10)
{
 struct reg VAR_11;

 if (VAR_8->status == VAR_2 || VAR_8->status == VAR_4 ||
     VAR_8->status == VAR_3) {
  VAR_7 = VAR_0;
  return (-1);
 }
 FUNC_1(&VAR_11, 0, sizeof(VAR_11));
 if (FUNC_3(VAR_5, FUNC_2(VAR_8), (caddr_t)&VAR_11, 0) < 0)
  return (-1);
 switch (VAR_9) {
 case 129:



  *VAR_10 = VAR_11.r_rip;
  break;
 case 128:



  *VAR_10 = VAR_11.r_rsp;
  break;
 default:
  FUNC_0("ERROR: no support for reg number %d", VAR_9);
  return (-1);
 }

 return (0);
}
