
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct ebt_802_3_info* matchinfo; } ;
struct ebt_802_3_info {int bitmask; int invflags; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct xt_mtchk_param *VAR_1)
{
 const struct ebt_802_3_info *VAR_2 = VAR_1->matchinfo;

 if (VAR_2->bitmask & ~VAR_0 || VAR_2->invflags & ~VAR_0)
  return 0;

 return 1;
}
