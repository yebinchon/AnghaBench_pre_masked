
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_4__ {scalar_t__ s_addr; } ;
struct ip_mreqn {int imr_ifindex; TYPE_1__ imr_multiaddr; } ;
struct TYPE_5__ {scalar_t__ s_addr; } ;
struct TYPE_6__ {int imr_ifindex; TYPE_2__ imr_multiaddr; } ;
struct ip_mc_socklist {int sfmode; int * sflist; struct ip_mc_socklist* next; TYPE_3__ multi; } ;
struct inet_sock {struct ip_mc_socklist* mc_list; } ;
struct in_device {int dummy; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct inet_sock* FUNC_0 (struct sock*) ;
 struct in_device* FUNC_1 (struct net*,struct ip_mreqn*) ;
 int FUNC_2 (struct in_device*,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_3__*,struct ip_mreqn*,int) ;
 int FUNC_5 (struct ip_mc_socklist*,struct ip_mc_socklist*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 struct ip_mc_socklist* FUNC_8 (struct sock*,int,int ) ;
 struct net* FUNC_9 (struct sock*) ;
 int VAR_6 ;

int FUNC_10(struct sock *VAR_7 , struct ip_mreqn *VAR_8)
{
 int VAR_9;
 __be32 VAR_10 = VAR_8->imr_multiaddr.s_addr;
 struct ip_mc_socklist *VAR_11 = ((void*)0), *VAR_12;
 struct in_device *VAR_13;
 struct inet_sock *VAR_14 = FUNC_0(VAR_7);
 struct net *VAR_15 = FUNC_9(VAR_7);
 int VAR_16;
 int VAR_17 = 0;

 if (!FUNC_3(VAR_10))
  return -VAR_1;

 FUNC_6();

 VAR_13 = FUNC_1(VAR_15, VAR_8);

 if (!VAR_13) {
  VAR_11 = ((void*)0);
  VAR_9 = -VAR_3;
  goto done;
 }

 VAR_9 = -VAR_0;
 VAR_16 = VAR_8->imr_ifindex;
 for (VAR_12 = VAR_14->mc_list; VAR_12; VAR_12 = VAR_12->next) {
  if (VAR_12->multi.imr_multiaddr.s_addr == VAR_10 &&
      VAR_12->multi.imr_ifindex == VAR_16)
   goto done;
  VAR_17++;
 }
 VAR_9 = -VAR_2;
 if (VAR_17 >= VAR_6)
  goto done;
 VAR_11 = FUNC_8(VAR_7, sizeof(*VAR_11), VAR_4);
 if (VAR_11 == ((void*)0))
  goto done;

 FUNC_4(&VAR_11->multi, VAR_8, sizeof(*VAR_8));
 VAR_11->next = VAR_14->mc_list;
 VAR_11->sflist = ((void*)0);
 VAR_11->sfmode = VAR_5;
 FUNC_5(VAR_14->mc_list, VAR_11);
 FUNC_2(VAR_13, VAR_10);
 VAR_9 = 0;
done:
 FUNC_7();
 return VAR_9;
}
