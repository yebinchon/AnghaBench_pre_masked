
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selinux_kernel_status {int policyload; int deny_unknown; int sequence; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct selinux_kernel_status* FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 () ;

void FUNC_5(int VAR_2)
{
 struct selinux_kernel_status *VAR_3;

 FUNC_0(&VAR_0);
 if (VAR_1) {
  VAR_3 = FUNC_2(VAR_1);

  VAR_3->sequence++;
  FUNC_4();

  VAR_3->policyload = VAR_2;
  VAR_3->deny_unknown = !FUNC_3();

  FUNC_4();
  VAR_3->sequence++;
 }
 FUNC_1(&VAR_0);
}
