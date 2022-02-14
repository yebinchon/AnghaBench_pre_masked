
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
struct TYPE_2__ {int (* getbcncfg ) (struct net_device*,int,int *) ;int (* getbcnrp ) (struct net_device*,int,int *) ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct dcbmsg* FUNC_0 (struct nlmsghdr*) ;
 int VAR_11 ;
 struct nlmsghdr* FUNC_1 (struct sk_buff*,int ,int ,int ,int,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_5 (struct sk_buff*,size_t) ;
 int FUNC_6 (struct nlattr**,int ,struct nlattr*,int ) ;
 int FUNC_7 (struct sk_buff*,int,int ) ;
 int FUNC_8 (struct sk_buff*,int,int ) ;
 int FUNC_9 (struct sk_buff*,struct nlmsghdr*) ;
 struct sk_buff* FUNC_10 (int ,int ) ;
 int FUNC_11 (struct sk_buff*,int *,int ) ;
 int FUNC_12 (struct net_device*,int,int *) ;
 int FUNC_13 (struct net_device*,int,int *) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_15, struct nlattr **VAR_16,
                            u32 VAR_17, u32 VAR_18, u16 VAR_19)
{
 struct sk_buff *VAR_20;
 struct nlmsghdr *VAR_21;
 struct dcbmsg *VAR_22;
 struct nlattr *VAR_23;
 struct nlattr *VAR_24[VAR_4 + 1];
 u8 VAR_25;
 u32 VAR_26;
 int VAR_27 = -VAR_9;
 bool VAR_28 = 0;
 int VAR_29;

 if (!VAR_16[VAR_1] || !VAR_15->dcbnl_ops->getbcnrp ||
     !VAR_15->dcbnl_ops->getbcncfg)
  return VAR_27;

 VAR_27 = FUNC_6(VAR_24, VAR_4,
                        VAR_16[VAR_1], VAR_13);

 if (VAR_27)
  goto err_out;

 VAR_20 = FUNC_10(VAR_11, VAR_10);
 if (!VAR_20)
  goto err_out;

 VAR_21 = FUNC_1(VAR_20, VAR_17, VAR_18, VAR_12, sizeof(*VAR_22), VAR_19);

 VAR_22 = FUNC_0(VAR_21);
 VAR_22->dcb_family = VAR_0;
 VAR_22->cmd = VAR_8;

 VAR_23 = FUNC_5(VAR_20, VAR_1);
 if (!VAR_23)
  goto err;

 if (VAR_24[VAR_2])
  VAR_28 = 1;

 for (VAR_29 = VAR_6; VAR_29 <= VAR_7; VAR_29++) {
  if (!VAR_28 && !VAR_24[VAR_29])
   continue;

  VAR_15->dcbnl_ops->getbcnrp(VAR_15, VAR_29 - VAR_6,
                              &VAR_25);
  VAR_27 = FUNC_8(VAR_20, VAR_29, VAR_25);
  if (VAR_27)
   goto err_bcn;
 }

 for (VAR_29 = VAR_3; VAR_29 <= VAR_5; VAR_29++) {
  if (!VAR_28 && !VAR_24[VAR_29])
   continue;

  VAR_15->dcbnl_ops->getbcncfg(VAR_15, VAR_29,
                               &VAR_26);
  VAR_27 = FUNC_7(VAR_20, VAR_29, VAR_26);
  if (VAR_27)
   goto err_bcn;
 }

 FUNC_4(VAR_20, VAR_23);

 FUNC_9(VAR_20, VAR_21);

 VAR_27 = FUNC_11(VAR_20, &VAR_14, VAR_17);
 if (VAR_27)
  goto err_out;

 return 0;

err_bcn:
 FUNC_3(VAR_20, VAR_23);
nlmsg_failure:
err:
 FUNC_2(VAR_20);
err_out:
 VAR_27 = -VAR_9;
 return VAR_27;
}
