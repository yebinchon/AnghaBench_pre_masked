
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct _umtx_time {int dummy; } ;
struct _umtx_op_args {int obj; scalar_t__ uaddr1; int * uaddr2; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int ,struct _umtx_time*,int ) ;
 int FUNC_1 (int *,size_t,struct _umtx_time*) ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_1, struct _umtx_op_args *VAR_2)
{
 struct _umtx_time *VAR_3, VAR_4;
 int VAR_5;


 if (VAR_2->uaddr2 == ((void*)0))
  VAR_3 = ((void*)0);
 else {
  VAR_5 = FUNC_1(
      VAR_2->uaddr2, (size_t)VAR_2->uaddr1, &VAR_4);
  if (VAR_5 != 0)
   return (VAR_5);
  VAR_3 = &VAR_4;
 }
 return (FUNC_0(VAR_1, VAR_2->obj, VAR_3, VAR_0));
}
