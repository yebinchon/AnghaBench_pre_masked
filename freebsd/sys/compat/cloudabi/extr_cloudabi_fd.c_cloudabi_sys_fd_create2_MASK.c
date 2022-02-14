
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int* td_retval; } ;
struct cloudabi_sys_fd_create2_args {int type; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct thread*,int ,int,int ,int*) ;

int
FUNC_1(struct thread *VAR_4,
    struct cloudabi_sys_fd_create2_args *VAR_5)
{
 int VAR_6[2];
 int VAR_7, VAR_8;

 switch (VAR_5->type) {
 case 129:
  VAR_8 = VAR_2;
  break;
 case 128:
  VAR_8 = VAR_3;
  break;
 default:
  return (VAR_1);
 }

 VAR_7 = FUNC_0(VAR_4, VAR_0, VAR_8, 0, VAR_6);
 if (VAR_7 == 0) {
  VAR_4->td_retval[0] = VAR_6[0];
  VAR_4->td_retval[1] = VAR_6[1];
 }
 return (0);
}
