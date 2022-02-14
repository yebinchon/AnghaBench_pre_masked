
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgchk_param {struct ipt_log_info* targinfo; } ;
struct ipt_log_info {int level; char* prefix; } ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static bool FUNC_1(const struct xt_tgchk_param *VAR_0)
{
 const struct ipt_log_info *VAR_1 = VAR_0->targinfo;

 if (VAR_1->level >= 8) {
  FUNC_0("LOG: level %u >= 8\n", VAR_1->level);
  return 0;
 }
 if (VAR_1->prefix[sizeof(VAR_1->prefix)-1] != '\0') {
  FUNC_0("LOG: prefix term %i\n",
    VAR_1->prefix[sizeof(VAR_1->prefix)-1]);
  return 0;
 }
 return 1;
}
