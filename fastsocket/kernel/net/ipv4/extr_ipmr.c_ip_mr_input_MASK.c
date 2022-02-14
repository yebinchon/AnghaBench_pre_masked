
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dev; } ;
struct net {int dummy; } ;
struct mr_table {scalar_t__ mroute_sk; } ;
struct mfc_cache {int dummy; } ;
struct TYPE_5__ {scalar_t__ router_alert; } ;
struct TYPE_8__ {int flags; TYPE_1__ opt; } ;
struct TYPE_7__ {scalar_t__ protocol; int daddr; int saddr; } ;
struct TYPE_6__ {int rt_flags; int fl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct net* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 TYPE_3__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct net*,struct mr_table*,struct sk_buff*,struct mfc_cache*,int) ;
 struct mfc_cache* FUNC_6 (struct mr_table*,int ,int ) ;
 int FUNC_7 (struct mr_table*,int,struct sk_buff*) ;
 int FUNC_8 (struct net*,int *,struct mr_table**) ;
 int FUNC_9 (struct mr_table*,int ) ;
 int FUNC_10 (struct sk_buff*) ;
 int VAR_6 ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (scalar_t__,struct sk_buff*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 struct sk_buff* FUNC_15 (struct sk_buff*,int ) ;
 TYPE_2__* FUNC_16 (struct sk_buff*) ;

int FUNC_17(struct sk_buff *VAR_7)
{
 struct mfc_cache *VAR_8;
 struct net *VAR_9 = FUNC_1(VAR_7->dev);
 int VAR_10 = FUNC_16(VAR_7)->rt_flags & VAR_5;
 struct mr_table *VAR_11;
 int VAR_12;




 if (FUNC_0(VAR_7)->flags&VAR_4)
  goto dont_forward;

 VAR_12 = FUNC_8(VAR_9, &FUNC_16(VAR_7)->fl, &VAR_11);
 if (VAR_12 < 0) {
  FUNC_10(VAR_7);
  return VAR_12;
 }

 if (!VAR_10) {
      if (FUNC_0(VAR_7)->opt.router_alert) {
       if (FUNC_2(VAR_7))
        return 0;
      } else if (FUNC_3(VAR_7)->protocol == VAR_3){






       FUNC_13(&VAR_6);
       if (VAR_11->mroute_sk) {
        FUNC_11(VAR_7);
        FUNC_12(VAR_11->mroute_sk, VAR_7);
        FUNC_14(&VAR_6);
        return 0;
       }
       FUNC_14(&VAR_6);
      }
 }

 FUNC_13(&VAR_6);
 VAR_8 = FUNC_6(VAR_11, FUNC_3(VAR_7)->saddr, FUNC_3(VAR_7)->daddr);




 if (VAR_8 == ((void*)0)) {
  int VAR_13;

  if (VAR_10) {
   struct sk_buff *VAR_14 = FUNC_15(VAR_7, VAR_2);
   FUNC_4(VAR_7);
   if (VAR_14 == ((void*)0)) {
    FUNC_14(&VAR_6);
    return -VAR_0;
   }
   VAR_7 = VAR_14;
  }

  VAR_13 = FUNC_9(VAR_11, VAR_7->dev);
  if (VAR_13 >= 0) {
   int VAR_15 = FUNC_7(VAR_11, VAR_13, VAR_7);
   FUNC_14(&VAR_6);

   return VAR_15;
  }
  FUNC_14(&VAR_6);
  FUNC_10(VAR_7);
  return -VAR_1;
 }

 FUNC_5(VAR_9, VAR_11, VAR_7, VAR_8, VAR_10);

 FUNC_14(&VAR_6);

 if (VAR_10)
  return FUNC_4(VAR_7);

 return 0;

dont_forward:
 if (VAR_10)
  return FUNC_4(VAR_7);
 FUNC_10(VAR_7);
 return 0;
}
