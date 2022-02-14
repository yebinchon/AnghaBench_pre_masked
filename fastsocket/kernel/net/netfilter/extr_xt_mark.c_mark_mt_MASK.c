
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_match_param {struct xt_mark_mtinfo1* matchinfo; } ;
struct xt_mark_mtinfo1 {int mask; int mark; int invert; } ;
struct sk_buff {int mark; } ;



__attribute__((used)) static bool
FUNC_0(const struct sk_buff *VAR_0, const struct xt_match_param *VAR_1)
{
 const struct xt_mark_mtinfo1 *VAR_2 = VAR_1->matchinfo;

 return ((VAR_0->mark & VAR_2->mask) == VAR_2->mark) ^ VAR_2->invert;
}
