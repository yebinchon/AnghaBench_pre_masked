
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgchk_param {struct xt_nflog_info* targinfo; } ;
struct xt_nflog_info {int flags; char* prefix; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct xt_tgchk_param *VAR_1)
{
 const struct xt_nflog_info *VAR_2 = VAR_1->targinfo;

 if (VAR_2->flags & ~VAR_0)
  return 0;
 if (VAR_2->prefix[sizeof(VAR_2->prefix) - 1] != '\0')
  return 0;
 return 1;
}
