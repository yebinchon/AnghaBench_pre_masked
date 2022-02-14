
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int uio_iov; } ;
struct thread {int dummy; } ;
struct jail_get_args {int iovcnt; int iovp; int flags; } ;
struct iovec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,struct uio**) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct uio*,int ) ;
 int FUNC_3 (struct thread*,struct uio*,int ) ;

int
FUNC_4(struct thread *VAR_2, struct jail_get_args *VAR_3)
{
 struct uio *VAR_4;
 int VAR_5;


 if (VAR_3->iovcnt & 1)
  return (VAR_0);

 VAR_5 = FUNC_0(VAR_3->iovp, VAR_3->iovcnt, &VAR_4);
 if (VAR_5)
  return (VAR_5);
 VAR_5 = FUNC_3(VAR_2, VAR_4, VAR_3->flags);
 if (VAR_5 == 0)
  VAR_5 = FUNC_1(VAR_4->uio_iov, VAR_3->iovp,
      VAR_3->iovcnt * sizeof (struct iovec));
 FUNC_2(VAR_4, VAR_1);
 return (VAR_5);
}
