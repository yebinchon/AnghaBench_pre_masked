
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgchk_param {struct ebt_log_info* targinfo; } ;
struct ebt_log_info {int bitmask; int loglevel; char* prefix; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(const struct xt_tgchk_param *VAR_2)
{
 struct ebt_log_info *VAR_3 = VAR_2->targinfo;

 if (VAR_3->bitmask & ~VAR_0)
  return 0;
 if (VAR_3->loglevel >= 8)
  return 0;
 VAR_3->prefix[VAR_1 - 1] = '\0';
 return 1;
}
