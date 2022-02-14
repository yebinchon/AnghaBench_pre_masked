
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct sock {struct rxrpc_local* sk_user_data; int sk_error_report; int sk_data_ready; } ;
struct TYPE_7__ {int transport_len; int transport; int transport_type; } ;
struct rxrpc_local {TYPE_2__* socket; int link; TYPE_1__ srx; } ;
typedef int sa_family_t ;
typedef int opt ;
struct TYPE_8__ {struct sock* sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,struct rxrpc_local*,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_2__*,struct sockaddr*,int) ;
 int FUNC_4 (TYPE_2__*,int ,int ,char*,int) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int *,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int ,int ,int ,TYPE_2__**) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct rxrpc_local *VAR_11)
{
 struct sock *VAR_12;
 int VAR_13, VAR_14;

 FUNC_1("%p{%d}", VAR_11, VAR_11->srx.transport_type);


 VAR_13 = FUNC_7(VAR_4, VAR_11->srx.transport_type, VAR_0,
          &VAR_11->socket);
 if (VAR_13 < 0) {
  FUNC_2(" = %d [socket]", VAR_13);
  return VAR_13;
 }


 if (VAR_11->srx.transport_len > sizeof(sa_family_t)) {
  FUNC_0("bind");
  VAR_13 = FUNC_3(VAR_11->socket,
      (struct sockaddr *) &VAR_11->srx.transport,
      VAR_11->srx.transport_len);
  if (VAR_13 < 0) {
   FUNC_0("bind failed");
   goto error;
  }
 }


 VAR_14 = 1;
 VAR_13 = FUNC_4(VAR_11->socket, VAR_6, VAR_3,
    (char *) &VAR_14, sizeof(VAR_14));
 if (VAR_13 < 0) {
  FUNC_0("setsockopt failed");
  goto error;
 }


 VAR_14 = VAR_2;
 VAR_13 = FUNC_4(VAR_11->socket, VAR_6, VAR_1,
    (char *) &VAR_14, sizeof(VAR_14));
 if (VAR_13 < 0) {
  FUNC_0("setsockopt failed");
  goto error;
 }

 FUNC_9(&VAR_9);
 FUNC_6(&VAR_11->link, &VAR_10);
 FUNC_10(&VAR_9);


 VAR_12 = VAR_11->socket->sk;
 VAR_12->sk_user_data = VAR_11;
 VAR_12->sk_data_ready = VAR_8;
 VAR_12->sk_error_report = VAR_7;
 FUNC_2(" = 0");
 return 0;

error:
 FUNC_5(VAR_11->socket, VAR_5);
 VAR_11->socket->sk->sk_user_data = ((void*)0);
 FUNC_8(VAR_11->socket);
 VAR_11->socket = ((void*)0);

 FUNC_2(" = %d", VAR_13);
 return VAR_13;
}
