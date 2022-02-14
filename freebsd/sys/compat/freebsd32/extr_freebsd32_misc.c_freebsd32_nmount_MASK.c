
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct uio {int dummy; } ;
struct thread {int dummy; } ;
struct freebsd32_nmount_args {int iovcnt; int iovp; int flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct uio*,int ) ;
 int FUNC_2 (int ,int,struct uio**) ;
 int FUNC_3 (struct thread*,int ,struct uio*) ;

int
FUNC_4(struct thread *VAR_3,
    struct freebsd32_nmount_args *VAR_4)




{
 struct uio *VAR_5;
 uint64_t VAR_6;
 int VAR_7;






 VAR_6 = VAR_4->flags;

 FUNC_0(VAR_6);
 VAR_6 &= ~VAR_1;





 if ((VAR_4->iovcnt & 1) || (VAR_4->iovcnt < 4))
  return (VAR_0);

 VAR_7 = FUNC_2(VAR_4->iovp, VAR_4->iovcnt, &VAR_5);
 if (VAR_7)
  return (VAR_7);
 VAR_7 = FUNC_3(VAR_3, VAR_6, VAR_5);

 FUNC_1(VAR_5, VAR_2);
 return VAR_7;
}
