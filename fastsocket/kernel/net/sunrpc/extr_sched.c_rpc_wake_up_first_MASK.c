
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_wait_queue {int lock; } ;
struct rpc_task {int dummy; } ;


 struct rpc_task* FUNC_0 (struct rpc_wait_queue*) ;
 int FUNC_1 (char*,struct rpc_wait_queue*,int ) ;
 int FUNC_2 (struct rpc_wait_queue*) ;
 int FUNC_3 (struct rpc_wait_queue*,struct rpc_task*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct rpc_task *FUNC_6(struct rpc_wait_queue *VAR_0,
  bool (*VAR_1)(struct rpc_task *, void *), void *VAR_2)
{
 struct rpc_task *VAR_3 = ((void*)0);

 FUNC_1("RPC:       wake_up_first(%p \"%s\")\n",
   VAR_0, FUNC_2(VAR_0));
 FUNC_4(&VAR_0->lock);
 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3 != ((void*)0)) {
  if (VAR_1(VAR_3, VAR_2))
   FUNC_3(VAR_0, VAR_3);
  else
   VAR_3 = ((void*)0);
 }
 FUNC_5(&VAR_0->lock);

 return VAR_3;
}
