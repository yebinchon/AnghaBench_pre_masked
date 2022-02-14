
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_rxrpc {int dummy; } ;
struct rxrpc_local {int srx; int debug_id; int usage; int services_lock; int lock; int reject_queue; int accept_queue; int defrag_sem; int link; int services; int rejecter; int acceptor; int destroyer; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,struct rxrpc_local*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 struct rxrpc_local* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,struct sockaddr_rxrpc*,int) ;
 int FUNC_8 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static
struct rxrpc_local *FUNC_11(struct sockaddr_rxrpc *VAR_5)
{
 struct rxrpc_local *VAR_6;

 VAR_6 = FUNC_6(sizeof(struct rxrpc_local), VAR_0);
 if (VAR_6) {
  FUNC_1(&VAR_6->destroyer, &VAR_3);
  FUNC_1(&VAR_6->acceptor, &VAR_1);
  FUNC_1(&VAR_6->rejecter, &VAR_4);
  FUNC_0(&VAR_6->services);
  FUNC_0(&VAR_6->link);
  FUNC_5(&VAR_6->defrag_sem);
  FUNC_9(&VAR_6->accept_queue);
  FUNC_9(&VAR_6->reject_queue);
  FUNC_10(&VAR_6->lock);
  FUNC_8(&VAR_6->services_lock);
  FUNC_4(&VAR_6->usage, 1);
  VAR_6->debug_id = FUNC_3(&VAR_2);
  FUNC_7(&VAR_6->srx, VAR_5, sizeof(*VAR_5));
 }

 FUNC_2(" = %p", VAR_6);
 return VAR_6;
}
