
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct set_telem {int timeout; } ;
struct set_elem {scalar_t__ id; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {scalar_t__* args; } ;
struct list_set {scalar_t__ size; int timeout; } ;
struct ip_set {struct list_set* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_6 (struct sk_buff*,int ) ;
 struct set_elem* FUNC_7 (struct list_set const*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct list_set const*,scalar_t__) ;
 int FUNC_9 (struct sk_buff*,struct nlattr*) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(const struct ip_set *VAR_6,
       struct sk_buff *VAR_7, struct netlink_callback *VAR_8)
{
 const struct list_set *VAR_9 = VAR_6->data;
 struct nlattr *VAR_10, *VAR_11;
 u32 VAR_12, VAR_13 = VAR_8->args[2];
 const struct set_elem *VAR_14;

 VAR_10 = FUNC_6(VAR_7, VAR_1);
 if (!VAR_10)
  return -VAR_0;
 for (; VAR_8->args[2] < VAR_9->size; VAR_8->args[2]++) {
  VAR_12 = VAR_8->args[2];
  VAR_14 = FUNC_7(VAR_9, VAR_12);
  if (VAR_14->id == VAR_5)
   goto finish;
  if (FUNC_11(VAR_9->timeout) && FUNC_8(VAR_9, VAR_12))
   continue;
  VAR_11 = FUNC_6(VAR_7, VAR_2);
  if (!VAR_11) {
   if (VAR_12 == VAR_13) {
    FUNC_9(VAR_7, VAR_10);
    return -VAR_0;
   } else
    goto nla_put_failure;
  }
  FUNC_1(VAR_7, VAR_3,
          FUNC_3(VAR_14->id));
  if (FUNC_11(VAR_9->timeout)) {
   const struct set_telem *VAR_15 =
    (const struct set_telem *) VAR_14;
   FUNC_0(VAR_7, VAR_4,
          FUNC_2(FUNC_4(VAR_15->timeout)));
  }
  FUNC_5(VAR_7, VAR_11);
 }
finish:
 FUNC_5(VAR_7, VAR_10);

 VAR_8->args[2] = 0;
 return 0;

nla_put_failure:
 FUNC_9(VAR_7, VAR_11);
 FUNC_5(VAR_7, VAR_10);
 if (FUNC_10(VAR_12 == VAR_13)) {
  VAR_8->args[2] = 0;
  return -VAR_0;
 }
 return 0;
}
