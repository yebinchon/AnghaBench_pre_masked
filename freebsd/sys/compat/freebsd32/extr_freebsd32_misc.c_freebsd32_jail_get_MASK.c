
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int * uio_iov; } ;
struct thread {int dummy; } ;
struct iovec32 {int dummy; } ;
struct freebsd32_jail_get_args {int iovcnt; scalar_t__ iovp; int flags; } ;
typedef int iov32 ;


 int FUNC_0 (int ,struct iovec32,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct iovec32,int ) ;
 int FUNC_2 (struct iovec32*,scalar_t__,int) ;
 int FUNC_3 (struct uio*,int ) ;
 int FUNC_4 (scalar_t__,int,struct uio**) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct thread*,struct uio*,int ) ;

int
FUNC_6(struct thread *VAR_4, struct freebsd32_jail_get_args *VAR_5)
{
 struct iovec32 VAR_6;
 struct uio *VAR_7;
 int VAR_8, VAR_9;


 if (VAR_5->iovcnt & 1)
  return (VAR_0);

 VAR_8 = FUNC_4(VAR_5->iovp, VAR_5->iovcnt, &VAR_7);
 if (VAR_8)
  return (VAR_8);
 VAR_8 = FUNC_5(VAR_4, VAR_7, VAR_5->flags);
 if (VAR_8 == 0)
  for (VAR_9 = 0; VAR_9 < VAR_5->iovcnt; VAR_9++) {
   FUNC_1(VAR_7->uio_iov[VAR_9], VAR_6, VAR_2);
   FUNC_0(VAR_7->uio_iov[VAR_9], VAR_6, VAR_3);
   VAR_8 = FUNC_2(&VAR_6, VAR_5->iovp + VAR_9, sizeof(VAR_6));
   if (VAR_8 != 0)
    break;
  }
 FUNC_3(VAR_7, VAR_1);
 return (VAR_8);
}
