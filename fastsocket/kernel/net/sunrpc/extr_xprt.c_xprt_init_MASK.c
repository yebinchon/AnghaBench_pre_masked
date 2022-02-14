
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int xprt_net; int backlog; int sending; int pending; int binding; scalar_t__ bind_index; int cwnd; int last_used; int bc_pa_list; int bc_pa_lock; int recv; int free; int reserve_lock; int transport_lock; int count; } ;
struct net {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct net*) ;
 int VAR_1 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rpc_xprt*) ;

__attribute__((used)) static void FUNC_7(struct rpc_xprt *VAR_2, struct net *VAR_3)
{
 FUNC_1(&VAR_2->count, 1);

 FUNC_5(&VAR_2->transport_lock);
 FUNC_5(&VAR_2->reserve_lock);

 FUNC_0(&VAR_2->free);
 FUNC_0(&VAR_2->recv);





 VAR_2->last_used = VAR_1;
 VAR_2->cwnd = VAR_0;
 VAR_2->bind_index = 0;

 FUNC_4(&VAR_2->binding, "xprt_binding");
 FUNC_4(&VAR_2->pending, "xprt_pending");
 FUNC_3(&VAR_2->sending, "xprt_sending");
 FUNC_3(&VAR_2->backlog, "xprt_backlog");

 FUNC_6(VAR_2);

 VAR_2->xprt_net = FUNC_2(VAR_3);
}
