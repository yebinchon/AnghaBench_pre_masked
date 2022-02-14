
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_tgchk_param {struct ip6t_entry* entryinfo; struct ip6t_reject_info* targinfo; } ;
struct ip6t_reject_info {scalar_t__ with; } ;
struct TYPE_2__ {scalar_t__ proto; int invflags; } ;
struct ip6t_entry {TYPE_1__ ipv6; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static bool FUNC_1(const struct xt_tgchk_param *VAR_4)
{
 const struct ip6t_reject_info *VAR_5 = VAR_4->targinfo;
 const struct ip6t_entry *VAR_6 = VAR_4->entryinfo;

 if (VAR_5->with == VAR_0) {
  FUNC_0("ip6t_REJECT: ECHOREPLY is not supported.\n");
  return 0;
 } else if (VAR_5->with == VAR_1) {

  if (VAR_6->ipv6.proto != VAR_2
      || (VAR_6->ipv6.invflags & VAR_3)) {
   FUNC_0("ip6t_REJECT: TCP_RESET illegal for non-tcp\n");
   return 0;
  }
 }
 return 1;
}
