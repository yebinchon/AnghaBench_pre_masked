
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxrpc_security {int (* init_connection_security ) (struct rxrpc_connection*) ;} ;
struct rxrpc_key_token {int security_index; } ;
struct rxrpc_connection {struct rxrpc_security* security; int debug_id; struct key* key; } ;
struct TYPE_2__ {struct rxrpc_key_token* data; } ;
struct key {TYPE_1__ payload; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct key*) ;
 int FUNC_3 (struct key*) ;
 struct rxrpc_security* FUNC_4 (int ) ;
 int FUNC_5 (struct rxrpc_security*) ;
 int FUNC_6 (struct rxrpc_connection*) ;

int FUNC_7(struct rxrpc_connection *VAR_1)
{
 struct rxrpc_key_token *VAR_2;
 struct rxrpc_security *VAR_3;
 struct key *VAR_4 = VAR_1->key;
 int VAR_5;

 FUNC_0("{%d},{%x}", VAR_1->debug_id, FUNC_2(VAR_4));

 if (!VAR_4)
  return 0;

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 if (!VAR_4->payload.data)
  return -VAR_0;
 VAR_2 = VAR_4->payload.data;

 VAR_3 = FUNC_4(VAR_2->security_index);
 if (!VAR_3)
  return -VAR_0;
 VAR_1->security = VAR_3;

 VAR_5 = VAR_1->security->init_connection_security(VAR_1);
 if (VAR_5 < 0) {
  FUNC_5(VAR_1->security);
  VAR_1->security = ((void*)0);
  return VAR_5;
 }

 FUNC_1(" = 0");
 return 0;
}
