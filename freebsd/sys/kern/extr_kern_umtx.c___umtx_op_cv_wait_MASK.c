
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct thread {int dummy; } ;
struct _umtx_op_args {int val; int uaddr1; int obj; int * uaddr2; } ;


 int FUNC_0 (struct thread*,int ,int ,struct timespec*,int ) ;
 int FUNC_1 (int *,struct timespec*) ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_0, struct _umtx_op_args *VAR_1)
{
 struct timespec *VAR_2, VAR_3;
 int VAR_4;


 if (VAR_1->uaddr2 == ((void*)0))
  VAR_2 = ((void*)0);
 else {
  VAR_4 = FUNC_1(VAR_1->uaddr2, &VAR_3);
  if (VAR_4 != 0)
   return (VAR_4);
  VAR_2 = &VAR_3;
 }
 return (FUNC_0(VAR_0, VAR_1->obj, VAR_1->uaddr1, VAR_2, VAR_1->val));
}
