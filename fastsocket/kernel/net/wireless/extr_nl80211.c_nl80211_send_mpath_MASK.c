
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int ifindex; } ;
struct mpath_info {int filled; int discovery_retries; int discovery_timeout; int flags; int exptime; int metric; int sn; int frame_qlen; int generation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
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
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int,int ) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ,int *) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_22, u32 VAR_23, u32 VAR_24,
    int VAR_25, struct net_device *VAR_26,
    u8 *VAR_27, u8 *VAR_28,
    struct mpath_info *VAR_29)
{
 void *VAR_30;
 struct nlattr *VAR_31;

 VAR_30 = FUNC_2(VAR_22, VAR_23, VAR_24, VAR_25, VAR_14);
 if (!VAR_30)
  return -1;

 if (FUNC_6(VAR_22, VAR_10, VAR_26->ifindex) ||
     FUNC_5(VAR_22, VAR_11, VAR_1, VAR_27) ||
     FUNC_5(VAR_22, VAR_13, VAR_1, VAR_28) ||
     FUNC_6(VAR_22, VAR_9, VAR_29->generation))
  goto nla_put_failure;

 VAR_31 = FUNC_4(VAR_22, VAR_12);
 if (!VAR_31)
  goto nla_put_failure;
 if ((VAR_29->filled & VAR_6) &&
     FUNC_6(VAR_22, VAR_19,
   VAR_29->frame_qlen))
  goto nla_put_failure;
 if (((VAR_29->filled & VAR_8) &&
      FUNC_6(VAR_22, VAR_21, VAR_29->sn)) ||
     ((VAR_29->filled & VAR_7) &&
      FUNC_6(VAR_22, VAR_20,
    VAR_29->metric)) ||
     ((VAR_29->filled & VAR_4) &&
      FUNC_6(VAR_22, VAR_17,
    VAR_29->exptime)) ||
     ((VAR_29->filled & VAR_5) &&
      FUNC_7(VAR_22, VAR_18,
   VAR_29->flags)) ||
     ((VAR_29->filled & VAR_3) &&
      FUNC_6(VAR_22, VAR_16,
    VAR_29->discovery_timeout)) ||
     ((VAR_29->filled & VAR_2) &&
      FUNC_7(VAR_22, VAR_15,
   VAR_29->discovery_retries)))
  goto nla_put_failure;

 FUNC_3(VAR_22, VAR_31);

 return FUNC_1(VAR_22, VAR_30);

 nla_put_failure:
 FUNC_0(VAR_22, VAR_30);
 return -VAR_0;
}
