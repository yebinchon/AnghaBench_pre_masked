
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_state_info {unsigned int statemask; } ;
struct xt_match_param {struct xt_state_info* matchinfo; } ;
struct sk_buff {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 unsigned int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct sk_buff const*,int*) ;
 scalar_t__ FUNC_2 (struct sk_buff const*) ;

__attribute__((used)) static bool
FUNC_3(const struct sk_buff *VAR_2, const struct xt_match_param *VAR_3)
{
 const struct xt_state_info *VAR_4 = VAR_3->matchinfo;
 enum ip_conntrack_info VAR_5;
 unsigned int VAR_6;

 if (FUNC_2(VAR_2))
  VAR_6 = VAR_1;
 else if (!FUNC_1(VAR_2, &VAR_5))
  VAR_6 = VAR_0;
 else
  VAR_6 = FUNC_0(VAR_5);

 return (VAR_4->statemask & VAR_6);
}
