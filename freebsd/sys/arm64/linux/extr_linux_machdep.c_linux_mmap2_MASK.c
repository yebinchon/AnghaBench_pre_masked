
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_mmap2_args {int pgoff; int fd; int flags; int prot; int len; int addr; } ;


 int FUNC_0 (int ,int (*) (struct thread*,struct linux_mmap2_args*),int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct thread*,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_3(struct thread *VAR_2, struct linux_mmap2_args *VAR_3)
{

 FUNC_0(VAR_0, FUNC_3, VAR_1);
 return (FUNC_2(VAR_2, FUNC_1(VAR_3->addr), VAR_3->len, VAR_3->prot,
     VAR_3->flags, VAR_3->fd, VAR_3->pgoff));
}
