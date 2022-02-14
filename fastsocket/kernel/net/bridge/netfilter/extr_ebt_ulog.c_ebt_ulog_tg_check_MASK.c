
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgchk_param {struct ebt_ulog_info* targinfo; } ;
struct ebt_ulog_info {int nlgroup; char* prefix; scalar_t__ qthreshold; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(const struct xt_tgchk_param *VAR_2)
{
 struct ebt_ulog_info *VAR_3 = VAR_2->targinfo;

 if (VAR_3->nlgroup > 31)
  return 0;

 VAR_3->prefix[VAR_1 - 1] = '\0';

 if (VAR_3->qthreshold > VAR_0)
  VAR_3->qthreshold = VAR_0;

 return 1;
}
