
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_wait_queue {int qlen; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct rpc_wait_queue *VAR_0)
{
 int VAR_1;

 FUNC_0(&VAR_0->lock);
 VAR_1 = VAR_0->qlen;
 FUNC_1(&VAR_0->lock);
 return (VAR_1 == 0);
}
