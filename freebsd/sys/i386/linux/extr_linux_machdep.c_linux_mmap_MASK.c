
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct thread {int dummy; } ;
struct linux_mmap_args {int ptr; } ;
struct l_mmap_argv {scalar_t__ pgoff; int fd; int flags; int prot; int len; int addr; } ;
typedef int linux_args ;


 int FUNC_0 (int ,struct l_mmap_argv*,int) ;
 int FUNC_1 (struct thread*,int ,int ,int ,int ,int ,int ) ;

int
FUNC_2(struct thread *VAR_0, struct linux_mmap_args *VAR_1)
{
 int VAR_2;
 struct l_mmap_argv VAR_3;

 VAR_2 = FUNC_0(VAR_1->ptr, &VAR_3, sizeof(VAR_3));
 if (VAR_2)
  return (VAR_2);

 return (FUNC_1(VAR_0, VAR_3.addr, VAR_3.len,
     VAR_3.prot, VAR_3.flags, VAR_3.fd,
     (uint32_t)VAR_3.pgoff));
}
