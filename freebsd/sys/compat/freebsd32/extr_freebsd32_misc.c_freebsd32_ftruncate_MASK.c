
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct freebsd32_ftruncate_args {int length; int fd; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct thread*,int ,int ) ;
 int VAR_0 ;

int
FUNC_2(struct thread *VAR_1, struct freebsd32_ftruncate_args *VAR_2)
{

 return (FUNC_1(VAR_1, VAR_2->fd, FUNC_0(VAR_0, VAR_2->length)));
}
