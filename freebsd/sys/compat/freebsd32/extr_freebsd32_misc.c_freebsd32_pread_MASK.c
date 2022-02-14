
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct freebsd32_pread_args {int offset; int nbyte; int buf; int fd; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct thread*,int ,int ,int ,int ) ;
 int VAR_0 ;

int
FUNC_2(struct thread *VAR_1, struct freebsd32_pread_args *VAR_2)
{

 return (FUNC_1(VAR_1, VAR_2->fd, VAR_2->buf, VAR_2->nbyte,
     FUNC_0(VAR_0, VAR_2->offset)));
}
