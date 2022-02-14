
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rxrpc_transport {int dummy; } ;
struct rxrpc_sock {int sk; } ;
struct rxrpc_conn_bundle {int dummy; } ;
struct TYPE_8__ {scalar_t__ expires; } ;
struct rxrpc_call {int rx_data_post; TYPE_4__ lifetimer; TYPE_3__* conn; int error_link; struct rxrpc_sock* socket; } ;
typedef int gfp_t ;
struct TYPE_7__ {TYPE_2__* trans; } ;
struct TYPE_6__ {TYPE_1__* peer; } ;
struct TYPE_5__ {int lock; int error_targets; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct rxrpc_call* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,struct rxrpc_call*) ;
 int FUNC_4 (TYPE_4__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ,struct rxrpc_call*) ;
 int FUNC_6 (int *,int *) ;
 struct rxrpc_call* FUNC_7 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (struct rxrpc_sock*,struct rxrpc_transport*,struct rxrpc_conn_bundle*,struct rxrpc_call*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static struct rxrpc_call *FUNC_12(
 struct rxrpc_sock *VAR_5,
 struct rxrpc_transport *VAR_6,
 struct rxrpc_conn_bundle *VAR_7,
 gfp_t VAR_8)
{
 struct rxrpc_call *VAR_9;
 int VAR_10;

 FUNC_2("");

 FUNC_0(VAR_5 != ((void*)0));
 FUNC_0(VAR_6 != ((void*)0));
 FUNC_0(VAR_7 != ((void*)0));

 VAR_9 = FUNC_7(VAR_8);
 if (!VAR_9)
  return FUNC_1(-VAR_0);

 FUNC_9(&VAR_5->sk);
 VAR_9->socket = VAR_5;
 VAR_9->rx_data_post = 1;

 VAR_10 = FUNC_8(VAR_5, VAR_6, VAR_7, VAR_9, VAR_8);
 if (VAR_10 < 0) {
  FUNC_5(VAR_3, VAR_9);
  return FUNC_1(VAR_10);
 }

 FUNC_10(&VAR_9->conn->trans->peer->lock);
 FUNC_6(&VAR_9->error_link, &VAR_9->conn->trans->peer->error_targets);
 FUNC_11(&VAR_9->conn->trans->peer->lock);

 VAR_9->lifetimer.expires = VAR_2 + VAR_4 * VAR_1;
 FUNC_4(&VAR_9->lifetimer);

 FUNC_3(" = %p", VAR_9);
 return VAR_9;
}
