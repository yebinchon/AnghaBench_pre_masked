
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_ucred; } ;
struct reboot_args {int opt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct thread*,int ) ;

int
FUNC_4(struct thread *VAR_2, struct reboot_args *VAR_3)
{
 int VAR_4;

 VAR_4 = 0;



 if (VAR_4 == 0)
  VAR_4 = FUNC_3(VAR_2, VAR_0);
 if (VAR_4 == 0) {
  if (VAR_3->opt & VAR_1)
   VAR_4 = FUNC_1();
  else
   FUNC_0(VAR_3->opt);
 }
 return (VAR_4);
}
