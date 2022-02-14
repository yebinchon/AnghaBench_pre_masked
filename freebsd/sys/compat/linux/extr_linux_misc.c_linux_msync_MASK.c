
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_msync_args {int fl; int len; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int ,int ,int) ;

int
FUNC_1(struct thread *VAR_1, struct linux_msync_args *VAR_2)
{

 return (FUNC_0(VAR_1, VAR_2->addr, VAR_2->len,
     VAR_2->fl & ~VAR_0));
}
