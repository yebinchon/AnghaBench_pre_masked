
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgchk_param {struct nf_nat_multi_range_compat* targinfo; } ;
struct nf_nat_multi_range_compat {int rangesize; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static bool FUNC_1(const struct xt_tgchk_param *VAR_0)
{
 const struct nf_nat_multi_range_compat *VAR_1 = VAR_0->targinfo;


 if (VAR_1->rangesize != 1) {
  FUNC_0("DNAT: multiple ranges no longer supported\n");
  return 0;
 }
 return 1;
}
