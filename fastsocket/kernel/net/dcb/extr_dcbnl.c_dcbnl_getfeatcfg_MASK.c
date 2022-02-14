
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
struct TYPE_2__ {int (* getfeatcfg ) (struct net_device*,int,int *) ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct dcbmsg* FUNC_0 (struct nlmsghdr*) ;
 int VAR_10 ;
 struct nlmsghdr* FUNC_1 (struct sk_buff*,int ,int ,int ,int,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_5 (struct sk_buff*,size_t) ;
 int FUNC_6 (struct nlattr**,int,struct nlattr*,int ) ;
 int FUNC_7 (struct sk_buff*,int,int ) ;
 int FUNC_8 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_9 (struct sk_buff*,struct nlmsghdr*) ;
 struct sk_buff* FUNC_10 (int ,int ) ;
 int FUNC_11 (struct sk_buff*,int *,int ) ;
 int FUNC_12 (struct net_device*,int,int *) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_14, struct nlattr **VAR_15,
       u32 VAR_16, u32 VAR_17, u16 VAR_18)
{
 struct sk_buff *VAR_19;
 struct nlmsghdr *VAR_20;
 struct dcbmsg *VAR_21;
 struct nlattr *VAR_22[VAR_4 + 1], *VAR_23;
 u8 VAR_24;
 int VAR_25, VAR_26;
 int VAR_27 = 0;

 if (!VAR_14->dcbnl_ops->getfeatcfg)
  return -VAR_8;

 if (!VAR_15[VAR_1])
  return -VAR_5;

 VAR_25 = FUNC_6(VAR_22, VAR_4, VAR_15[VAR_1],
          VAR_12);
 if (VAR_25)
  goto err_out;

 VAR_19 = FUNC_10(VAR_10, VAR_9);
 if (!VAR_19) {
  VAR_25 = -VAR_7;
  goto err_out;
 }

 VAR_20 = FUNC_1(VAR_19, VAR_16, VAR_17, VAR_11, sizeof(*VAR_21), VAR_18);

 VAR_21 = FUNC_0(VAR_20);
 VAR_21->dcb_family = VAR_0;
 VAR_21->cmd = VAR_2;

 VAR_23 = FUNC_5(VAR_19, VAR_1);
 if (!VAR_23) {
  VAR_25 = -VAR_6;
  goto nla_put_failure;
 }

 if (VAR_22[VAR_3])
  VAR_27 = 1;

 for (VAR_26 = VAR_3+1; VAR_26 <= VAR_4; VAR_26++) {
  if (!VAR_27 && !VAR_22[VAR_26])
   continue;

  VAR_25 = VAR_14->dcbnl_ops->getfeatcfg(VAR_14, VAR_26, &VAR_24);
  if (!VAR_25)
   VAR_25 = FUNC_7(VAR_19, VAR_26, VAR_24);

  if (VAR_25) {
   FUNC_3(VAR_19, VAR_23);
   goto nla_put_failure;
  }
 }
 FUNC_4(VAR_19, VAR_23);

 FUNC_9(VAR_19, VAR_20);

 return FUNC_11(VAR_19, &VAR_13, VAR_16);
nla_put_failure:
 FUNC_8(VAR_19, VAR_20);
nlmsg_failure:
 FUNC_2(VAR_19);
err_out:
 return VAR_25;
}
