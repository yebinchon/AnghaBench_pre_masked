
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgchk_param {struct ebt_nat_info* targinfo; } ;
struct ebt_nat_info {int target; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_0(const struct xt_tgchk_param *VAR_5)
{
 const struct ebt_nat_info *VAR_6 = VAR_5->targinfo;
 int VAR_7;

 VAR_7 = VAR_6->target | ~VAR_2;
 if (VAR_0 && VAR_7 == VAR_1)
  return 0;

 if (VAR_7 < -VAR_4 || VAR_7 >= 0)
  return 0;
 VAR_7 = VAR_6->target | VAR_2;
 if ((VAR_7 & ~VAR_3) != ~VAR_3)
  return 0;
 return 1;
}
