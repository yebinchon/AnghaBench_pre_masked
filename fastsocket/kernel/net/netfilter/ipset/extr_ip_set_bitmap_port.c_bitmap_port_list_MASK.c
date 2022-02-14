
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {scalar_t__* args; } ;
struct ip_set {struct bitmap_port* data; } ;
struct bitmap_port {scalar_t__ last_port; scalar_t__ first_port; int members; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 int FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(const struct ip_set *VAR_4,
   struct sk_buff *VAR_5, struct netlink_callback *VAR_6)
{
 const struct bitmap_port *VAR_7 = VAR_4->data;
 struct nlattr *VAR_8, *VAR_9;
 u16 VAR_10, VAR_11 = VAR_6->args[2];
 u16 VAR_12 = VAR_7->last_port - VAR_7->first_port;

 VAR_8 = FUNC_3(VAR_5, VAR_1);
 if (!VAR_8)
  return -VAR_0;
 for (; VAR_6->args[2] <= VAR_12; VAR_6->args[2]++) {
  VAR_10 = VAR_6->args[2];
  if (!FUNC_5(VAR_10, VAR_7->members))
   continue;
  VAR_9 = FUNC_3(VAR_5, VAR_2);
  if (!VAR_9) {
   if (VAR_10 == VAR_11) {
    FUNC_4(VAR_5, VAR_8);
    return -VAR_0;
   } else
    goto nla_put_failure;
  }
  FUNC_0(VAR_5, VAR_3,
         FUNC_1(VAR_7->first_port + VAR_10));
  FUNC_2(VAR_5, VAR_9);
 }
 FUNC_2(VAR_5, VAR_8);

 VAR_6->args[2] = 0;

 return 0;

nla_put_failure:
 FUNC_4(VAR_5, VAR_9);
 FUNC_2(VAR_5, VAR_8);
 if (FUNC_6(VAR_10 == VAR_11)) {
  VAR_6->args[2] = 0;
  return -VAR_0;
 }
 return 0;
}
