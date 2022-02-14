
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct posix_fadvise_args {int advice; int len; int offset; int fd; } ;


 int FUNC_0 (struct thread*,int) ;
 int FUNC_1 (struct thread*,int ,int ,int ,int ) ;

int
FUNC_2(struct thread *VAR_0, struct posix_fadvise_args *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1->fd, VAR_1->offset, VAR_1->len,
     VAR_1->advice);
 return (FUNC_0(VAR_0, VAR_2));
}
