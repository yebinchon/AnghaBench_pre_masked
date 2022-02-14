
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ pkt_type; struct net_device* dev; } ;
struct TYPE_6__ {struct net_device* dev; } ;
struct TYPE_7__ {TYPE_1__ dst; } ;
struct rtable {int rt_type; TYPE_2__ u; } ;
struct net_device {int type; unsigned char* broadcast; int dev_addr; int addr_len; } ;
struct net {int dummy; } ;
struct neighbour {TYPE_3__* parms; scalar_t__ updated; } ;
struct in_device {TYPE_4__* arp_parms; } ;
struct arphdr {scalar_t__ ar_pro; scalar_t__ ar_hrd; scalar_t__ ar_op; } ;
typedef scalar_t__ __be32 ;
struct TYPE_10__ {int flags; } ;
struct TYPE_9__ {scalar_t__ proxy_delay; } ;
struct TYPE_8__ {scalar_t__ locktime; } ;



 int VAR_0 ;





 int const VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 int VAR_5 ;
 int const VAR_6 ;
 scalar_t__ FUNC_0 (struct in_device*) ;
 scalar_t__ FUNC_1 (struct in_device*) ;
 int FUNC_2 (struct in_device*) ;
 scalar_t__ FUNC_3 (struct net*,int ) ;
 int VAR_7 ;
 TYPE_5__* FUNC_4 (struct sk_buff*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct neighbour* FUNC_5 (int *,scalar_t__*,struct net_device*,int) ;
 int FUNC_6 (scalar_t__,scalar_t__,struct net_device*) ;
 scalar_t__ FUNC_7 (struct in_device*,struct net_device*,struct rtable*) ;
 scalar_t__ FUNC_8 (struct in_device*,struct net_device*,struct rtable*,scalar_t__,scalar_t__) ;
 struct arphdr* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct in_device*,scalar_t__,scalar_t__) ;
 int FUNC_11 (int const,int ,scalar_t__,struct net_device*,scalar_t__,unsigned char*,int ,unsigned char*) ;
 int VAR_14 ;
 int FUNC_12 (struct sk_buff*) ;
 struct net* FUNC_13 (struct net_device*) ;
 scalar_t__ FUNC_14 (int const) ;
 struct in_device* FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct in_device*) ;
 int FUNC_17 (struct net*,scalar_t__) ;
 scalar_t__ FUNC_18 (struct sk_buff*,scalar_t__,scalar_t__,int ,struct net_device*) ;
 scalar_t__ FUNC_19 (scalar_t__) ;
 scalar_t__ FUNC_20 (scalar_t__) ;
 int VAR_15 ;
 int FUNC_21 (scalar_t__*,unsigned char*,int) ;
 struct neighbour* FUNC_22 (int *,unsigned char*,scalar_t__*,struct net_device*) ;
 int FUNC_23 (struct neighbour*) ;
 int FUNC_24 (struct neighbour*,unsigned char*,int,int ) ;
 int FUNC_25 (int *,TYPE_4__*,struct sk_buff*) ;
 scalar_t__ FUNC_26 (int *,struct net*,scalar_t__*,struct net_device*,int ) ;
 struct rtable* FUNC_27 (struct sk_buff*) ;
 int FUNC_28 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_29(struct sk_buff *VAR_16)
{
 struct net_device *VAR_17 = VAR_16->dev;
 struct in_device *VAR_18 = FUNC_15(VAR_17);
 struct arphdr *VAR_19;
 unsigned char *VAR_20;
 struct rtable *VAR_21;
 unsigned char *VAR_22;
 __be32 VAR_23, VAR_24;
 u16 VAR_25 = VAR_17->type;
 int VAR_26;
 struct neighbour *VAR_27;
 struct net *VAR_28 = FUNC_13(VAR_17);





 if (VAR_18 == ((void*)0))
  goto out;

 VAR_19 = FUNC_9(VAR_16);

 switch (VAR_25) {
 default:
  if (VAR_19->ar_pro != FUNC_14(VAR_6) ||
      FUNC_14(VAR_25) != VAR_19->ar_hrd)
   goto out;
  break;
 case 132:
 case 129:
 case 131:
 case 130:
  if ((VAR_19->ar_hrd != FUNC_14(132) &&
       VAR_19->ar_hrd != FUNC_14(130)) ||
      VAR_19->ar_pro != FUNC_14(VAR_6))
   goto out;
  break;
 case 133:
  if (VAR_19->ar_pro != FUNC_14(VAR_4) ||
      VAR_19->ar_hrd != FUNC_14(133))
   goto out;
  break;
 case 128:
  if (VAR_19->ar_pro != FUNC_14(VAR_4) ||
      VAR_19->ar_hrd != FUNC_14(128))
   goto out;
  break;
 }



 if (VAR_19->ar_op != FUNC_14(VAR_1) &&
     VAR_19->ar_op != FUNC_14(VAR_2))
  goto out;




 VAR_20= (unsigned char *)(VAR_19+1);
 VAR_22 = VAR_20;
 VAR_20 += VAR_17->addr_len;
 FUNC_21(&VAR_23, VAR_20, 4);
 VAR_20 += 4;
 VAR_20 += VAR_17->addr_len;
 FUNC_21(&VAR_24, VAR_20, 4);




 if (FUNC_20(VAR_24) ||
     (!FUNC_2(VAR_18) && FUNC_19(VAR_24)))
  goto out;




 if (VAR_25 == VAR_0)
  VAR_22 = VAR_17->broadcast;
 if (VAR_23 == 0) {
  if (VAR_19->ar_op == FUNC_14(VAR_2) &&
      FUNC_17(VAR_28, VAR_24) == VAR_12 &&
      !FUNC_10(VAR_18, VAR_23, VAR_24))
   FUNC_11(VAR_1, VAR_5, VAR_23, VAR_17, VAR_24, VAR_22,
     VAR_17->dev_addr, VAR_22);
  goto out;
 }

 if (VAR_19->ar_op == FUNC_14(VAR_2) &&
     FUNC_18(VAR_16, VAR_24, VAR_23, 0, VAR_17) == 0) {

  VAR_21 = FUNC_27(VAR_16);
  VAR_26 = VAR_21->rt_type;

  if (VAR_26 == VAR_12) {
   int VAR_29 = 0;

   if (!VAR_29)
    VAR_29 |= FUNC_10(VAR_18,VAR_23,VAR_24);
   if (!VAR_29 && FUNC_0(VAR_18))
    VAR_29 |= FUNC_6(VAR_23,VAR_24,VAR_17);
   if (!VAR_29) {
    VAR_27 = FUNC_22(&VAR_14, VAR_22, &VAR_23, VAR_17);
    if (VAR_27) {
     FUNC_11(VAR_1,VAR_5,VAR_23,VAR_17,VAR_24,VAR_22,VAR_17->dev_addr,VAR_22);
     FUNC_23(VAR_27);
    }
   }
   goto out;
  } else if (FUNC_1(VAR_18)) {
   if (VAR_26 == VAR_13 &&
       (FUNC_7(VAR_18, VAR_17, VAR_21) ||
        FUNC_8(VAR_18, VAR_17, VAR_21, VAR_23, VAR_24) ||
        (VAR_21->u.dst.dev != VAR_17 &&
         FUNC_26(&VAR_14, VAR_28, &VAR_24, VAR_17, 0)))) {
    VAR_27 = FUNC_22(&VAR_14, VAR_22, &VAR_23, VAR_17);
    if (VAR_27)
     FUNC_23(VAR_27);

    if (FUNC_4(VAR_16)->flags & VAR_7 ||
        VAR_16->pkt_type == VAR_11 ||
        VAR_18->arp_parms->proxy_delay == 0) {
     FUNC_11(VAR_1,VAR_5,VAR_23,VAR_17,VAR_24,VAR_22,VAR_17->dev_addr,VAR_22);
    } else {
     FUNC_25(&VAR_14, VAR_18->arp_parms, VAR_16);
     FUNC_16(VAR_18);
     return 0;
    }
    goto out;
   }
  }
 }



 VAR_27 = FUNC_5(&VAR_14, &VAR_23, VAR_17, 0);

 if (FUNC_3(FUNC_13(VAR_17), VAR_3)) {




  if (VAR_27 == ((void*)0) &&
      VAR_19->ar_op == FUNC_14(VAR_1) &&
      FUNC_17(VAR_28, VAR_23) == VAR_13)
   VAR_27 = FUNC_5(&VAR_14, &VAR_23, VAR_17, 1);
 }

 if (VAR_27) {
  int VAR_30 = VAR_9;
  int VAR_31;






  VAR_31 = FUNC_28(VAR_15, VAR_27->updated + VAR_27->parms->locktime);




  if (VAR_19->ar_op != FUNC_14(VAR_1) ||
      VAR_16->pkt_type != VAR_11)
   VAR_30 = VAR_10;
  FUNC_24(VAR_27, VAR_22, VAR_30, VAR_31 ? VAR_8 : 0);
  FUNC_23(VAR_27);
 }

out:
 if (VAR_18)
  FUNC_16(VAR_18);
 FUNC_12(VAR_16);
 return 0;
}
