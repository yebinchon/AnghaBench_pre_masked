
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct dcbmsg {scalar_t__ dcb_pad; int cmd; int dcb_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dcbmsg* FUNC_0 (struct nlmsghdr*) ;
 int VAR_3 ;
 struct nlmsghdr* FUNC_1 (struct sk_buff*,int ,int ,int ,int,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ,int ) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct sk_buff*,int *,int ) ;

__attribute__((used)) static int FUNC_7(u8 VAR_5, u8 VAR_6, u8 VAR_7, u8 VAR_8, u32 VAR_9,
                       u32 VAR_10, u16 VAR_11)
{
 struct sk_buff *VAR_12;
 struct dcbmsg *VAR_13;
 struct nlmsghdr *VAR_14;
 int VAR_15 = -VAR_1;

 VAR_12 = FUNC_5(VAR_3, VAR_2);
 if (!VAR_12)
  return VAR_15;

 VAR_14 = FUNC_1(VAR_12, VAR_9, VAR_10, VAR_6, sizeof(*VAR_13), VAR_11);

 VAR_13 = FUNC_0(VAR_14);
 VAR_13->dcb_family = VAR_0;
 VAR_13->cmd = VAR_7;
 VAR_13->dcb_pad = 0;

 VAR_15 = FUNC_3(VAR_12, VAR_8, VAR_5);
 if (VAR_15)
  goto err;


 FUNC_4(VAR_12, VAR_14);
 VAR_15 = FUNC_6(VAR_12, &VAR_4, VAR_9);
 if (VAR_15)
  return -VAR_1;

 return 0;
nlmsg_failure:
err:
 FUNC_2(VAR_12);
 return VAR_15;
}
