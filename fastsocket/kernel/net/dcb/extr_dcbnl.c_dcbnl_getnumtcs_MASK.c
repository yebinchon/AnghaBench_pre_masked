
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
struct TYPE_2__ {int (* getnumtcs ) (struct net_device*,int,int *) ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct dcbmsg* FUNC_0 (struct nlmsghdr*) ;
 int VAR_7 ;
 struct nlmsghdr* FUNC_1 (struct sk_buff*,int ,int ,int ,int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_5 (struct sk_buff*,size_t) ;
 int FUNC_6 (struct nlattr**,int,struct nlattr*,int ) ;
 int FUNC_7 (struct sk_buff*,int,int ) ;
 int FUNC_8 (struct sk_buff*,struct nlmsghdr*) ;
 struct sk_buff* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct sk_buff*,int *,int ) ;
 int FUNC_11 (struct net_device*,int,int *) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_11, struct nlattr **VAR_12,
                           u32 VAR_13, u32 VAR_14, u16 VAR_15)
{
 struct sk_buff *VAR_16;
 struct nlmsghdr *VAR_17;
 struct dcbmsg *VAR_18;
 struct nlattr *VAR_19[VAR_4 + 1], *VAR_20;
 u8 VAR_21;
 int VAR_22 = -VAR_5;
 int VAR_23;
 int VAR_24 = 0;

 if (!VAR_12[VAR_1] || !VAR_11->dcbnl_ops->getnumtcs)
  return VAR_22;

 VAR_22 = FUNC_6(VAR_19, VAR_4, VAR_12[VAR_1],
                        VAR_9);
 if (VAR_22) {
  VAR_22 = -VAR_5;
  goto err_out;
 }

 VAR_16 = FUNC_9(VAR_7, VAR_6);
 if (!VAR_16) {
  VAR_22 = -VAR_5;
  goto err_out;
 }

 VAR_17 = FUNC_1(VAR_16, VAR_13, VAR_14, VAR_8, sizeof(*VAR_18), VAR_15);

 VAR_18 = FUNC_0(VAR_17);
 VAR_18->dcb_family = VAR_0;
 VAR_18->cmd = VAR_2;

 VAR_20 = FUNC_5(VAR_16, VAR_1);
 if (!VAR_20) {
  VAR_22 = -VAR_5;
  goto err;
 }

 if (VAR_19[VAR_3])
  VAR_24 = 1;

 for (VAR_23 = VAR_3+1; VAR_23 <= VAR_4; VAR_23++) {
  if (!VAR_24 && !VAR_19[VAR_23])
   continue;

  VAR_22 = VAR_11->dcbnl_ops->getnumtcs(VAR_11, VAR_23, &VAR_21);
  if (!VAR_22) {
   VAR_22 = FUNC_7(VAR_16, VAR_23, VAR_21);

   if (VAR_22) {
    FUNC_3(VAR_16, VAR_20);
    VAR_22 = -VAR_5;
    goto err;
   }
  } else {
   goto err;
  }
 }
 FUNC_4(VAR_16, VAR_20);

 FUNC_8(VAR_16, VAR_17);

 VAR_22 = FUNC_10(VAR_16, &VAR_10, VAR_13);
 if (VAR_22) {
  VAR_22 = -VAR_5;
  goto err_out;
 }

 return 0;
nlmsg_failure:
err:
 FUNC_2(VAR_16);
err_out:
 return VAR_22;
}
