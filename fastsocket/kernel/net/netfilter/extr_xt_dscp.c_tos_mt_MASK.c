
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xt_tos_match_info {int tos_mask; int tos_value; int invert; } ;
struct xt_match_param {TYPE_1__* match; struct xt_tos_match_info* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int tos; } ;
struct TYPE_3__ {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff const*) ;

__attribute__((used)) static bool FUNC_3(const struct sk_buff *VAR_1, const struct xt_match_param *VAR_2)
{
 const struct xt_tos_match_info *VAR_3 = VAR_2->matchinfo;

 if (VAR_2->match->family == VAR_0)
  return ((FUNC_0(VAR_1)->tos & VAR_3->tos_mask) ==
         VAR_3->tos_value) ^ !!VAR_3->invert;
 else
  return ((FUNC_1(FUNC_2(VAR_1)) & VAR_3->tos_mask) ==
         VAR_3->tos_value) ^ !!VAR_3->invert;
}
