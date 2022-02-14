
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct _umtx_time {int dummy; } ;
struct _umtx_op_args {int obj; scalar_t__ uaddr1; int * uaddr2; } ;


 int FUNC_0 (struct thread*,int ,struct _umtx_time*) ;
 int FUNC_1 (int *,size_t,struct _umtx_time*) ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_0, struct _umtx_op_args *VAR_1)
{
 struct _umtx_time VAR_2;
 int VAR_3;


 if (VAR_1->uaddr2 == ((void*)0)) {
  VAR_3 = FUNC_0(VAR_0, VAR_1->obj, 0);
 } else {
  VAR_3 = FUNC_1(VAR_1->uaddr2,
     (size_t)VAR_1->uaddr1, &VAR_2);
  if (VAR_3 != 0)
   return (VAR_3);

  VAR_3 = FUNC_0(VAR_0, VAR_1->obj, &VAR_2);
 }
 return (VAR_3);
}
