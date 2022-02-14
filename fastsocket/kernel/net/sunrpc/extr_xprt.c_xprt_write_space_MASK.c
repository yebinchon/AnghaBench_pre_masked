
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int transport_lock; scalar_t__ snd_task; int pending; } ;


 int FUNC_0 (char*,struct rpc_xprt*) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct rpc_xprt *VAR_0)
{
 FUNC_2(&VAR_0->transport_lock);
 if (VAR_0->snd_task) {
  FUNC_0("RPC:       write space: waking waiting task on "
    "xprt %p\n", VAR_0);
  FUNC_1(&VAR_0->pending, VAR_0->snd_task);
 }
 FUNC_3(&VAR_0->transport_lock);
}
