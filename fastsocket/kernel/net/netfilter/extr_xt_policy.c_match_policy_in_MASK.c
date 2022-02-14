
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_policy_info {int flags; int len; struct xt_policy_elem* pol; } ;
struct xt_policy_elem {int dummy; } ;
struct sk_buff {struct sec_path* sp; } ;
struct sec_path {int len; int * xvec; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct xt_policy_elem const*,unsigned short) ;

__attribute__((used)) static int
FUNC_1(const struct sk_buff *VAR_1, const struct xt_policy_info *VAR_2,
  unsigned short VAR_3)
{
 const struct xt_policy_elem *VAR_4;
 const struct sec_path *VAR_5 = VAR_1->sp;
 int VAR_6 = VAR_2->flags & VAR_0;
 int VAR_7, VAR_8;

 if (VAR_5 == ((void*)0))
  return -1;
 if (VAR_6 && VAR_2->len != VAR_5->len)
  return 0;

 for (VAR_7 = VAR_5->len - 1; VAR_7 >= 0; VAR_7--) {
  VAR_8 = VAR_6 ? VAR_7 - VAR_5->len + 1 : 0;
  if (VAR_8 >= VAR_2->len)
   return 0;
  VAR_4 = &VAR_2->pol[VAR_8];

  if (FUNC_0(VAR_5->xvec[VAR_7], VAR_4, VAR_3)) {
   if (!VAR_6)
    return 1;
  } else if (VAR_6)
   return 0;
 }

 return VAR_6 ? 1 : 0;
}
