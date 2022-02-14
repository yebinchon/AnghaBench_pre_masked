
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int sk; } ;
struct sockaddr_rxrpc {int srx_service; } ;
struct sockaddr {int dummy; } ;
struct rxrpc_transport {int usage; } ;
struct rxrpc_sock {int sk; struct key* key; int service_id; struct rxrpc_transport* trans; } ;
struct rxrpc_conn_bundle {int usage; } ;
struct rxrpc_call {int dummy; } ;
struct TYPE_2__ {int data; } ;
struct key {TYPE_1__ payload; } ;
typedef int gfp_t ;
typedef int __be16 ;


 int VAR_0 ;
 struct rxrpc_call* FUNC_0 (struct rxrpc_transport*) ;
 struct rxrpc_call* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct rxrpc_transport*) ;
 int FUNC_3 (char*,int ,unsigned long) ;
 int FUNC_4 (char*,struct rxrpc_call*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct key*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct rxrpc_transport* FUNC_10 (struct rxrpc_sock*,struct rxrpc_transport*,struct key*,int ,int ) ;
 struct rxrpc_call* FUNC_11 (struct rxrpc_sock*,struct rxrpc_transport*,struct rxrpc_transport*,unsigned long,int,int ) ;
 struct rxrpc_transport* FUNC_12 (struct socket*,struct sockaddr*,int,int ,int ) ;
 int FUNC_13 (struct rxrpc_transport*,struct rxrpc_transport*) ;
 int FUNC_14 (struct rxrpc_transport*) ;
 struct rxrpc_sock* FUNC_15 (int ) ;

struct rxrpc_call *FUNC_16(struct socket *VAR_1,
        struct sockaddr_rxrpc *VAR_2,
        struct key *VAR_3,
        unsigned long VAR_4,
        gfp_t VAR_5)
{
 struct rxrpc_conn_bundle *VAR_6;
 struct rxrpc_transport *VAR_7;
 struct rxrpc_call *VAR_8;
 struct rxrpc_sock *VAR_9 = FUNC_15(VAR_1->sk);
 __be16 VAR_10;

 FUNC_3(",,%x,%lx", FUNC_7(VAR_3), VAR_4);

 FUNC_8(&VAR_9->sk);

 if (VAR_2) {
  VAR_7 = FUNC_12(VAR_1, (struct sockaddr *) VAR_2,
      sizeof(*VAR_2), 0, VAR_5);
  if (FUNC_2(VAR_7)) {
   VAR_8 = FUNC_0(VAR_7);
   VAR_7 = ((void*)0);
   goto out_notrans;
  }
 } else {
  VAR_7 = VAR_9->trans;
  if (!VAR_7) {
   VAR_8 = FUNC_1(-VAR_0);
   goto out_notrans;
  }
  FUNC_5(&VAR_7->usage);
 }

 VAR_10 = VAR_9->service_id;
 if (VAR_2)
  VAR_10 = FUNC_6(VAR_2->srx_service);

 if (!VAR_3)
  VAR_3 = VAR_9->key;
 if (VAR_3 && !VAR_3->payload.data)
  VAR_3 = ((void*)0);

 VAR_6 = FUNC_10(VAR_9, VAR_7, VAR_3, VAR_10, VAR_5);
 if (FUNC_2(VAR_6)) {
  VAR_8 = FUNC_0(VAR_6);
  goto out;
 }

 VAR_8 = FUNC_11(VAR_9, VAR_7, VAR_6, VAR_4, 1,
         VAR_5);
 FUNC_13(VAR_7, VAR_6);
out:
 FUNC_14(VAR_7);
out_notrans:
 FUNC_9(&VAR_9->sk);
 FUNC_4(" = %p", VAR_8);
 return VAR_8;
}
