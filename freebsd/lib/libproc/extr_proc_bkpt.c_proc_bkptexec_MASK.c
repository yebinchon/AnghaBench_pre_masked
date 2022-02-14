
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_handle {int dummy; } ;
typedef int caddr_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct proc_handle*,unsigned long,unsigned long) ;
 int FUNC_4 (unsigned long*) ;
 scalar_t__ FUNC_5 (struct proc_handle*,unsigned long,unsigned long*) ;
 int FUNC_6 (struct proc_handle*) ;
 int FUNC_7 (struct proc_handle*) ;
 scalar_t__ FUNC_8 (struct proc_handle*,int ,unsigned long*) ;
 int FUNC_9 (struct proc_handle*,int ,unsigned long) ;
 int FUNC_10 (struct proc_handle*) ;
 scalar_t__ FUNC_11 (int ,int ,int ,int ) ;

int
FUNC_12(struct proc_handle *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 if (FUNC_8(VAR_2, VAR_1, &VAR_4) < 0) {
  FUNC_0("ERROR: couldn't get PC register");
  return (-1);
 }
 FUNC_4(&VAR_4);
 if (FUNC_3(VAR_2, VAR_4, VAR_3) < 0) {
  FUNC_0("ERROR: couldn't delete breakpoint");
  return (-1);
 }




 FUNC_9(VAR_2, VAR_1, VAR_4);
 if (FUNC_11(VAR_0, FUNC_6(VAR_2), (caddr_t)1, 0) < 0) {
  FUNC_0("ERROR: ptrace step failed");
  return (-1);
 }
 FUNC_10(VAR_2);
 VAR_6 = FUNC_7(VAR_2);
 if (!FUNC_1(VAR_6)) {
  FUNC_0("ERROR: don't know why process stopped");
  return (-1);
 }




 if (FUNC_5(VAR_2, VAR_4, &VAR_5) < 0) {
  FUNC_0("ERROR: couldn't restore breakpoint");
  return (-1);
 }
 FUNC_2(VAR_5 == VAR_3);

 return (0);
}
