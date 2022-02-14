
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cloudabi_sys_fd_seek_args {int whence; int offset; int fd; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct thread*,int ,int ,int) ;

int
FUNC_1(struct thread *VAR_4, struct cloudabi_sys_fd_seek_args *VAR_5)
{
 int VAR_6;

 switch (VAR_5->whence) {
 case 130:
  VAR_6 = VAR_1;
  break;
 case 129:
  VAR_6 = VAR_2;
  break;
 case 128:
  VAR_6 = VAR_3;
  break;
 default:
  return (VAR_0);
 }

 return (FUNC_0(VAR_4, VAR_5->fd, VAR_5->offset, VAR_6));
}
