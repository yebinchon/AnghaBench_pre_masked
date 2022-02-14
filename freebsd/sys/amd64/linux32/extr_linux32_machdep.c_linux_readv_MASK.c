
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int dummy; } ;
struct thread {int dummy; } ;
struct linux_readv_args {int fd; int iovcnt; int iovp; } ;


 int VAR_0 ;
 int FUNC_0 (struct uio*,int ) ;
 int FUNC_1 (struct thread*,int ,struct uio*) ;
 int FUNC_2 (int ,int ,struct uio**) ;

int
FUNC_3(struct thread *VAR_1, struct linux_readv_args *VAR_2)
{
 struct uio *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2->iovp, VAR_2->iovcnt, &VAR_3);
 if (VAR_4)
  return (VAR_4);
 VAR_4 = FUNC_1(VAR_1, VAR_2->fd, VAR_3);
 FUNC_0(VAR_3, VAR_0);
 return (VAR_4);
}
