
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_match_param {int hotdrop; struct ipt_ecn_info* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct ipt_ecn_info {int operation; } ;
struct TYPE_2__ {scalar_t__ protocol; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (struct sk_buff const*,struct ipt_ecn_info const*) ;
 int FUNC_2 (struct sk_buff const*,struct ipt_ecn_info const*,int ) ;

__attribute__((used)) static bool FUNC_3(const struct sk_buff *VAR_4, const struct xt_match_param *VAR_5)
{
 const struct ipt_ecn_info *VAR_6 = VAR_5->matchinfo;

 if (VAR_6->operation & VAR_3)
  if (!FUNC_1(VAR_4, VAR_6))
   return 0;

 if (VAR_6->operation & (VAR_2|VAR_1)) {
  if (FUNC_0(VAR_4)->protocol != VAR_0)
   return 0;
  if (!FUNC_2(VAR_4, VAR_6, VAR_5->hotdrop))
   return 0;
 }

 return 1;
}
