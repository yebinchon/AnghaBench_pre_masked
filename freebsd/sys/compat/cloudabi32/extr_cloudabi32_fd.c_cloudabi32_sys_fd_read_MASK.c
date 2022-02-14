
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int dummy; } ;
struct thread {int dummy; } ;
struct cloudabi32_sys_fd_read_args {int fd; int iovs_len; int iovs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct uio**) ;
 int FUNC_1 (struct uio*,int ) ;
 int FUNC_2 (struct thread*,int ,struct uio*) ;

int
FUNC_3(struct thread *VAR_1,
    struct cloudabi32_sys_fd_read_args *VAR_2)
{
 struct uio *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->iovs, VAR_2->iovs_len, &VAR_3);
 if (VAR_4 != 0)
  return (VAR_4);
 VAR_4 = FUNC_2(VAR_1, VAR_2->fd, VAR_3);
 FUNC_1(VAR_3, VAR_0);
 return (VAR_4);
}
