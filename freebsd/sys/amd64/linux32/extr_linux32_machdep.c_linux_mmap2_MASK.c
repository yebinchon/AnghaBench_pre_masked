
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct thread {int dummy; } ;
struct linux_mmap2_args {scalar_t__ pgoff; int fd; int flags; int prot; int len; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct thread*,int ,int ,int ,int ,int ,int) ;

int
FUNC_2(struct thread *VAR_1, struct linux_mmap2_args *VAR_2)
{

 return (FUNC_1(VAR_1, FUNC_0(VAR_2->addr), VAR_2->len, VAR_2->prot,
  VAR_2->flags, VAR_2->fd, (uint64_t)(uint32_t)VAR_2->pgoff *
  VAR_0));
}
