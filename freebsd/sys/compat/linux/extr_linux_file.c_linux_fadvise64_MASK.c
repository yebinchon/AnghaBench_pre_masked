
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_fadvise64_args {int len; int offset; int fd; int advice; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct thread*,int ,int ,int ,int) ;

int
FUNC_2(struct thread *VAR_1, struct linux_fadvise64_args *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->advice);
 if (VAR_3 == -1)
  return (VAR_0);
 return (FUNC_1(VAR_1, VAR_2->fd, VAR_2->offset, VAR_2->len,
     VAR_3));
}
