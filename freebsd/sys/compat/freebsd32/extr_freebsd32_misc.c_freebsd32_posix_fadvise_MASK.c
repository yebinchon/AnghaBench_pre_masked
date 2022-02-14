
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct freebsd32_posix_fadvise_args {int advice; int len; int offset; int fd; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct thread*,int) ;
 int FUNC_2 (struct thread*,int ,int ,int ,int ) ;
 int VAR_0 ;

int
FUNC_3(struct thread *VAR_1,
    struct freebsd32_posix_fadvise_args *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_2->fd, FUNC_0(VAR_0, VAR_2->offset),
     FUNC_0(VAR_0, VAR_2->len), VAR_2->advice);
 return (FUNC_1(VAR_1, VAR_3));
}
