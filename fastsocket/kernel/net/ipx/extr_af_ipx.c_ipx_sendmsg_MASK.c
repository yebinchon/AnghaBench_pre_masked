
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_ipx {scalar_t__ sipx_family; int sipx_node; scalar_t__ sipx_network; scalar_t__ sipx_port; int sipx_type; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_state; } ;
struct msghdr {int msg_flags; int msg_namelen; int msg_iov; scalar_t__ msg_name; } ;
struct kiocb {int dummy; } ;
struct ipxhdr {int dummy; } ;
struct TYPE_4__ {int node; scalar_t__ net; scalar_t__ sock; } ;
struct ipx_sock {TYPE_2__ dest_addr; int type; TYPE_1__* intrfc; int port; } ;
struct TYPE_3__ {int if_node; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct socket*,struct sockaddr*,int) ;
 struct ipx_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,struct sockaddr_ipx*,int ,size_t,int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct kiocb *VAR_8, struct socket *VAR_9,
 struct msghdr *VAR_10, size_t VAR_11)
{
 struct sock *VAR_12 = VAR_9->sk;
 struct ipx_sock *VAR_13 = FUNC_1(VAR_12);
 struct sockaddr_ipx *VAR_14 = (struct sockaddr_ipx *)VAR_10->msg_name;
 struct sockaddr_ipx VAR_15;
 int VAR_16 = -VAR_1;
 int VAR_17 = VAR_10->msg_flags;




 if (VAR_17 & ~(VAR_6|VAR_5))
  goto out;


 if (VAR_11 >= 65535 - sizeof(struct ipxhdr))
  goto out;

 if (VAR_14) {
  if (!VAR_13->port) {
   struct sockaddr_ipx VAR_18;

   VAR_18.sipx_port = 0;
   VAR_18.sipx_network = 0;







   VAR_16 = FUNC_0(VAR_9, (struct sockaddr *)&VAR_18,
     sizeof(struct sockaddr_ipx));
   if (VAR_16)
    goto out;
  }

  VAR_16 = -VAR_1;
  if (VAR_10->msg_namelen < sizeof(*VAR_14) ||
      VAR_14->sipx_family != VAR_0)
   goto out;
 } else {
  VAR_16 = -VAR_3;
  if (VAR_12->sk_state != VAR_7)
   goto out;

  VAR_14 = &VAR_15;
  VAR_14->sipx_family = VAR_0;
  VAR_14->sipx_type = VAR_13->type;
  VAR_14->sipx_port = VAR_13->dest_addr.sock;
  VAR_14->sipx_network = VAR_13->dest_addr.net;
  FUNC_3(VAR_14->sipx_node, VAR_13->dest_addr.node, VAR_4);
 }

 VAR_16 = FUNC_2(VAR_12, VAR_14, VAR_10->msg_iov, VAR_11,
     VAR_17 & VAR_6);
 if (VAR_16 >= 0)
  VAR_16 = VAR_11;
out:
 return VAR_16;
}
