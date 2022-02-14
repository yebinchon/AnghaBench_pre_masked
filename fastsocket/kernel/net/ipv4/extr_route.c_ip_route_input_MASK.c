
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ mark; } ;
struct TYPE_9__ {struct net_device* dev; int rt_next; } ;
struct TYPE_8__ {TYPE_3__ dst; } ;
struct TYPE_7__ {int fl4_dst; int fl4_src; int iif; int oif; int fl4_tos; scalar_t__ mark; } ;
struct rtable {TYPE_2__ u; TYPE_1__ fl; } ;
struct net_device {int ifindex; } ;
struct net {int dummy; } ;
struct in_device {int dummy; } ;
typedef int __be32 ;
struct TYPE_11__ {int protocol; } ;
struct TYPE_10__ {int chain; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct in_device*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct in_device* FUNC_2 (struct net_device*) ;
 struct net* FUNC_3 (struct net_device*) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct in_device*,int,int,int ) ;
 TYPE_5__* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int,int,int,struct net_device*,int) ;
 int FUNC_8 (struct sk_buff*,int,int,int,struct net_device*) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_11 (struct net*,struct net*) ;
 struct rtable* FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (struct net*) ;
 int FUNC_16 (struct net*) ;
 unsigned int FUNC_17 (int,int,int,int ) ;
 TYPE_4__* VAR_5 ;
 int FUNC_18 (struct rtable*) ;
 int FUNC_19 (struct sk_buff*,TYPE_3__*) ;

int FUNC_20(struct sk_buff *VAR_6, __be32 VAR_7, __be32 VAR_8,
     u8 VAR_9, struct net_device *VAR_10)
{
 struct rtable * VAR_11;
 unsigned VAR_12;
 int VAR_13 = VAR_10->ifindex;
 struct net *VAR_14;

 VAR_14 = FUNC_3(VAR_10);

 if (!FUNC_15(VAR_14))
  goto skip_cache;

 VAR_9 &= VAR_1;
 VAR_12 = FUNC_17(VAR_7, VAR_8, VAR_13, FUNC_16(VAR_14));

 FUNC_13();
 for (VAR_11 = FUNC_12(VAR_5[VAR_12].chain); VAR_11;
      VAR_11 = FUNC_12(VAR_11->u.dst.rt_next)) {
  if (((VAR_11->fl.fl4_dst ^ VAR_7) |
       (VAR_11->fl.fl4_src ^ VAR_8) |
       (VAR_11->fl.iif ^ VAR_13) |
       VAR_11->fl.oif |
       (VAR_11->fl.fl4_tos ^ VAR_9)) == 0 &&
      VAR_11->fl.mark == VAR_6->mark &&
      FUNC_11(FUNC_3(VAR_11->u.dst.dev), VAR_14) &&
      !FUNC_18(VAR_11)) {
   FUNC_4(&VAR_11->u.dst, VAR_4);
   FUNC_1(VAR_2);
   FUNC_14();
   FUNC_19(VAR_6, &VAR_11->u.dst);
   return 0;
  }
  FUNC_1(VAR_3);
 }
 FUNC_14();

skip_cache:
 if (FUNC_10(VAR_7)) {
  struct in_device *VAR_15;

  FUNC_13();
  if ((VAR_15 = FUNC_2(VAR_10)) != ((void*)0)) {
   int VAR_16 = FUNC_5(VAR_15, VAR_7, VAR_8,
    FUNC_6(VAR_6)->protocol);
   if (VAR_16




       ) {
    FUNC_14();
    return FUNC_7(VAR_6, VAR_7, VAR_8,
        VAR_9, VAR_10, VAR_16);
   }
  }
  FUNC_14();
  return -VAR_0;
 }
 return FUNC_8(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
}
