
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct TYPE_2__ {scalar_t__ s_addr; } ;
struct sockaddr_in {int sin_zero; TYPE_1__ sin_addr; scalar_t__ sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct sock {int sk_state; } ;
struct inet_sock {scalar_t__ sport; scalar_t__ saddr; scalar_t__ rcv_saddr; scalar_t__ daddr; scalar_t__ dport; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct inet_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,int ,int) ;

int FUNC_2(struct socket *VAR_4, struct sockaddr *VAR_5,
   int *VAR_6, int VAR_7)
{
 struct sock *VAR_8 = VAR_4->sk;
 struct inet_sock *VAR_9 = FUNC_0(VAR_8);
 struct sockaddr_in *VAR_10 = (struct sockaddr_in *)VAR_5;

 VAR_10->sin_family = VAR_0;
 if (VAR_7) {
  if (!VAR_9->dport ||
      (((1 << VAR_8->sk_state) & (VAR_2 | VAR_3)) &&
       VAR_7 == 1))
   return -VAR_1;
  VAR_10->sin_port = VAR_9->dport;
  VAR_10->sin_addr.s_addr = VAR_9->daddr;
 } else {
  __be32 VAR_11 = VAR_9->rcv_saddr;
  if (!VAR_11)
   VAR_11 = VAR_9->saddr;
  VAR_10->sin_port = VAR_9->sport;
  VAR_10->sin_addr.s_addr = VAR_11;
 }
 FUNC_1(VAR_10->sin_zero, 0, sizeof(VAR_10->sin_zero));
 *VAR_6 = sizeof(*VAR_10);
 return 0;
}
