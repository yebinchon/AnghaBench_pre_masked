
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umtx_robust_lists_params {int dummy; } ;
struct thread {int dummy; } ;
struct _umtx_op_args {int val; int uaddr1; } ;
typedef int rb ;


 int VAR_0 ;
 int FUNC_0 (struct umtx_robust_lists_params*,int) ;
 int FUNC_1 (int ,struct umtx_robust_lists_params*,int) ;
 int FUNC_2 (struct thread*,struct umtx_robust_lists_params*) ;

__attribute__((used)) static int
FUNC_3(struct thread *VAR_1, struct _umtx_op_args *VAR_2)
{
 struct umtx_robust_lists_params VAR_3;
 int VAR_4;

 if (VAR_2->val > sizeof(VAR_3))
  return (VAR_0);
 FUNC_0(&VAR_3, sizeof(VAR_3));
 VAR_4 = FUNC_1(VAR_2->uaddr1, &VAR_3, VAR_2->val);
 if (VAR_4 != 0)
  return (VAR_4);
 return (FUNC_2(VAR_1, &VAR_3));
}
