
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_fallocate_args {scalar_t__ mode; int len; int offset; int fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int ,int ,int ) ;

int
FUNC_1(struct thread *VAR_1, struct linux_fallocate_args *VAR_2)
{





 if (VAR_2->mode != 0)
  return (VAR_0);

 return (FUNC_0(VAR_1, VAR_2->fd, VAR_2->offset,
     VAR_2->len));
}
