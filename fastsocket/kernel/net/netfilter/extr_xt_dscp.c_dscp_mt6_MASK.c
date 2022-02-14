
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;
struct xt_match_param {struct xt_dscp_info* matchinfo; } ;
struct xt_dscp_info {scalar_t__ dscp; int invert; } ;
struct sk_buff {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff const*) ;

__attribute__((used)) static bool
FUNC_2(const struct sk_buff *VAR_1, const struct xt_match_param *VAR_2)
{
 const struct xt_dscp_info *VAR_3 = VAR_2->matchinfo;
 u_int8_t VAR_4 = FUNC_0(FUNC_1(VAR_1)) >> VAR_0;

 return (VAR_4 == VAR_3->dscp) ^ !!VAR_3->invert;
}
