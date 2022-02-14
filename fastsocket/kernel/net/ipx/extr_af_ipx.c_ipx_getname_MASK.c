
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_ipx {scalar_t__ sipx_zero; int sipx_type; int sipx_family; int sipx_port; struct sockaddr* sipx_node; scalar_t__ sipx_network; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_state; } ;
struct ipx_address {struct sockaddr_ipx* node; int sock; scalar_t__ net; } ;
struct ipx_sock {int type; int port; TYPE_1__* intrfc; struct sockaddr_ipx* node; struct ipx_address dest_addr; } ;
typedef int sipx ;
struct TYPE_2__ {struct sockaddr_ipx* if_node; scalar_t__ if_netnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct ipx_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sockaddr*,struct sockaddr_ipx*,int) ;
 int FUNC_2 (struct sockaddr*,char,int) ;

__attribute__((used)) static int FUNC_3(struct socket *VAR_4, struct sockaddr *VAR_5,
   int *VAR_6, int VAR_7)
{
 struct ipx_address *VAR_8;
 struct sockaddr_ipx VAR_9;
 struct sock *VAR_10 = VAR_4->sk;
 struct ipx_sock *VAR_11 = FUNC_0(VAR_10);
 int VAR_12;

 *VAR_6 = sizeof(struct sockaddr_ipx);

 if (VAR_7) {
  VAR_12 = -VAR_1;
  if (VAR_10->sk_state != VAR_3)
   goto out;

  VAR_8 = &VAR_11->dest_addr;
  VAR_9.sipx_network = VAR_8->net;
  VAR_9.sipx_port = VAR_8->sock;
  FUNC_1(VAR_9.sipx_node, VAR_8->node, VAR_2);
 } else {
  if (VAR_11->intrfc) {
   VAR_9.sipx_network = VAR_11->intrfc->if_netnum;



   FUNC_1(VAR_9.sipx_node, VAR_11->intrfc->if_node,
    VAR_2);


  } else {
   VAR_9.sipx_network = 0;
   FUNC_2(VAR_9.sipx_node, '\0', VAR_2);
  }

  VAR_9.sipx_port = VAR_11->port;
 }

 VAR_9.sipx_family = VAR_0;
 VAR_9.sipx_type = VAR_11->type;
 VAR_9.sipx_zero = 0;
 FUNC_1(VAR_5, &VAR_9, sizeof(VAR_9));

 VAR_12 = 0;
out:
 return VAR_12;
}
