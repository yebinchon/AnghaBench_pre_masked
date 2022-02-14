
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rxrpc_call {TYPE_2__* conn; } ;
struct TYPE_4__ {TYPE_1__* security; } ;
struct TYPE_3__ {int (* secure_packet ) (struct rxrpc_call const*,struct sk_buff*,size_t,void*) ;} ;


 int FUNC_0 (struct rxrpc_call const*,struct sk_buff*,size_t,void*) ;

int FUNC_1(const struct rxrpc_call *VAR_0,
   struct sk_buff *VAR_1,
   size_t VAR_2,
   void *VAR_3)
{
 if (VAR_0->conn->security)
  return VAR_0->conn->security->secure_packet(
   VAR_0, VAR_1, VAR_2, VAR_3);
 return 0;
}
