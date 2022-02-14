
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct _umtx_op_args {int obj; } ;


 int FUNC_0 (struct thread*,int ) ;

__attribute__((used)) static int
FUNC_1(struct thread *VAR_0, struct _umtx_op_args *VAR_1)
{

 return (FUNC_0(VAR_0, VAR_1->obj));
}
