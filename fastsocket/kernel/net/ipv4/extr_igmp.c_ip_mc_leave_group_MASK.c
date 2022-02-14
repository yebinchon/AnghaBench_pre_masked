
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sock {int sk_omem_alloc; } ;
struct net {int dummy; } ;
struct TYPE_8__ {scalar_t__ s_addr; } ;
struct TYPE_6__ {scalar_t__ s_addr; } ;
struct ip_mreqn {scalar_t__ imr_ifindex; TYPE_3__ imr_address; TYPE_1__ imr_multiaddr; } ;
struct TYPE_9__ {scalar_t__ s_addr; } ;
struct TYPE_7__ {scalar_t__ s_addr; } ;
struct TYPE_10__ {scalar_t__ imr_ifindex; TYPE_4__ imr_address; TYPE_2__ imr_multiaddr; } ;
struct ip_mc_socklist {int rcu; struct ip_mc_socklist* next; TYPE_5__ multi; } ;
struct inet_sock {struct ip_mc_socklist* mc_list; } ;
struct in_device {int dummy; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *,int ) ;
 struct inet_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct in_device*,scalar_t__) ;
 struct in_device* FUNC_4 (struct net*,struct ip_mreqn*) ;
 int FUNC_5 (struct sock*,struct ip_mc_socklist*,struct in_device*) ;
 int VAR_2 ;
 int FUNC_6 (struct ip_mc_socklist*,struct ip_mc_socklist*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 struct net* FUNC_9 (struct sock*) ;

int FUNC_10(struct sock *VAR_3, struct ip_mreqn *VAR_4)
{
 struct inet_sock *VAR_5 = FUNC_2(VAR_3);
 struct ip_mc_socklist *VAR_6, **VAR_7;
 struct in_device *VAR_8;
 struct net *VAR_9 = FUNC_9(VAR_3);
 __be32 VAR_10 = VAR_4->imr_multiaddr.s_addr;
 u32 VAR_11;
 int VAR_12 = -VAR_0;

 FUNC_7();
 VAR_8 = FUNC_4(VAR_9, VAR_4);
 VAR_11 = VAR_4->imr_ifindex;
 for (VAR_7 = &VAR_5->mc_list; (VAR_6 = *VAR_7) != ((void*)0); VAR_7 = &VAR_6->next) {
  if (VAR_6->multi.imr_multiaddr.s_addr != VAR_10)
   continue;
  if (VAR_11) {
   if (VAR_6->multi.imr_ifindex != VAR_11)
    continue;
  } else if (VAR_4->imr_address.s_addr && VAR_4->imr_address.s_addr !=
    VAR_6->multi.imr_address.s_addr)
   continue;

  (void) FUNC_5(VAR_3, VAR_6, VAR_8);

  FUNC_6(*VAR_7, VAR_6->next);

  if (VAR_8)
   FUNC_3(VAR_8, VAR_10);
  FUNC_8();

  FUNC_0(sizeof(*VAR_6), &VAR_3->sk_omem_alloc);
  FUNC_1(&VAR_6->rcu, VAR_2);
  return 0;
 }
 if (!VAR_8)
  VAR_12 = -VAR_1;
 FUNC_8();
 return VAR_12;
}
