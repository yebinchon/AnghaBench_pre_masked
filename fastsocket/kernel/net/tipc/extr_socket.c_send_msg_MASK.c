
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tipc_port {int congested; int ref; int conn_instance; int conn_type; scalar_t__ published; } ;
struct socket {scalar_t__ state; scalar_t__ type; struct sock* sk; } ;
struct TYPE_6__ {int instance; int type; } ;
struct TYPE_4__ {int domain; TYPE_3__ name; } ;
struct TYPE_5__ {int nameseq; int id; TYPE_1__ name; } ;
struct sockaddr_tipc {scalar_t__ family; scalar_t__ addrtype; TYPE_2__ addr; } ;
struct sock {int * sk_sleep; } ;
struct msghdr {int msg_namelen; int msg_flags; int msg_iov; int msg_iovlen; scalar_t__ msg_name; } ;
struct kiocb {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (struct sockaddr_tipc*,struct msghdr*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int ,int *,int ,int ,int ) ;
 int FUNC_6 (int ,TYPE_3__*,int ,int ,int ) ;
 int FUNC_7 (int ,int *,int ,int ) ;
 struct tipc_port* FUNC_8 (struct sock*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static int FUNC_11(struct kiocb *VAR_17, struct socket *VAR_18,
      struct msghdr *VAR_19, size_t VAR_20)
{
 struct sock *VAR_21 = VAR_18->sk;
 struct tipc_port *VAR_22 = FUNC_8(VAR_21);
 struct sockaddr_tipc *VAR_23 = (struct sockaddr_tipc *)VAR_19->msg_name;
 int VAR_24;
 int VAR_25 = -VAR_2;

 if (FUNC_9(!VAR_23))
  return -VAR_1;
 if (FUNC_9((VAR_19->msg_namelen < sizeof(*VAR_23)) ||
       (VAR_23->family != VAR_0)))
  return -VAR_2;

 if (VAR_17)
  FUNC_2(VAR_21);

 VAR_24 = (VAR_18->state != VAR_12);
 if (FUNC_9(VAR_24)) {
  if (VAR_18->state == VAR_11) {
   VAR_25 = -VAR_6;
   goto exit;
  }
  if (VAR_18->state != VAR_13) {
   VAR_25 = -VAR_3;
   goto exit;
  }
  if ((VAR_22->published) ||
      ((VAR_18->type == VAR_9) && (VAR_20 != 0))) {
   VAR_25 = -VAR_5;
   goto exit;
  }
  if (VAR_23->addrtype == VAR_16) {
   VAR_22->conn_type = VAR_23->addr.name.name.type;
   VAR_22->conn_instance = VAR_23->addr.name.name.instance;
  }



  FUNC_3(VAR_21);
 }

 do {
  if (VAR_23->addrtype == VAR_16) {
   if ((VAR_25 = FUNC_0(VAR_23, VAR_19)))
    break;
   VAR_25 = FUNC_6(VAR_22->ref,
          &VAR_23->addr.name.name,
          VAR_23->addr.name.domain,
          VAR_19->msg_iovlen,
          VAR_19->msg_iov);
  }
  else if (VAR_23->addrtype == VAR_14) {
   VAR_25 = FUNC_7(VAR_22->ref,
          &VAR_23->addr.id,
          VAR_19->msg_iovlen,
          VAR_19->msg_iov);
  }
  else if (VAR_23->addrtype == VAR_15) {
   if (VAR_24) {
    VAR_25 = -VAR_5;
    break;
   }
   if ((VAR_25 = FUNC_0(VAR_23, VAR_19)))
    break;
   VAR_25 = FUNC_5(VAR_22->ref,
          &VAR_23->addr.nameseq,
          0,
          VAR_19->msg_iovlen,
          VAR_19->msg_iov);
  }
  if (FUNC_1(VAR_25 != -VAR_4)) {
   if (VAR_24 && (VAR_25 >= 0)) {
    VAR_18->state = VAR_10;
   }
   break;
  }
  if (VAR_19->msg_flags & VAR_8) {
   VAR_25 = -VAR_7;
   break;
  }
  FUNC_4(VAR_21);
  VAR_25 = FUNC_10(*VAR_21->sk_sleep,
            !VAR_22->congested);
  FUNC_2(VAR_21);
  if (VAR_25)
   break;
 } while (1);

exit:
 if (VAR_17)
  FUNC_4(VAR_21);
 return VAR_25;
}
