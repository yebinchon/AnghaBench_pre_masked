
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rxrpc_transport {int error_handler; int debug_id; int usage; int conn_lock; int client_lock; int error_queue; void* server_conns; void* client_conns; void* bundles; int link; struct rxrpc_peer* peer; struct rxrpc_local* local; } ;
struct TYPE_3__ {scalar_t__ family; } ;
struct TYPE_4__ {int transport_type; TYPE_1__ transport; } ;
struct rxrpc_peer {TYPE_2__ srx; } ;
struct rxrpc_local {int dummy; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 void* VAR_1 ;

 int FUNC_3 (char*) ;
 int FUNC_4 (char*,struct rxrpc_transport*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 struct rxrpc_transport* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static struct rxrpc_transport *FUNC_11(struct rxrpc_local *VAR_4,
           struct rxrpc_peer *VAR_5,
           gfp_t VAR_6)
{
 struct rxrpc_transport *VAR_7;

 FUNC_3("");

 VAR_7 = FUNC_7(sizeof(struct rxrpc_transport), VAR_6);
 if (VAR_7) {
  VAR_7->local = VAR_4;
  VAR_7->peer = VAR_5;
  FUNC_1(&VAR_7->link);
  VAR_7->bundles = VAR_1;
  VAR_7->client_conns = VAR_1;
  VAR_7->server_conns = VAR_1;
  FUNC_9(&VAR_7->error_queue);
  FUNC_10(&VAR_7->client_lock);
  FUNC_8(&VAR_7->conn_lock);
  FUNC_6(&VAR_7->usage, 1);
  VAR_7->debug_id = FUNC_5(&VAR_3);

  if (VAR_5->srx.transport.family == VAR_0) {
   switch (VAR_5->srx.transport_type) {
   case 128:
    FUNC_2(&VAR_7->error_handler,
       VAR_2);
    break;
   default:
    FUNC_0();
    break;
   }
  } else {
   FUNC_0();
  }
 }

 FUNC_4(" = %p", VAR_7);
 return VAR_7;
}
