
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_wait_queue {int priority; } ;


 int FUNC_0 (struct rpc_wait_queue*) ;

__attribute__((used)) static void FUNC_1(struct rpc_wait_queue *VAR_0, int VAR_1)
{
 if (VAR_0->priority != VAR_1) {

  FUNC_0(VAR_0);
  VAR_0->priority = VAR_1;
 }
}
