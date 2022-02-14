
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_match_param {int matchinfo; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_buff const*,struct xt_match_param const*,int ) ;

__attribute__((used)) static bool
FUNC_1(const struct sk_buff *VAR_0, const struct xt_match_param *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1, VAR_1->matchinfo);
}
