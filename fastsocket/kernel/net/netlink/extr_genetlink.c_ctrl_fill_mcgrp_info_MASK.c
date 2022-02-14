
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct genl_multicast_group {int name; int id; TYPE_1__* family; } ;
struct TYPE_2__ {int id; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;
 int VAR_6 ;
 int FUNC_3 (struct sk_buff*,void*) ;
 int FUNC_4 (struct sk_buff*,void*) ;
 void* FUNC_5 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_6 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_8(struct genl_multicast_group *VAR_7, u32 VAR_8,
    u32 VAR_9, u32 VAR_10, struct sk_buff *VAR_11,
    u8 VAR_12)
{
 void *VAR_13;
 struct nlattr *VAR_14;
 struct nlattr *VAR_15;

 VAR_13 = FUNC_5(VAR_11, VAR_8, VAR_9, &VAR_6, VAR_10, VAR_12);
 if (VAR_13 == ((void*)0))
  return -1;

 FUNC_0(VAR_11, VAR_1, VAR_7->family->name);
 FUNC_1(VAR_11, VAR_0, VAR_7->family->id);

 VAR_14 = FUNC_7(VAR_11, VAR_2);
 if (VAR_14 == ((void*)0))
  goto nla_put_failure;

 VAR_15 = FUNC_7(VAR_11, 1);
 if (VAR_15 == ((void*)0))
  goto nla_put_failure;

 FUNC_2(VAR_11, VAR_3, VAR_7->id);
 FUNC_0(VAR_11, VAR_4,
         VAR_7->name);

 FUNC_6(VAR_11, VAR_15);
 FUNC_6(VAR_11, VAR_14);

 return FUNC_4(VAR_11, VAR_13);

nla_put_failure:
 FUNC_3(VAR_11, VAR_13);
 return -VAR_5;
}
