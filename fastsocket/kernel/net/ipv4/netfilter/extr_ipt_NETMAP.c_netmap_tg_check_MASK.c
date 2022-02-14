
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_tgchk_param {struct nf_nat_multi_range_compat* targinfo; } ;
struct nf_nat_multi_range_compat {int rangesize; TYPE_1__* range; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static bool FUNC_1(const struct xt_tgchk_param *VAR_1)
{
 const struct nf_nat_multi_range_compat *VAR_2 = VAR_1->targinfo;

 if (!(VAR_2->range[0].flags & VAR_0)) {
  FUNC_0("NETMAP:check: bad MAP_IPS.\n");
  return 0;
 }
 if (VAR_2->rangesize != 1) {
  FUNC_0("NETMAP:check: bad rangesize %u.\n", VAR_2->rangesize);
  return 0;
 }
 return 1;
}
