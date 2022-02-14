
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dummy; } ;
struct sockaddr_in6 {struct in6_addr sin6_addr; } ;
struct sock {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ipv6_pinfo {struct ipv6_mc_socklist* ipv6_mc_list; } ;
struct ipv6_mc_socklist {int sfmode; int sflock; struct ip6_sf_socklist* sflist; int addr; int ifindex; struct ipv6_mc_socklist* next; } ;
struct ip6_sf_socklist {int sl_count; int sl_max; struct in6_addr* sl_addr; } ;
struct inet6_dev {int lock; struct net_device* dev; } ;
struct group_source_req {int gsr_interface; int gsr_group; int gsr_source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct inet6_dev*) ;
 struct ipv6_pinfo* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct inet6_dev*,struct in6_addr*,int,int,struct in6_addr*,int) ;
 int FUNC_5 (struct inet6_dev*,struct in6_addr*,int,int,struct in6_addr*,int) ;
 struct inet6_dev* FUNC_6 (struct net*,struct in6_addr*,int ) ;
 scalar_t__ FUNC_7 (int *,struct in6_addr*) ;
 int FUNC_8 (struct in6_addr*) ;
 int VAR_7 ;
 int FUNC_9 (struct sock*,int ,struct in6_addr*) ;
 int FUNC_10 (struct in6_addr*,struct in6_addr*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct sock*,struct ip6_sf_socklist*,int ) ;
 struct ip6_sf_socklist* FUNC_14 (struct sock*,int ,int ) ;
 struct net* FUNC_15 (struct sock*) ;
 int VAR_8 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

int FUNC_18(int VAR_9, int VAR_10, struct sock *VAR_11,
 struct group_source_req *VAR_12)
{
 struct in6_addr *VAR_13, *VAR_14;
 struct ipv6_mc_socklist *VAR_15;
 struct net_device *VAR_16;
 struct inet6_dev *VAR_17;
 struct ipv6_pinfo *VAR_18 = FUNC_3(VAR_11);
 struct ip6_sf_socklist *VAR_19;
 struct net *VAR_20 = FUNC_15(VAR_11);
 int VAR_21, VAR_22, VAR_23;
 int VAR_24 = 0;
 int VAR_25 = 0;
 int VAR_26;

 VAR_13 = &((struct sockaddr_in6 *)&VAR_12->gsr_source)->sin6_addr;
 VAR_14 = &((struct sockaddr_in6 *)&VAR_12->gsr_group)->sin6_addr;

 if (!FUNC_8(VAR_14))
  return -VAR_1;

 VAR_17 = FUNC_6(VAR_20, VAR_14, VAR_12->gsr_interface);
 if (!VAR_17)
  return -VAR_3;
 VAR_16 = VAR_17->dev;

 VAR_26 = -VAR_0;

 FUNC_11(&VAR_7);
 for (VAR_15=VAR_18->ipv6_mc_list; VAR_15; VAR_15=VAR_15->next) {
  if (VAR_12->gsr_interface && VAR_15->ifindex != VAR_12->gsr_interface)
   continue;
  if (FUNC_7(&VAR_15->addr, VAR_14))
   break;
 }
 if (!VAR_15) {
  VAR_26 = -VAR_1;
  goto done;
 }

 if (VAR_15->sflist) {
  if (VAR_15->sfmode != VAR_10) {
   VAR_26 = -VAR_1;
   goto done;
  }
 } else if (VAR_15->sfmode != VAR_10) {

  FUNC_4(VAR_17, VAR_14, VAR_10, 0, ((void*)0), 0);
  FUNC_5(VAR_17, VAR_14, VAR_15->sfmode, 0, ((void*)0), 0);
  VAR_15->sfmode = VAR_10;
 }

 FUNC_16(&VAR_15->sflock);
 VAR_25 = 1;

 VAR_19 = VAR_15->sflist;
 if (!VAR_9) {
  if (!VAR_19)
   goto done;
  VAR_23 = !0;
  for (VAR_21=0; VAR_21<VAR_19->sl_count; VAR_21++) {
   VAR_23 = FUNC_10(&VAR_19->sl_addr[VAR_21], VAR_13,
    sizeof(struct in6_addr));
   if (VAR_23 == 0)
    break;
  }
  if (VAR_23)
   goto done;


  if (VAR_19->sl_count == 1 && VAR_10 == VAR_6) {
   VAR_24 = 1;
   goto done;
  }


  FUNC_5(VAR_17, VAR_14, VAR_10, 1, VAR_13, 1);

  for (VAR_22=VAR_21+1; VAR_22<VAR_19->sl_count; VAR_22++)
   VAR_19->sl_addr[VAR_22-1] = VAR_19->sl_addr[VAR_22];
  VAR_19->sl_count--;
  VAR_26 = 0;
  goto done;
 }


 if (VAR_19 && VAR_19->sl_count >= VAR_8) {
  VAR_26 = -VAR_2;
  goto done;
 }
 if (!VAR_19 || VAR_19->sl_count == VAR_19->sl_max) {
  struct ip6_sf_socklist *VAR_27;
  int VAR_28 = VAR_5;

  if (VAR_19)
   VAR_28 += VAR_19->sl_max;
  VAR_27 = FUNC_14(VAR_11, FUNC_0(VAR_28), VAR_4);
  if (!VAR_27) {
   VAR_26 = -VAR_2;
   goto done;
  }
  VAR_27->sl_max = VAR_28;
  VAR_27->sl_count = VAR_28 - VAR_5;
  if (VAR_19) {
   for (VAR_21=0; VAR_21<VAR_19->sl_count; VAR_21++)
    VAR_27->sl_addr[VAR_21] = VAR_19->sl_addr[VAR_21];
   FUNC_13(VAR_11, VAR_19, FUNC_0(VAR_19->sl_max));
  }
  VAR_15->sflist = VAR_19 = VAR_27;
 }
 VAR_23 = 1;
 for (VAR_21=0; VAR_21<VAR_19->sl_count; VAR_21++) {
  VAR_23 = FUNC_10(&VAR_19->sl_addr[VAR_21], VAR_13, sizeof(struct in6_addr));
  if (VAR_23 == 0)
   break;
 }
 if (VAR_23 == 0)
  goto done;
 for (VAR_22=VAR_19->sl_count-1; VAR_22>=VAR_21; VAR_22--)
  VAR_19->sl_addr[VAR_22+1] = VAR_19->sl_addr[VAR_22];
 VAR_19->sl_addr[VAR_21] = *VAR_13;
 VAR_19->sl_count++;
 VAR_26 = 0;

 FUNC_4(VAR_17, VAR_14, VAR_10, 1, VAR_13, 1);
done:
 if (VAR_25)
  FUNC_17(&VAR_15->sflock);
 FUNC_12(&VAR_7);
 FUNC_12(&VAR_17->lock);
 FUNC_2(VAR_17);
 FUNC_1(VAR_16);
 if (VAR_24)
  return FUNC_9(VAR_11, VAR_12->gsr_interface, VAR_14);
 return VAR_26;
}
