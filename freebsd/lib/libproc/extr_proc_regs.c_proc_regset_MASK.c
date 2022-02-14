
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg {unsigned long elr; unsigned long r_rip; unsigned long r_pc; unsigned long r_eip; unsigned long* r_regs; unsigned long pc; unsigned long sepc; unsigned long sp; unsigned long r_rsp; unsigned long r_sp; unsigned long r_esp; unsigned long* fixreg; } ;
struct proc_handle {scalar_t__ status; } ;
typedef int proc_reg_t ;
typedef int caddr_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct proc_handle*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;

int
FUNC_3(struct proc_handle *VAR_9, proc_reg_t VAR_10, unsigned long VAR_11)
{
 struct reg VAR_12;

 if (VAR_9->status == VAR_2 || VAR_9->status == VAR_4 ||
     VAR_9->status == VAR_3) {
  VAR_8 = VAR_0;
  return (-1);
 }
 if (FUNC_2(VAR_5, FUNC_1(VAR_9), (caddr_t)&VAR_12, 0) < 0)
  return (-1);
 switch (VAR_10) {
 case 129:



  VAR_12.r_rip = VAR_11;
  break;
 case 128:



  VAR_12.r_rsp = VAR_11;
  break;
 default:
  FUNC_0("ERROR: no support for reg number %d", VAR_10);
  return (-1);
 }
 if (FUNC_2(VAR_6, FUNC_1(VAR_9), (caddr_t)&VAR_12, 0) < 0)
  return (-1);

 return (0);
}
