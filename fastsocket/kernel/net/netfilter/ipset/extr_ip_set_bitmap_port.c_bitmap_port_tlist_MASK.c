
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {scalar_t__* args; } ;
struct ip_set {struct bitmap_port* data; } ;
struct bitmap_port {scalar_t__ last_port; scalar_t__ first_port; unsigned long* members; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned long const) ;
 int FUNC_5 (unsigned long const) ;
 int FUNC_6 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (struct sk_buff*,struct nlattr*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(const struct ip_set *VAR_5,
    struct sk_buff *VAR_6, struct netlink_callback *VAR_7)
{
 const struct bitmap_port *VAR_8 = VAR_5->data;
 struct nlattr *VAR_9, *VAR_10;
 u16 VAR_11, VAR_12 = VAR_7->args[2];
 u16 VAR_13 = VAR_8->last_port - VAR_8->first_port;
 const unsigned long *VAR_14 = VAR_8->members;

 VAR_9 = FUNC_7(VAR_6, VAR_1);
 if (!VAR_9)
  return -VAR_0;
 for (; VAR_7->args[2] <= VAR_13; VAR_7->args[2]++) {
  VAR_11 = VAR_7->args[2];
  if (!FUNC_5(VAR_14[VAR_11]))
   continue;
  VAR_10 = FUNC_7(VAR_6, VAR_2);
  if (!VAR_10) {
   if (VAR_11 == VAR_12) {
    FUNC_8(VAR_6, VAR_9);
    return -VAR_0;
   } else
    goto nla_put_failure;
  }
  FUNC_0(VAR_6, VAR_3,
         FUNC_3(VAR_8->first_port + VAR_11));
  FUNC_1(VAR_6, VAR_4,
         FUNC_2(FUNC_4(VAR_14[VAR_11])));
  FUNC_6(VAR_6, VAR_10);
 }
 FUNC_6(VAR_6, VAR_9);


 VAR_7->args[2] = 0;

 return 0;

nla_put_failure:
 FUNC_8(VAR_6, VAR_10);
 FUNC_6(VAR_6, VAR_9);
 if (FUNC_9(VAR_11 == VAR_12)) {
  VAR_7->args[2] = 0;
  return -VAR_0;
 }
 return 0;
}
