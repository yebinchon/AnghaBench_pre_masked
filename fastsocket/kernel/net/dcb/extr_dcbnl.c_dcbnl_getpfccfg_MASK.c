
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
struct TYPE_2__ {int (* getpfccfg ) (struct net_device*,int,int *) ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct dcbmsg* FUNC_0 (struct nlmsghdr*) ;
 int VAR_9 ;
 struct nlmsghdr* FUNC_1 (struct sk_buff*,int ,int ,int ,int,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_5 (struct sk_buff*,size_t) ;
 int FUNC_6 (struct nlattr**,int ,struct nlattr*,int ) ;
 int FUNC_7 (struct sk_buff*,int,int ) ;
 int FUNC_8 (struct sk_buff*,struct nlmsghdr*) ;
 struct sk_buff* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct sk_buff*,int *,int ) ;
 int FUNC_11 (struct net_device*,int,int *) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_13, struct nlattr **VAR_14,
                           u32 VAR_15, u32 VAR_16, u16 VAR_17)
{
 struct sk_buff *VAR_18;
 struct nlmsghdr *VAR_19;
 struct dcbmsg *VAR_20;
 struct nlattr *VAR_21[VAR_6 + 1], *VAR_22;
 u8 VAR_23;
 int VAR_24 = -VAR_7;
 int VAR_25;
 int VAR_26 = 0;

 if (!VAR_14[VAR_1] || !VAR_13->dcbnl_ops->getpfccfg)
  return VAR_24;

 VAR_24 = FUNC_6(VAR_21, VAR_6,
                        VAR_14[VAR_1],
                        VAR_11);
 if (VAR_24)
  goto err_out;

 VAR_18 = FUNC_9(VAR_9, VAR_8);
 if (!VAR_18)
  goto err_out;

 VAR_19 = FUNC_1(VAR_18, VAR_15, VAR_16, VAR_10, sizeof(*VAR_20), VAR_17);

 VAR_20 = FUNC_0(VAR_19);
 VAR_20->dcb_family = VAR_0;
 VAR_20->cmd = VAR_2;

 VAR_22 = FUNC_5(VAR_18, VAR_1);
 if (!VAR_22)
  goto err;

 if (VAR_21[VAR_5])
  VAR_26 = 1;

 for (VAR_25 = VAR_3; VAR_25 <= VAR_4; VAR_25++) {
  if (!VAR_26 && !VAR_21[VAR_25])
   continue;

  VAR_13->dcbnl_ops->getpfccfg(VAR_13, VAR_25 - VAR_3,
                               &VAR_23);
  VAR_24 = FUNC_7(VAR_18, VAR_25, VAR_23);

  if (VAR_24) {
   FUNC_3(VAR_18, VAR_22);
   goto err;
  }
 }
 FUNC_4(VAR_18, VAR_22);

 FUNC_8(VAR_18, VAR_19);

 VAR_24 = FUNC_10(VAR_18, &VAR_12, VAR_15);
 if (VAR_24)
  goto err_out;

 return 0;
nlmsg_failure:
err:
 FUNC_2(VAR_18);
err_out:
 return -VAR_7;
}
