
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_wait_queue {int nr; int owner; } ;
typedef int pid_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct rpc_wait_queue *VAR_1, pid_t VAR_2)
{
 VAR_1->owner = VAR_2;
 VAR_1->nr = VAR_0;
}
