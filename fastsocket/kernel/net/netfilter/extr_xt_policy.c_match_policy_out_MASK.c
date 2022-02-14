
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_policy_info {int flags; int len; struct xt_policy_elem* pol; } ;
struct xt_policy_elem {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dst_entry {int * xfrm; struct dst_entry* child; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct xt_policy_elem const*,unsigned short) ;
 struct dst_entry* FUNC_1 (struct sk_buff const*) ;

__attribute__((used)) static int
FUNC_2(const struct sk_buff *VAR_1, const struct xt_policy_info *VAR_2,
   unsigned short VAR_3)
{
 const struct xt_policy_elem *VAR_4;
 const struct dst_entry *VAR_5 = FUNC_1(VAR_1);
 int VAR_6 = VAR_2->flags & VAR_0;
 int VAR_7, VAR_8;

 if (VAR_5->xfrm == ((void*)0))
  return -1;

 for (VAR_7 = 0; VAR_5 && VAR_5->xfrm; VAR_5 = VAR_5->child, VAR_7++) {
  VAR_8 = VAR_6 ? VAR_7 : 0;
  if (VAR_8 >= VAR_2->len)
   return 0;
  VAR_4 = &VAR_2->pol[VAR_8];

  if (FUNC_0(VAR_5->xfrm, VAR_4, VAR_3)) {
   if (!VAR_6)
    return 1;
  } else if (VAR_6)
   return 0;
 }

 return VAR_6 ? VAR_7 == VAR_2->len : 0;
}
