
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {int sk_omem_alloc; } ;
struct net {int dummy; } ;
struct ip_sf_socklist {int sl_count; int sl_max; int * sl_addr; int rcu; } ;
struct TYPE_7__ {scalar_t__ s_addr; } ;
struct TYPE_5__ {int s_addr; } ;
struct ip_mreqn {int imr_ifindex; TYPE_3__ imr_multiaddr; TYPE_1__ imr_address; } ;
struct ip_mreq_source {scalar_t__ imr_multiaddr; int imr_sourceaddr; int imr_interface; } ;
struct TYPE_6__ {scalar_t__ s_addr; } ;
struct TYPE_8__ {int imr_ifindex; TYPE_2__ imr_multiaddr; } ;
struct ip_mc_socklist {int sfmode; struct ip_sf_socklist* sflist; TYPE_4__ multi; struct ip_mc_socklist* next; } ;
struct inet_sock {struct ip_mc_socklist* mc_list; } ;
struct in_device {int dummy; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int ) ;
 struct inet_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct in_device*,scalar_t__*,int,int,int *,int) ;
 int FUNC_5 (struct in_device*,scalar_t__*,int,int,int *,int) ;
 struct in_device* FUNC_6 (struct net*,struct ip_mreqn*) ;
 int FUNC_7 (struct sock*,struct ip_mreqn*) ;
 int VAR_7 ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (struct ip_sf_socklist*,struct ip_sf_socklist*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 struct ip_sf_socklist* FUNC_13 (struct sock*,int ,int ) ;
 struct net* FUNC_14 (struct sock*) ;
 int VAR_8 ;

int FUNC_15(int VAR_9, int VAR_10, struct sock *VAR_11, struct
 ip_mreq_source *VAR_12, int VAR_13)
{
 int VAR_14;
 struct ip_mreqn VAR_15;
 __be32 VAR_16 = VAR_12->imr_multiaddr;
 struct ip_mc_socklist *VAR_17;
 struct in_device *VAR_18 = ((void*)0);
 struct inet_sock *VAR_19 = FUNC_3(VAR_11);
 struct ip_sf_socklist *VAR_20;
 struct net *VAR_21 = FUNC_14(VAR_11);
 int VAR_22 = 0;
 int VAR_23, VAR_24, VAR_25;

 if (!FUNC_8(VAR_16))
  return -VAR_1;

 FUNC_11();

 VAR_15.imr_multiaddr.s_addr = VAR_12->imr_multiaddr;
 VAR_15.imr_address.s_addr = VAR_12->imr_interface;
 VAR_15.imr_ifindex = VAR_13;
 VAR_18 = FUNC_6(VAR_21, &VAR_15);

 if (!VAR_18) {
  VAR_14 = -VAR_3;
  goto done;
 }
 VAR_14 = -VAR_0;

 for (VAR_17=VAR_19->mc_list; VAR_17; VAR_17=VAR_17->next) {
  if (VAR_17->multi.imr_multiaddr.s_addr == VAR_15.imr_multiaddr.s_addr
      && VAR_17->multi.imr_ifindex == VAR_15.imr_ifindex)
   break;
 }
 if (!VAR_17) {
  VAR_14 = -VAR_1;
  goto done;
 }

 if (VAR_17->sflist) {
  if (VAR_17->sfmode != VAR_10) {
   VAR_14 = -VAR_1;
   goto done;
  }
 } else if (VAR_17->sfmode != VAR_10) {

  FUNC_4(VAR_18, &VAR_12->imr_multiaddr, VAR_10, 0, ((void*)0), 0);
  FUNC_5(VAR_18, &VAR_12->imr_multiaddr, VAR_17->sfmode, 0,
   ((void*)0), 0);
  VAR_17->sfmode = VAR_10;
 }

 VAR_20 = VAR_17->sflist;
 if (!VAR_9) {
  if (!VAR_20)
   goto done;
  VAR_25 = !0;
  for (VAR_23=0; VAR_23<VAR_20->sl_count; VAR_23++) {
   VAR_25 = FUNC_9(&VAR_20->sl_addr[VAR_23], &VAR_12->imr_sourceaddr,
    sizeof(__be32));
   if (VAR_25 == 0)
    break;
  }
  if (VAR_25)
   goto done;


  if (VAR_20->sl_count == 1 && VAR_10 == VAR_6) {
   VAR_22 = 1;
   goto done;
  }


  FUNC_5(VAR_18, &VAR_12->imr_multiaddr, VAR_10, 1,
   &VAR_12->imr_sourceaddr, 1);

  for (VAR_24=VAR_23+1; VAR_24<VAR_20->sl_count; VAR_24++)
   VAR_20->sl_addr[VAR_24-1] = VAR_20->sl_addr[VAR_24];
  VAR_20->sl_count--;
  VAR_14 = 0;
  goto done;
 }


 if (VAR_20 && VAR_20->sl_count >= VAR_8) {
  VAR_14 = -VAR_2;
  goto done;
 }
 if (!VAR_20 || VAR_20->sl_count == VAR_20->sl_max) {
  struct ip_sf_socklist *VAR_26;
  int VAR_27 = VAR_5;

  if (VAR_20)
   VAR_27 += VAR_20->sl_max;
  VAR_26 = FUNC_13(VAR_11, FUNC_0(VAR_27), VAR_4);
  if (!VAR_26) {
   VAR_14 = -VAR_2;
   goto done;
  }
  VAR_26->sl_max = VAR_27;
  VAR_26->sl_count = VAR_27 - VAR_5;
  if (VAR_20) {
   for (VAR_23=0; VAR_23<VAR_20->sl_count; VAR_23++)
    VAR_26->sl_addr[VAR_23] = VAR_20->sl_addr[VAR_23];

   FUNC_1(FUNC_0(VAR_20->sl_max), &VAR_11->sk_omem_alloc);
   FUNC_2(&VAR_20->rcu, VAR_7);
  }
  FUNC_10(VAR_17->sflist, VAR_26);
  VAR_20 = VAR_26;
 }
 VAR_25 = 1;
 for (VAR_23=0; VAR_23<VAR_20->sl_count; VAR_23++) {
  VAR_25 = FUNC_9(&VAR_20->sl_addr[VAR_23], &VAR_12->imr_sourceaddr,
   sizeof(__be32));
  if (VAR_25 == 0)
   break;
 }
 if (VAR_25 == 0)
  goto done;
 for (VAR_24=VAR_20->sl_count-1; VAR_24>=VAR_23; VAR_24--)
  VAR_20->sl_addr[VAR_24+1] = VAR_20->sl_addr[VAR_24];
 VAR_20->sl_addr[VAR_23] = VAR_12->imr_sourceaddr;
 VAR_20->sl_count++;
 VAR_14 = 0;

 FUNC_4(VAR_18, &VAR_12->imr_multiaddr, VAR_10, 1,
  &VAR_12->imr_sourceaddr, 1);
done:
 FUNC_12();
 if (VAR_22)
  return FUNC_7(VAR_11, &VAR_15);
 return VAR_14;
}
