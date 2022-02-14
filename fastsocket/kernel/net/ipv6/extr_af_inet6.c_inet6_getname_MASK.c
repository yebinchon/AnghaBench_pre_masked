
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr_in6 {scalar_t__ sin6_scope_id; int sin6_addr; scalar_t__ sin6_port; scalar_t__ sin6_flowinfo; int sin6_family; } ;
struct sockaddr {int dummy; } ;
struct sock {int sk_state; scalar_t__ sk_bound_dev_if; } ;
struct ipv6_pinfo {int rcv_saddr; int saddr; scalar_t__ flow_label; scalar_t__ sndflow; int daddr; } ;
struct inet_sock {scalar_t__ sport; scalar_t__ dport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ipv6_pinfo* FUNC_0 (struct sock*) ;
 struct inet_sock* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct socket *VAR_5, struct sockaddr *VAR_6,
   int *VAR_7, int VAR_8)
{
 struct sockaddr_in6 *VAR_9=(struct sockaddr_in6 *)VAR_6;
 struct sock *VAR_10 = VAR_5->sk;
 struct inet_sock *VAR_11 = FUNC_1(VAR_10);
 struct ipv6_pinfo *VAR_12 = FUNC_0(VAR_10);

 VAR_9->sin6_family = VAR_0;
 VAR_9->sin6_flowinfo = 0;
 VAR_9->sin6_scope_id = 0;
 if (VAR_8) {
  if (!VAR_11->dport)
   return -VAR_1;
  if (((1 << VAR_10->sk_state) & (VAR_3 | VAR_4)) &&
      VAR_8 == 1)
   return -VAR_1;
  VAR_9->sin6_port = VAR_11->dport;
  FUNC_3(&VAR_9->sin6_addr, &VAR_12->daddr);
  if (VAR_12->sndflow)
   VAR_9->sin6_flowinfo = VAR_12->flow_label;
 } else {
  if (FUNC_2(&VAR_12->rcv_saddr))
   FUNC_3(&VAR_9->sin6_addr, &VAR_12->saddr);
  else
   FUNC_3(&VAR_9->sin6_addr, &VAR_12->rcv_saddr);

  VAR_9->sin6_port = VAR_11->sport;
 }
 if (FUNC_4(&VAR_9->sin6_addr) & VAR_2)
  VAR_9->sin6_scope_id = VAR_10->sk_bound_dev_if;
 *VAR_7 = sizeof(*VAR_9);
 return(0);
}
