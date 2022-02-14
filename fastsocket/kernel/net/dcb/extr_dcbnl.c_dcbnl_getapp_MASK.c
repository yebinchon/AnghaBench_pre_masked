
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {TYPE_1__* dcbnl_ops; } ;
struct dcbmsg {int cmd; int dcb_family; } ;
struct dcb_app {scalar_t__ selector; int protocol; } ;
struct TYPE_2__ {scalar_t__ (* getapp ) (struct net_device*,scalar_t__,int ) ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct dcbmsg* FUNC_0 (struct nlmsghdr*) ;
 int VAR_11 ;
 struct nlmsghdr* FUNC_1 (struct sk_buff*,int ,int ,int ,int,int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (struct net_device*,struct dcb_app*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct nlattr*) ;
 scalar_t__ FUNC_5 (struct nlattr*) ;
 int FUNC_6 (struct sk_buff*,struct nlattr*) ;
 int FUNC_7 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_8 (struct sk_buff*,size_t) ;
 int FUNC_9 (struct nlattr**,int ,struct nlattr*,int ) ;
 int FUNC_10 (struct sk_buff*,size_t,int ) ;
 int FUNC_11 (struct sk_buff*,size_t,scalar_t__) ;
 int FUNC_12 (struct sk_buff*,struct nlmsghdr*) ;
 struct sk_buff* FUNC_13 (int ,int ) ;
 int FUNC_14 (struct sk_buff*,int *,int ) ;
 scalar_t__ FUNC_15 (struct net_device*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_16(struct net_device *VAR_15, struct nlattr **VAR_16,
                        u32 VAR_17, u32 VAR_18, u16 VAR_19)
{
 struct sk_buff *VAR_20;
 struct nlmsghdr *VAR_21;
 struct dcbmsg *VAR_22;
 struct nlattr *VAR_23;
 struct nlattr *VAR_24[VAR_3 + 1];
 u16 VAR_25;
 u8 VAR_26, VAR_27;
 int VAR_28 = -VAR_9;

 if (!VAR_16[VAR_7])
  goto out;

 VAR_28 = FUNC_9(VAR_24, VAR_3, VAR_16[VAR_7],
                        VAR_13);
 if (VAR_28)
  goto out;

 VAR_28 = -VAR_9;

 if ((!VAR_24[VAR_2]) ||
     (!VAR_24[VAR_1]))
  goto out;


 VAR_27 = FUNC_5(VAR_24[VAR_2]);
 if ((VAR_27 != VAR_5) &&
     (VAR_27 != VAR_6))
  goto out;

 VAR_25 = FUNC_4(VAR_24[VAR_1]);

 if (VAR_15->dcbnl_ops->getapp) {
  VAR_26 = VAR_15->dcbnl_ops->getapp(VAR_15, VAR_27, VAR_25);
 } else {
  struct dcb_app VAR_29 = {
     .selector = VAR_27,
     .protocol = VAR_25,
         };
  VAR_26 = FUNC_2(VAR_15, &VAR_29);
 }


 VAR_20 = FUNC_13(VAR_11, VAR_10);
 if (!VAR_20)
  goto out;

 VAR_21 = FUNC_1(VAR_20, VAR_17, VAR_18, VAR_12, sizeof(*VAR_22), VAR_19);
 VAR_22 = FUNC_0(VAR_21);
 VAR_22->dcb_family = VAR_0;
 VAR_22->cmd = VAR_8;

 VAR_23 = FUNC_8(VAR_20, VAR_7);
 if (!VAR_23)
  goto out_cancel;

 VAR_28 = FUNC_11(VAR_20, VAR_2, VAR_27);
 if (VAR_28)
  goto out_cancel;

 VAR_28 = FUNC_10(VAR_20, VAR_1, VAR_25);
 if (VAR_28)
  goto out_cancel;

 VAR_28 = FUNC_11(VAR_20, VAR_4, VAR_26);
 if (VAR_28)
  goto out_cancel;

 FUNC_7(VAR_20, VAR_23);
 FUNC_12(VAR_20, VAR_21);

 VAR_28 = FUNC_14(VAR_20, &VAR_14, VAR_17);
 if (VAR_28)
  goto nlmsg_failure;

 goto out;

out_cancel:
 FUNC_6(VAR_20, VAR_23);
nlmsg_failure:
 FUNC_3(VAR_20);
out:
 return VAR_28;
}
