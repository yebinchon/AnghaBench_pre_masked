
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int sk; } ;
struct rxrpc_transport {int usage; } ;
struct TYPE_3__ {int sk_state; } ;
struct rxrpc_sock {TYPE_1__ sk; struct rxrpc_transport* trans; } ;
struct msghdr {int msg_flags; int msg_name; int msg_namelen; } ;
struct kiocb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct rxrpc_transport*) ;
 int VAR_4 ;
 int FUNC_1 (struct rxrpc_transport*) ;




 int FUNC_2 (char*,int,size_t) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct kiocb*,struct rxrpc_sock*,struct rxrpc_transport*,struct msghdr*,size_t) ;
 struct rxrpc_transport* FUNC_8 (struct socket*,int ,int ,int ,int ) ;
 int FUNC_9 (struct rxrpc_transport*) ;
 int FUNC_10 (struct kiocb*,struct rxrpc_sock*,struct msghdr*,size_t) ;
 struct rxrpc_sock* FUNC_11 (int ) ;
 int FUNC_12 (struct rxrpc_sock*,int ,int ) ;

__attribute__((used)) static int FUNC_13(struct kiocb *VAR_5, struct socket *VAR_6,
    struct msghdr *VAR_7, size_t VAR_8)
{
 struct rxrpc_transport *VAR_9;
 struct rxrpc_sock *VAR_10 = FUNC_11(VAR_6->sk);
 int VAR_11;

 FUNC_2(",{%d},,%zu", VAR_10->sk.sk_state, VAR_8);

 if (VAR_7->msg_flags & VAR_4)
  return -VAR_2;

 if (VAR_7->msg_name) {
  VAR_11 = FUNC_12(VAR_10, VAR_7->msg_name, VAR_7->msg_namelen);
  if (VAR_11 < 0) {
   FUNC_3(" = %d [bad addr]", VAR_11);
   return VAR_11;
  }
 }

 VAR_9 = ((void*)0);
 FUNC_5(&VAR_10->sk);

 if (VAR_7->msg_name) {
  VAR_11 = -VAR_0;
  VAR_9 = FUNC_8(VAR_6, VAR_7->msg_name,
      VAR_7->msg_namelen, 0, VAR_3);
  if (FUNC_0(VAR_9)) {
   VAR_11 = FUNC_1(VAR_9);
   VAR_9 = ((void*)0);
   goto out;
  }
 } else {
  VAR_9 = VAR_10->trans;
  if (VAR_9)
   FUNC_4(&VAR_9->usage);
 }

 switch (VAR_10->sk.sk_state) {
 case 128:
  if (!VAR_7->msg_name) {
   VAR_11 = FUNC_10(VAR_5, VAR_10, VAR_7, VAR_8);
   break;
  }
 case 129:
 case 131:
  if (!VAR_7->msg_name) {
   VAR_11 = -VAR_1;
   break;
  }
 case 130:
  VAR_11 = FUNC_7(VAR_5, VAR_10, VAR_9, VAR_7, VAR_8);
  break;
 default:
  VAR_11 = -VAR_1;
  break;
 }

out:
 FUNC_6(&VAR_10->sk);
 if (VAR_9)
  FUNC_9(VAR_9);
 FUNC_3(" = %d", VAR_11);
 return VAR_11;
}
