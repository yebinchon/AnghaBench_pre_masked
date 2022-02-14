
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {TYPE_1__* dcbnl_ops; } ;
struct dcbmsg {int cmd; int dcb_family; } ;
typedef int perm_addr ;
struct TYPE_2__ {int (* getpermhwaddr ) (struct net_device*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dcbmsg* FUNC_0 (struct nlmsghdr*) ;
 int VAR_6 ;
 struct nlmsghdr* FUNC_1 (struct sk_buff*,int ,int ,int ,int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct sk_buff*,int ,int,int *) ;
 int FUNC_5 (struct sk_buff*,struct nlmsghdr*) ;
 struct sk_buff* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct sk_buff*,int *,int ) ;
 int FUNC_8 (struct net_device*,int *) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_9, struct nlattr **VAR_10,
                                u32 VAR_11, u32 VAR_12, u16 VAR_13)
{
 struct sk_buff *VAR_14;
 struct nlmsghdr *VAR_15;
 struct dcbmsg *VAR_16;
 u8 VAR_17[VAR_5];
 int VAR_18 = -VAR_3;

 if (!VAR_9->dcbnl_ops->getpermhwaddr)
  return VAR_18;

 VAR_14 = FUNC_6(VAR_6, VAR_4);
 if (!VAR_14)
  goto err_out;

 VAR_15 = FUNC_1(VAR_14, VAR_11, VAR_12, VAR_7, sizeof(*VAR_16), VAR_13);

 VAR_16 = FUNC_0(VAR_15);
 VAR_16->dcb_family = VAR_0;
 VAR_16->cmd = VAR_2;

 FUNC_3(VAR_17, 0, sizeof(VAR_17));
 VAR_9->dcbnl_ops->getpermhwaddr(VAR_9, VAR_17);

 VAR_18 = FUNC_4(VAR_14, VAR_1, sizeof(VAR_17),
               VAR_17);

 FUNC_5(VAR_14, VAR_15);

 VAR_18 = FUNC_7(VAR_14, &VAR_8, VAR_11);
 if (VAR_18)
  goto err_out;

 return 0;

nlmsg_failure:
 FUNC_2(VAR_14);
err_out:
 return -VAR_3;
}
