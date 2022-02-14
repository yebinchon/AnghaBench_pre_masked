
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int dummy; } ;
struct thread {int dummy; } ;
struct freebsd32_jail_set_args {int iovcnt; int flags; int iovp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uio*,int ) ;
 int FUNC_1 (int ,int,struct uio**) ;
 int FUNC_2 (struct thread*,struct uio*,int ) ;

int
FUNC_3(struct thread *VAR_2, struct freebsd32_jail_set_args *VAR_3)
{
 struct uio *VAR_4;
 int VAR_5;


 if (VAR_3->iovcnt & 1)
  return (VAR_0);

 VAR_5 = FUNC_1(VAR_3->iovp, VAR_3->iovcnt, &VAR_4);
 if (VAR_5)
  return (VAR_5);
 VAR_5 = FUNC_2(VAR_2, VAR_4, VAR_3->flags);
 FUNC_0(VAR_4, VAR_1);
 return (VAR_5);
}
