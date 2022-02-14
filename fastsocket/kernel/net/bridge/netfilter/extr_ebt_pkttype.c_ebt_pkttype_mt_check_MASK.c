
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct ebt_pkttype_info* matchinfo; } ;
struct ebt_pkttype_info {int invert; } ;



__attribute__((used)) static bool FUNC_0(const struct xt_mtchk_param *VAR_0)
{
 const struct ebt_pkttype_info *VAR_1 = VAR_0->matchinfo;

 if (VAR_1->invert != 0 && VAR_1->invert != 1)
  return 0;

 return 1;
}
