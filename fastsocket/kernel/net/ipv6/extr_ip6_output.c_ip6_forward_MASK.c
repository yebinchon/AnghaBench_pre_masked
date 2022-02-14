
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ len; TYPE_3__* dev; int local_df; } ;
struct rt6_info {int rt6i_flags; } ;
struct TYPE_9__ {TYPE_1__* devconf_all; } ;
struct net {TYPE_2__ ipv6; } ;
struct neighbour {int primary_key; } ;
struct in6_addr {int dummy; } ;
struct ipv6hdr {int hop_limit; int saddr; struct in6_addr daddr; } ;
struct inet6_skb_parm {int ra; scalar_t__ srcrt; scalar_t__ frag_max_size; } ;
struct dst_entry {TYPE_3__* dev; struct neighbour* neighbour; } ;
struct TYPE_10__ {int hard_header_len; } ;
struct TYPE_8__ {scalar_t__ forwarding; scalar_t__ proxy_ndp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct inet6_skb_parm* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct net*,int ,int ) ;
 int FUNC_2 (struct net*,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (int ,int ,struct sk_buff*,TYPE_3__*,TYPE_3__*,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 struct net* FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (struct dst_entry*) ;
 int FUNC_6 (struct sk_buff*,int ,int ,scalar_t__,TYPE_3__*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct dst_entry*) ;
 int VAR_24 ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (int *) ;
 struct ipv6hdr* FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 int VAR_25 ;
 int FUNC_14 (struct sk_buff*,struct neighbour*,struct in6_addr*) ;
 scalar_t__ FUNC_15 (int *,struct net*,struct in6_addr*,TYPE_3__*,int ) ;
 scalar_t__ FUNC_16 (struct sk_buff*,int ) ;
 struct dst_entry* FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*) ;
 int* FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sk_buff*) ;
 scalar_t__ FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (int *,int ,struct sk_buff*) ;
 int FUNC_24 (struct sk_buff*) ;
 scalar_t__ FUNC_25 (struct dst_entry*,int) ;

int FUNC_26(struct sk_buff *VAR_26)
{
 struct dst_entry *VAR_27 = FUNC_17(VAR_26);
 struct ipv6hdr *VAR_28 = FUNC_12(VAR_26);
 struct inet6_skb_parm *VAR_29 = FUNC_0(VAR_26);
 struct net *VAR_30 = FUNC_4(VAR_27->dev);

 if (VAR_30->ipv6.devconf_all->forwarding == 0)
  goto error;

 if (FUNC_22(VAR_26))
  goto drop;

 if (!FUNC_23(((void*)0), VAR_23, VAR_26)) {
  FUNC_1(VAR_30, FUNC_8(VAR_27), VAR_11);
  goto drop;
 }

 FUNC_18(VAR_26);
 if (VAR_29->ra) {
  u8 *VAR_31 = FUNC_20(VAR_26) + VAR_29->ra;
  if (FUNC_7(VAR_26, (VAR_31[2]<<8) + VAR_31[3]))
   return 0;
 }




 if (VAR_28->hop_limit <= 1) {

  VAR_26->dev = VAR_27->dev;
  FUNC_6(VAR_26, VAR_8, VAR_5,
       0, VAR_26->dev);
  FUNC_2(VAR_30,
     FUNC_8(VAR_27), VAR_12);

  FUNC_13(VAR_26);
  return -VAR_2;
 }


 if (VAR_30->ipv6.devconf_all->proxy_ndp &&
     FUNC_15(&VAR_25, VAR_30, &VAR_28->daddr, VAR_26->dev, 0)) {
  int VAR_32 = FUNC_9(VAR_26);
  if (VAR_32 > 0)
   return FUNC_10(VAR_26);
  else if (VAR_32 < 0) {
   FUNC_1(VAR_30, FUNC_8(VAR_27),
          VAR_11);
   goto drop;
  }
 }

 if (!FUNC_24(VAR_26)) {
  FUNC_1(VAR_30, FUNC_8(VAR_27), VAR_11);
  goto drop;
 }
 VAR_27 = FUNC_17(VAR_26);





 if (VAR_26->dev == VAR_27->dev && VAR_27->neighbour && VAR_29->srcrt == 0 &&
     !FUNC_21(VAR_26)) {
  struct in6_addr *VAR_33 = ((void*)0);
  struct rt6_info *VAR_34;
  struct neighbour *VAR_35 = VAR_27->neighbour;






  VAR_34 = (struct rt6_info *) VAR_27;
  if ((VAR_34->rt6i_flags & VAR_22))
   VAR_33 = (struct in6_addr*)&VAR_35->primary_key;
  else
   VAR_33 = &VAR_28->daddr;




  if (FUNC_25(VAR_27, 1*VAR_3))
   FUNC_14(VAR_26, VAR_35, VAR_33);
 } else {
  int VAR_36 = FUNC_11(&VAR_28->saddr);


  if (VAR_36 == VAR_16 ||
      VAR_36 & (VAR_19 | VAR_18))
   goto error;
  if (VAR_36 & VAR_17) {
   FUNC_6(VAR_26, VAR_4,
    VAR_6, 0, VAR_26->dev);
   goto error;
  }
 }

 if ((!VAR_26->local_df && VAR_26->len > FUNC_5(VAR_27) && !FUNC_19(VAR_26)) ||
     (FUNC_0(VAR_26)->frag_max_size && FUNC_0(VAR_26)->frag_max_size > FUNC_5(VAR_27))) {

  VAR_26->dev = VAR_27->dev;
  FUNC_6(VAR_26, VAR_7, 0, FUNC_5(VAR_27), VAR_26->dev);
  FUNC_2(VAR_30,
     FUNC_8(VAR_27), VAR_13);
  FUNC_2(VAR_30,
     FUNC_8(VAR_27), VAR_9);
  FUNC_13(VAR_26);
  return -VAR_1;
 }

 if (FUNC_16(VAR_26, VAR_27->dev->hard_header_len)) {
  FUNC_1(VAR_30, FUNC_8(VAR_27), VAR_14);
  goto drop;
 }

 VAR_28 = FUNC_12(VAR_26);



 VAR_28->hop_limit--;

 FUNC_2(VAR_30, FUNC_8(VAR_27), VAR_15);
 return FUNC_3(VAR_21, VAR_20, VAR_26, VAR_26->dev, VAR_27->dev,
         VAR_24);

error:
 FUNC_2(VAR_30, FUNC_8(VAR_27), VAR_10);
drop:
 FUNC_13(VAR_26);
 return -VAR_0;
}
