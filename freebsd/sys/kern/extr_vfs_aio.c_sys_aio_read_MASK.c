
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct aio_read_args {int aiocbp; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int ,int *,int ,int *) ;
 int VAR_1 ;

int
FUNC_1(struct thread *VAR_2, struct aio_read_args *VAR_3)
{

 return (FUNC_0(VAR_2, VAR_3->aiocbp, ((void*)0), VAR_0, &VAR_1));
}
