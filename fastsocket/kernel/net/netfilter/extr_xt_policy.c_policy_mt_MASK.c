
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_policy_info {int flags; } ;
struct xt_match_param {TYPE_1__* match; struct xt_policy_info* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff const*,struct xt_policy_info const*,int ) ;
 int FUNC_1 (struct sk_buff const*,struct xt_policy_info const*,int ) ;

__attribute__((used)) static bool
FUNC_2(const struct sk_buff *VAR_2, const struct xt_match_param *VAR_3)
{
 const struct xt_policy_info *VAR_4 = VAR_3->matchinfo;
 int VAR_5;

 if (VAR_4->flags & VAR_0)
  VAR_5 = FUNC_0(VAR_2, VAR_4, VAR_3->match->family);
 else
  VAR_5 = FUNC_1(VAR_2, VAR_4, VAR_3->match->family);

 if (VAR_5 < 0)
  VAR_5 = VAR_4->flags & VAR_1 ? 1 : 0;
 else if (VAR_4->flags & VAR_1)
  VAR_5 = 0;

 return VAR_5;
}
