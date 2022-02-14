
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_match_param {struct xt_conntrack_mtinfo1* matchinfo; } ;
struct xt_conntrack_mtinfo1 {int status_mask; int state_mask; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_buff const*,struct xt_match_param const*,int ,int ) ;

__attribute__((used)) static bool
FUNC_1(const struct sk_buff *VAR_0, const struct xt_match_param *VAR_1)
{
 const struct xt_conntrack_mtinfo1 *VAR_2 = VAR_1->matchinfo;

 return FUNC_0(VAR_0, VAR_1, VAR_2->state_mask, VAR_2->status_mask);
}
