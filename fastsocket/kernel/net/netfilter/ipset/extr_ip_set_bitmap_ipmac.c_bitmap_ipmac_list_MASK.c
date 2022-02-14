
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {scalar_t__* args; } ;
struct ipmac_elem {scalar_t__ match; int ether; } ;
struct ip_set {struct bitmap_ipmac* data; } ;
struct bitmap_ipmac {scalar_t__ last_ip; scalar_t__ first_ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 struct ipmac_elem* FUNC_2 (struct bitmap_ipmac const*,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*,struct nlattr*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(const struct ip_set *VAR_8,
    struct sk_buff *VAR_9, struct netlink_callback *VAR_10)
{
 const struct bitmap_ipmac *VAR_11 = VAR_8->data;
 const struct ipmac_elem *VAR_12;
 struct nlattr *VAR_13, *VAR_14;
 u32 VAR_15, VAR_16 = VAR_10->args[2];
 u32 VAR_17 = VAR_11->last_ip - VAR_11->first_ip;

 VAR_13 = FUNC_5(VAR_9, VAR_2);
 if (!VAR_13)
  return -VAR_0;
 for (; VAR_10->args[2] <= VAR_17; VAR_10->args[2]++) {
  VAR_15 = VAR_10->args[2];
  VAR_12 = FUNC_2(VAR_11, VAR_15);
  if (VAR_12->match == VAR_6)
   continue;
  VAR_14 = FUNC_5(VAR_9, VAR_3);
  if (!VAR_14) {
   if (VAR_15 == VAR_16) {
    FUNC_6(VAR_9, VAR_13);
    return -VAR_0;
   } else
    goto nla_put_failure;
  }
  FUNC_1(VAR_9, VAR_5,
    FUNC_3(VAR_11->first_ip + VAR_15));
  if (VAR_12->match == VAR_7)
   FUNC_0(VAR_9, VAR_4, VAR_1,
    VAR_12->ether);
  FUNC_4(VAR_9, VAR_14);
 }
 FUNC_4(VAR_9, VAR_13);

 VAR_10->args[2] = 0;

 return 0;

nla_put_failure:
 FUNC_6(VAR_9, VAR_14);
 FUNC_4(VAR_9, VAR_13);
 if (FUNC_7(VAR_15 == VAR_16)) {
  VAR_10->args[2] = 0;
  return -VAR_0;
 }
 return 0;
}
