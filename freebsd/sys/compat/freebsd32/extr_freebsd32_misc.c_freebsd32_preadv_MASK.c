
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int dummy; } ;
struct thread {int dummy; } ;
struct freebsd32_preadv_args {int offset; int fd; int iovcnt; int iovp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct uio*,int ) ;
 int FUNC_2 (int ,int ,struct uio**) ;
 int FUNC_3 (struct thread*,int ,struct uio*,int ) ;
 int VAR_1 ;

int
FUNC_4(struct thread *VAR_2, struct freebsd32_preadv_args *VAR_3)
{
 struct uio *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3->iovp, VAR_3->iovcnt, &VAR_4);
 if (VAR_5)
  return (VAR_5);
 VAR_5 = FUNC_3(VAR_2, VAR_3->fd, VAR_4, FUNC_0(VAR_1,VAR_3->offset));
 FUNC_1(VAR_4, VAR_0);
 return (VAR_5);
}
