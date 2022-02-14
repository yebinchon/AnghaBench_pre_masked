
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_tgchk_param {struct ipt_entry* entryinfo; struct ipt_reject_info* targinfo; } ;
struct ipt_reject_info {scalar_t__ with; } ;
struct TYPE_2__ {scalar_t__ proto; int invflags; } ;
struct ipt_entry {TYPE_1__ ip; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static bool FUNC_1(const struct xt_tgchk_param *VAR_4)
{
 const struct ipt_reject_info *VAR_5 = VAR_4->targinfo;
 const struct ipt_entry *VAR_6 = VAR_4->entryinfo;

 if (VAR_5->with == VAR_1) {
  FUNC_0("ipt_REJECT: ECHOREPLY no longer supported.\n");
  return 0;
 } else if (VAR_5->with == VAR_2) {

  if (VAR_6->ip.proto != VAR_0
      || (VAR_6->ip.invflags & VAR_3)) {
   FUNC_0("ipt_REJECT: TCP_RESET invalid for non-tcp\n");
   return 0;
  }
 }
 return 1;
}
