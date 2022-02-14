
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_match_param {struct ebt_mark_m_info* matchinfo; } ;
struct sk_buff {int mark; } ;
struct ebt_mark_m_info {int bitmask; int mask; int invert; int mark; } ;


 int VAR_0 ;

__attribute__((used)) static bool
FUNC_0(const struct sk_buff *VAR_1, const struct xt_match_param *VAR_2)
{
 const struct ebt_mark_m_info *VAR_3 = VAR_2->matchinfo;

 if (VAR_3->bitmask & VAR_0)
  return !!(VAR_1->mark & VAR_3->mask) ^ VAR_3->invert;
 return ((VAR_1->mark & VAR_3->mask) == VAR_3->mark) ^ VAR_3->invert;
}
