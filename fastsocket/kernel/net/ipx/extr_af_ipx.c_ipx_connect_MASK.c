
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {scalar_t__ type; int state; struct sock* sk; } ;
struct sockaddr_ipx {int sipx_type; int sipx_node; scalar_t__ sipx_port; scalar_t__ sipx_network; } ;
struct sockaddr {int dummy; } ;
struct sock {int sk_state; } ;
struct TYPE_4__ {int node; scalar_t__ sock; scalar_t__ net; } ;
struct ipx_sock {int type; TYPE_2__ dest_addr; TYPE_1__* intrfc; int port; } ;
struct ipx_route {int dummy; } ;
struct TYPE_3__ {int if_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct socket*,struct sockaddr*,int) ;
 scalar_t__ VAR_9 ;
 struct ipx_sock* FUNC_1 (struct sock*) ;
 struct ipx_route* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ipx_route*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_10, struct sockaddr *VAR_11,
 int VAR_12, int VAR_13)
{
 struct sock *VAR_14 = VAR_10->sk;
 struct ipx_sock *VAR_15 = FUNC_1(VAR_14);
 struct sockaddr_ipx *VAR_16;
 int VAR_17 = -VAR_0;
 struct ipx_route *VAR_18;

 VAR_14->sk_state = VAR_7;
 VAR_10->state = VAR_6;

 if (VAR_12 != sizeof(*VAR_16))
  goto out;
 VAR_16 = (struct sockaddr_ipx *)VAR_11;


 if (!VAR_15->port) {
  struct sockaddr_ipx VAR_19;

  VAR_19.sipx_port = 0;
  VAR_19.sipx_network = 0;
  VAR_17 = FUNC_0(VAR_10, (struct sockaddr *)&VAR_19,
         sizeof(struct sockaddr_ipx));
  if (VAR_17)
   goto out;
 }



 VAR_18 = FUNC_2(VAR_16->sipx_network);
 VAR_17 = -VAR_2;
 if (!VAR_18 && !(!VAR_16->sipx_network && VAR_9))
  goto out;

 VAR_15->dest_addr.net = VAR_16->sipx_network;
 VAR_15->dest_addr.sock = VAR_16->sipx_port;
 FUNC_4(VAR_15->dest_addr.node, VAR_16->sipx_node, VAR_3);
 VAR_15->type = VAR_16->sipx_type;

 if (VAR_10->type == VAR_4) {
  VAR_10->state = VAR_5;
  VAR_14->sk_state = VAR_8;
 }

 if (VAR_18)
  FUNC_3(VAR_18);
 VAR_17 = 0;
out:
 return VAR_17;
}
