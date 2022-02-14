
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {scalar_t__* args; } ;
struct ipmac_telem {scalar_t__ match; scalar_t__ timeout; int ether; } ;
struct ip_set {struct bitmap_ipmac* data; } ;
struct bitmap_ipmac {scalar_t__ last_ip; scalar_t__ first_ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;
 struct ipmac_telem* FUNC_3 (struct bitmap_ipmac const*,scalar_t__) ;
 int FUNC_4 (struct ipmac_telem const*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_8 (struct sk_buff*,int ) ;
 int FUNC_9 (struct sk_buff*,struct nlattr*) ;

__attribute__((used)) static int
FUNC_10(const struct ip_set *VAR_9,
     struct sk_buff *VAR_10, struct netlink_callback *VAR_11)
{
 const struct bitmap_ipmac *VAR_12 = VAR_9->data;
 const struct ipmac_telem *VAR_13;
 struct nlattr *VAR_14, *VAR_15;
 u32 VAR_16, VAR_17 = VAR_11->args[2];
 u32 VAR_18, VAR_19 = VAR_12->last_ip - VAR_12->first_ip;

 VAR_14 = FUNC_8(VAR_10, VAR_2);
 if (!VAR_14)
  return -VAR_0;
 for (; VAR_11->args[2] <= VAR_19; VAR_11->args[2]++) {
  VAR_16 = VAR_11->args[2];
  VAR_13 = FUNC_3(VAR_12, VAR_16);
  if (!FUNC_4(VAR_13))
   continue;
  VAR_15 = FUNC_8(VAR_10, VAR_3);
  if (!VAR_15) {
   if (VAR_16 == VAR_17) {
    FUNC_9(VAR_10, VAR_14);
    return -VAR_0;
   } else
    goto nla_put_failure;
  }
  FUNC_1(VAR_10, VAR_5,
    FUNC_5(VAR_12->first_ip + VAR_16));
  if (VAR_13->match == VAR_7)
   FUNC_0(VAR_10, VAR_4, VAR_1,
    VAR_13->ether);
  VAR_18 = VAR_13->match == VAR_8 ? VAR_13->timeout
    : FUNC_6(VAR_13->timeout);
  FUNC_2(VAR_10, VAR_6, FUNC_5(VAR_18));
  FUNC_7(VAR_10, VAR_15);
 }
 FUNC_7(VAR_10, VAR_14);

 VAR_11->args[2] = 0;

 return 0;

nla_put_failure:
 FUNC_9(VAR_10, VAR_15);
 FUNC_7(VAR_10, VAR_14);
 return -VAR_0;
}
