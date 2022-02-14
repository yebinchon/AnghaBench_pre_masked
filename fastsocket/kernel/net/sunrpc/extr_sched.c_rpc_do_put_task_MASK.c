
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int dummy; } ;
struct rpc_task {int tk_count; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct rpc_task*,struct workqueue_struct*) ;
 int FUNC_2 (struct rpc_task*) ;

__attribute__((used)) static void FUNC_3(struct rpc_task *VAR_0, struct workqueue_struct *VAR_1)
{
 if (FUNC_0(&VAR_0->tk_count)) {
  FUNC_2(VAR_0);
  FUNC_1(VAR_0, VAR_1);
 }
}
