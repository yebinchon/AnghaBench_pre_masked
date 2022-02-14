
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct socket {int sk; } ;
struct TYPE_8__ {scalar_t__ family; } ;
struct sockaddr_rxrpc {scalar_t__ transport_type; TYPE_4__ transport; } ;
struct sockaddr {int dummy; } ;
struct rxrpc_transport {int dummy; } ;
struct TYPE_6__ {scalar_t__ family; } ;
struct TYPE_7__ {scalar_t__ transport_type; TYPE_2__ transport; } ;
struct TYPE_5__ {scalar_t__ sk_state; } ;
struct rxrpc_sock {int * local; TYPE_3__ srx; TYPE_1__ sk; } ;
struct rxrpc_peer {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct rxrpc_transport* FUNC_1 (struct rxrpc_peer*) ;
 struct rxrpc_transport* FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct rxrpc_peer*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char*,struct rxrpc_sock*,struct sockaddr*,int,int) ;
 int FUNC_5 (char*,struct rxrpc_transport*) ;
 struct rxrpc_peer* FUNC_6 (struct sockaddr_rxrpc*,int ) ;
 struct rxrpc_transport* FUNC_7 (int *,struct rxrpc_peer*,int ) ;
 int FUNC_8 (struct rxrpc_peer*) ;
 struct rxrpc_sock* FUNC_9 (int ) ;

__attribute__((used)) static struct rxrpc_transport *FUNC_10(struct socket *VAR_3,
             struct sockaddr *VAR_4,
             int VAR_5, int VAR_6,
             gfp_t VAR_7)
{
 struct sockaddr_rxrpc *VAR_8 = (struct sockaddr_rxrpc *) VAR_4;
 struct rxrpc_transport *VAR_9;
 struct rxrpc_sock *VAR_10 = FUNC_9(VAR_3->sk);
 struct rxrpc_peer *VAR_11;

 FUNC_4("%p,%p,%d,%d", VAR_10, VAR_4, VAR_5, VAR_6);

 FUNC_0(VAR_10->local != ((void*)0));
 FUNC_0(VAR_10->sk.sk_state > VAR_2);

 if (VAR_10->srx.transport_type != VAR_8->transport_type)
  return FUNC_2(-VAR_1);
 if (VAR_10->srx.transport.family != VAR_8->transport.family)
  return FUNC_2(-VAR_0);


 VAR_11 = FUNC_6(VAR_8, VAR_7);
 if (FUNC_3(VAR_11))
  return FUNC_1(VAR_11);


 VAR_9 = FUNC_7(VAR_10->local, VAR_11, VAR_7);
 FUNC_8(VAR_11);
 FUNC_5(" = %p", VAR_9);
 return VAR_9;
}
