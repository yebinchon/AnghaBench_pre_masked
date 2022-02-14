
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selinux_kernel_status {int enforcing; int sequence; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct selinux_kernel_status* FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 () ;

void FUNC_4(int VAR_2)
{
 struct selinux_kernel_status *VAR_3;

 FUNC_0(&VAR_0);
 if (VAR_1) {
  VAR_3 = FUNC_2(VAR_1);

  VAR_3->sequence++;
  FUNC_3();

  VAR_3->enforcing = VAR_2;

  FUNC_3();
  VAR_3->sequence++;
 }
 FUNC_1(&VAR_0);
}
