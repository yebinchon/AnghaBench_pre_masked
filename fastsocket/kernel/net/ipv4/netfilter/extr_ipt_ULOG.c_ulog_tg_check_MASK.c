
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgchk_param {struct ipt_ulog_info* targinfo; } ;
struct ipt_ulog_info {char* prefix; char qthreshold; } ;


 char VAR_0 ;
 int FUNC_0 (char*,char) ;

__attribute__((used)) static bool FUNC_1(const struct xt_tgchk_param *VAR_1)
{
 const struct ipt_ulog_info *VAR_2 = VAR_1->targinfo;

 if (VAR_2->prefix[sizeof(VAR_2->prefix) - 1] != '\0') {
  FUNC_0("ipt_ULOG: prefix term %i\n",
    VAR_2->prefix[sizeof(VAR_2->prefix) - 1]);
  return 0;
 }
 if (VAR_2->qthreshold > VAR_0) {
  FUNC_0("ipt_ULOG: queue threshold %Zu > MAX_QLEN\n",
    VAR_2->qthreshold);
  return 0;
 }
 return 1;
}
