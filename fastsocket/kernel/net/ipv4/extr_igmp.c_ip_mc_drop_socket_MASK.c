
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_omem_alloc; } ;
struct net {int dummy; } ;
struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {TYPE_1__ imr_multiaddr; int imr_ifindex; } ;
struct ip_mc_socklist {int rcu; TYPE_2__ multi; int next; } ;
struct inet_sock {struct ip_mc_socklist* mc_list; } ;
struct in_device {int dummy; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct in_device*) ;
 struct inet_sock* FUNC_3 (struct sock*) ;
 struct in_device* FUNC_4 (struct net*,int ) ;
 int FUNC_5 (struct in_device*,int ) ;
 int FUNC_6 (struct sock*,struct ip_mc_socklist*,struct in_device*) ;
 int VAR_0 ;
 int FUNC_7 (struct ip_mc_socklist*,int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 struct net* FUNC_10 (struct sock*) ;

void FUNC_11(struct sock *VAR_1)
{
 struct inet_sock *VAR_2 = FUNC_3(VAR_1);
 struct ip_mc_socklist *VAR_3;
 struct net *VAR_4 = FUNC_10(VAR_1);

 if (VAR_2->mc_list == ((void*)0))
  return;

 FUNC_8();
 while ((VAR_3 = VAR_2->mc_list) != ((void*)0)) {
  struct in_device *VAR_5;
  FUNC_7(VAR_2->mc_list, VAR_3->next);

  VAR_5 = FUNC_4(VAR_4, VAR_3->multi.imr_ifindex);
  (void) FUNC_6(VAR_1, VAR_3, VAR_5);
  if (VAR_5 != ((void*)0)) {
   FUNC_5(VAR_5, VAR_3->multi.imr_multiaddr.s_addr);
   FUNC_2(VAR_5);
  }

  FUNC_0(sizeof(*VAR_3), &VAR_1->sk_omem_alloc);
  FUNC_1(&VAR_3->rcu, VAR_0);
 }
 FUNC_9();
}
