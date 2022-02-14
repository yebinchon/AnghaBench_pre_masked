
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int dummy; } ;
struct thread {int dummy; } ;
struct cloudabi64_sys_fd_write_args {int fd; int iovs_len; int iovs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,struct uio**) ;
 int FUNC_2 (struct uio*,int ) ;
 int FUNC_3 (struct thread*,int ,struct uio*) ;

int
FUNC_4(struct thread *VAR_1,
    struct cloudabi64_sys_fd_write_args *VAR_2)
{
 struct uio *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(FUNC_0(VAR_2->iovs), VAR_2->iovs_len, &VAR_3);
 if (VAR_4 != 0)
  return (VAR_4);
 VAR_4 = FUNC_3(VAR_1, VAR_2->fd, VAR_3);
 FUNC_2(VAR_3, VAR_0);
 return (VAR_4);
}
