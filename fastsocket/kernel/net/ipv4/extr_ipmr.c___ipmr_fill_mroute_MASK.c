
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct rtnexthop {int rtnh_hops; int rtnh_len; int rtnh_ifindex; scalar_t__ rtnh_flags; } ;
struct rtmsg {int rtm_type; } ;
struct rtattr {int rta_len; int rta_type; } ;
struct mr_table {TYPE_4__* vif_table; } ;
struct TYPE_5__ {int minvif; int maxvif; int* ttls; } ;
struct TYPE_6__ {TYPE_1__ res; } ;
struct mfc_cache {int mfc_parent; TYPE_2__ mfc_un; } ;
struct TYPE_8__ {TYPE_3__* dev; } ;
struct TYPE_7__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct sk_buff*,int ,int,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct mr_table*,int) ;
 int FUNC_4 (struct sk_buff*,int *) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int) ;
 int * FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct mr_table *VAR_6, struct sk_buff *VAR_7,
         struct mfc_cache *VAR_8, struct rtmsg *VAR_9)
{
 int VAR_10;
 struct rtnexthop *VAR_11;
 u8 *VAR_12 = FUNC_6(VAR_7);
 struct rtattr *VAR_13;


 if (VAR_8->mfc_parent >= VAR_2)
  return -VAR_1;

 if (FUNC_3(VAR_6, VAR_8->mfc_parent))
  FUNC_2(VAR_7, VAR_3, 4, &VAR_6->vif_table[VAR_8->mfc_parent].dev->ifindex);

 VAR_13 = (struct rtattr *)FUNC_5(VAR_7, FUNC_1(0));

 for (VAR_10 = VAR_8->mfc_un.res.minvif; VAR_10 < VAR_8->mfc_un.res.maxvif; VAR_10++) {
  if (FUNC_3(VAR_6, VAR_10) && VAR_8->mfc_un.res.ttls[VAR_10] < 255) {
   if (FUNC_7(VAR_7) < FUNC_0(FUNC_0(sizeof(*VAR_11)) + 4))
    goto rtattr_failure;
   VAR_11 = (struct rtnexthop *)FUNC_5(VAR_7, FUNC_0(sizeof(*VAR_11)));
   VAR_11->rtnh_flags = 0;
   VAR_11->rtnh_hops = VAR_8->mfc_un.res.ttls[VAR_10];
   VAR_11->rtnh_ifindex = VAR_6->vif_table[VAR_10].dev->ifindex;
   VAR_11->rtnh_len = sizeof(*VAR_11);
  }
 }
 VAR_13->rta_type = VAR_4;
 VAR_13->rta_len = FUNC_6(VAR_7) - (u8 *)VAR_13;
 VAR_9->rtm_type = VAR_5;
 return 1;

rtattr_failure:
 FUNC_4(VAR_7, VAR_12);
 return -VAR_0;
}
