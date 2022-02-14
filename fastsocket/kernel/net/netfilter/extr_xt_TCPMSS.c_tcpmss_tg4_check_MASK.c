
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgchk_param {int hook_mask; struct ipt_entry* entryinfo; struct xt_tcpmss_info* targinfo; } ;
struct xt_tcpmss_info {scalar_t__ mss; } ;
struct ipt_entry {int dummy; } ;


 scalar_t__ FUNC_0 (struct ipt_entry const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static bool FUNC_2(const struct xt_tgchk_param *VAR_5)
{
 const struct xt_tcpmss_info *VAR_6 = VAR_5->targinfo;
 const struct ipt_entry *VAR_7 = VAR_5->entryinfo;

 if (VAR_6->mss == VAR_3 &&
     (VAR_5->hook_mask & ~((1 << VAR_0) |
      (1 << VAR_1) |
      (1 << VAR_2))) != 0) {
  FUNC_1("xt_TCPMSS: path-MTU clamping only supported in "
         "FORWARD, OUTPUT and POSTROUTING hooks\n");
  return 0;
 }
 if (FUNC_0(VAR_7, VAR_4))
  return 1;
 FUNC_1("xt_TCPMSS: Only works on TCP SYN packets\n");
 return 0;
}
