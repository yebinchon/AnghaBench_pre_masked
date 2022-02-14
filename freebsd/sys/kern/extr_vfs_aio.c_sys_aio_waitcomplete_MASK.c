
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ts ;
struct timespec {int dummy; } ;
struct thread {int dummy; } ;
struct aio_waitcomplete_args {int aiocbp; scalar_t__ timeout; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,struct timespec*,int) ;
 int FUNC_1 (struct thread*,int ,struct timespec*,int *) ;

int
FUNC_2(struct thread *VAR_1, struct aio_waitcomplete_args *VAR_2)
{
 struct timespec VAR_3, *VAR_4;
 int VAR_5;

 if (VAR_2->timeout) {

  VAR_5 = FUNC_0(VAR_2->timeout, &VAR_3, sizeof(VAR_3));
  if (VAR_5)
   return (VAR_5);
  VAR_4 = &VAR_3;
 } else
  VAR_4 = ((void*)0);

 return (FUNC_1(VAR_1, VAR_2->aiocbp, VAR_4, &VAR_0));
}
