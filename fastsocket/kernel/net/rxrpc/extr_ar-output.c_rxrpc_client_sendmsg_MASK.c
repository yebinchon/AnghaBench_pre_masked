
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sockaddr_rxrpc {int srx_service; } ;
struct rxrpc_transport {int dummy; } ;
struct rxrpc_sock {struct key* key; int service_id; } ;
struct rxrpc_conn_bundle {scalar_t__ state; int conn; int user_call_ID; int debug_id; } ;
struct rxrpc_call {scalar_t__ state; int conn; int user_call_ID; int debug_id; } ;
struct msghdr {scalar_t__ msg_name; } ;
struct kiocb {int dummy; } ;
struct TYPE_2__ {int data; } ;
struct key {TYPE_1__ payload; } ;
typedef enum rxrpc_command { ____Placeholder_rxrpc_command } rxrpc_command ;
typedef int __be16 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct rxrpc_conn_bundle*) ;
 int FUNC_2 (struct rxrpc_conn_bundle*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*,int ,int ,scalar_t__,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ) ;
 struct rxrpc_conn_bundle* FUNC_7 (struct rxrpc_sock*,struct rxrpc_transport*,struct key*,int ,int ) ;
 struct rxrpc_conn_bundle* FUNC_8 (struct rxrpc_sock*,struct rxrpc_transport*,struct rxrpc_conn_bundle*,unsigned long,int,int ) ;
 int FUNC_9 (struct rxrpc_transport*,struct rxrpc_conn_bundle*) ;
 int FUNC_10 (struct rxrpc_conn_bundle*) ;
 int FUNC_11 (struct rxrpc_conn_bundle*,scalar_t__) ;
 int FUNC_12 (struct kiocb*,struct rxrpc_sock*,struct rxrpc_conn_bundle*,struct msghdr*,size_t) ;
 int FUNC_13 (struct rxrpc_sock*,struct msghdr*,unsigned long*,int*,scalar_t__*,int) ;

int FUNC_14(struct kiocb *VAR_8, struct rxrpc_sock *VAR_9,
    struct rxrpc_transport *VAR_10, struct msghdr *VAR_11,
    size_t VAR_12)
{
 struct rxrpc_conn_bundle *VAR_13;
 enum rxrpc_command VAR_14;
 struct rxrpc_call *VAR_15;
 unsigned long VAR_16 = 0;
 struct key *VAR_17;
 __be16 VAR_18;
 u32 VAR_19 = 0;
 int VAR_20;

 FUNC_4("");

 FUNC_0(VAR_10 != ((void*)0));

 VAR_20 = FUNC_13(VAR_9, VAR_11, &VAR_16, &VAR_14, &VAR_19,
     0);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_13 = ((void*)0);
 if (VAR_10) {
  VAR_18 = VAR_9->service_id;
  if (VAR_11->msg_name) {
   struct sockaddr_rxrpc *VAR_21 =
    (struct sockaddr_rxrpc *) VAR_11->msg_name;
   VAR_18 = FUNC_6(VAR_21->srx_service);
  }
  VAR_17 = VAR_9->key;
  if (VAR_17 && !VAR_9->key->payload.data)
   VAR_17 = ((void*)0);
  VAR_13 = FUNC_7(VAR_9, VAR_10, VAR_17, VAR_18,
       VAR_3);
  if (FUNC_1(VAR_13))
   return FUNC_2(VAR_13);
 }

 VAR_15 = FUNC_8(VAR_9, VAR_10, VAR_13, VAR_16,
         VAR_19 == 0, VAR_3);
 if (VAR_10)
  FUNC_9(VAR_10, VAR_13);
 if (FUNC_1(VAR_15)) {
  FUNC_5(" = %ld", FUNC_2(VAR_15));
  return FUNC_2(VAR_15);
 }

 FUNC_3("CALL %d USR %lx ST %d on CONN %p",
        VAR_15->debug_id, VAR_15->user_call_ID, VAR_15->state, VAR_15->conn);

 if (VAR_15->state >= VAR_5) {

  VAR_20 = -VAR_2;
 } else if (VAR_14 == VAR_6) {
  FUNC_11(VAR_15, VAR_19);
 } else if (VAR_14 != VAR_7) {
  VAR_20 = -VAR_0;
 } else if (VAR_15->state != VAR_4) {

  VAR_20 = -VAR_1;
 } else {
  VAR_20 = FUNC_12(VAR_8, VAR_9, VAR_15, VAR_11, VAR_12);
 }

 FUNC_10(VAR_15);
 FUNC_5(" = %d", VAR_20);
 return VAR_20;
}
