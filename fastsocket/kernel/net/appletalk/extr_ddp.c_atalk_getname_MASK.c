
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct TYPE_2__ {int s_node; int s_net; } ;
struct sockaddr_at {int sat_family; int sat_port; TYPE_1__ sat_addr; int sat_zero; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_state; } ;
struct atalk_sock {int src_port; int src_node; int src_net; int dest_port; int dest_node; int dest_net; } ;
typedef int sat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct atalk_sock* FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sockaddr*,struct sockaddr_at*,int) ;
 int FUNC_3 (int *,int ,int) ;
 scalar_t__ FUNC_4 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_5, struct sockaddr *VAR_6,
    int *VAR_7, int VAR_8)
{
 struct sockaddr_at VAR_9;
 struct sock *VAR_10 = VAR_5->sk;
 struct atalk_sock *VAR_11 = FUNC_0(VAR_10);

 if (FUNC_4(VAR_10, VAR_3))
  if (FUNC_1(VAR_10) < 0)
   return -VAR_1;

 *VAR_7 = sizeof(struct sockaddr_at);
 FUNC_3(&VAR_9.sat_zero, 0, sizeof(VAR_9.sat_zero));

 if (VAR_8) {
  if (VAR_10->sk_state != VAR_4)
   return -VAR_2;

  VAR_9.sat_addr.s_net = VAR_11->dest_net;
  VAR_9.sat_addr.s_node = VAR_11->dest_node;
  VAR_9.sat_port = VAR_11->dest_port;
 } else {
  VAR_9.sat_addr.s_net = VAR_11->src_net;
  VAR_9.sat_addr.s_node = VAR_11->src_node;
  VAR_9.sat_port = VAR_11->src_port;
 }

 VAR_9.sat_family = VAR_0;
 FUNC_2(VAR_6, &VAR_9, sizeof(VAR_9));
 return 0;
}
