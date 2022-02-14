
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct aio_fsync_args {int aiocbp; int op; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int ,int ,int *) ;

int
FUNC_1(struct thread *VAR_1, struct aio_fsync_args *VAR_2)
{

 return (FUNC_0(VAR_1, VAR_2->op, VAR_2->aiocbp, &VAR_0));
}
