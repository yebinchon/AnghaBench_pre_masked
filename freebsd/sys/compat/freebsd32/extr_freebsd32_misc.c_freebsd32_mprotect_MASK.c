
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct freebsd32_mprotect_args {int prot; int len; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct thread*,uintptr_t,int ,int) ;

int
FUNC_2(struct thread *VAR_3, struct freebsd32_mprotect_args *VAR_4)
{
 int VAR_5;

 VAR_5 = VAR_4->prot;

 if (VAR_2 && (VAR_5 & VAR_1) != 0)
  VAR_5 |= VAR_0;

 return (FUNC_1(VAR_3, (uintptr_t)FUNC_0(VAR_4->addr), VAR_4->len,
     VAR_5));
}
