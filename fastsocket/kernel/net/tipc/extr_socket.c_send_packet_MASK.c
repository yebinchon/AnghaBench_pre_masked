
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_port {int connected; int congested; int ref; } ;
struct socket {scalar_t__ state; struct sock* sk; } ;
struct sockaddr_tipc {int dummy; } ;
struct sock {int * sk_sleep; } ;
struct msghdr {int msg_flags; int msg_iov; int msg_iovlen; scalar_t__ msg_name; } ;
struct kiocb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct kiocb*,struct socket*,struct msghdr*,size_t) ;
 int FUNC_4 (int ,int ,int ) ;
 struct tipc_port* FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(struct kiocb *VAR_7, struct socket *VAR_8,
         struct msghdr *VAR_9, size_t VAR_10)
{
 struct sock *VAR_11 = VAR_8->sk;
 struct tipc_port *VAR_12 = FUNC_5(VAR_11);
 struct sockaddr_tipc *VAR_13 = (struct sockaddr_tipc *)VAR_9->msg_name;
 int VAR_14;



 if (FUNC_6(VAR_13))
  return FUNC_3(VAR_7, VAR_8, VAR_9, VAR_10);

 if (VAR_7)
  FUNC_1(VAR_11);

 do {
  if (FUNC_6(VAR_8->state != VAR_5)) {
   if (VAR_8->state == VAR_6)
    VAR_14 = -VAR_2;
   else
    VAR_14 = -VAR_1;
   break;
  }

  VAR_14 = FUNC_4(VAR_12->ref, VAR_9->msg_iovlen, VAR_9->msg_iov);
  if (FUNC_0(VAR_14 != -VAR_0)) {
   break;
  }
  if (VAR_9->msg_flags & VAR_4) {
   VAR_14 = -VAR_3;
   break;
  }
  FUNC_2(VAR_11);
  VAR_14 = FUNC_7(*VAR_11->sk_sleep,
   (!VAR_12->congested || !VAR_12->connected));
  FUNC_1(VAR_11);
  if (VAR_14)
   break;
 } while (1);

 if (VAR_7)
  FUNC_2(VAR_11);
 return VAR_14;
}
