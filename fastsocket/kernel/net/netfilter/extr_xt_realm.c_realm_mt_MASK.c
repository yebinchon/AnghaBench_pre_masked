
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_realm_info {int id; int mask; int invert; } ;
struct xt_match_param {struct xt_realm_info* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct dst_entry {int tclassid; } ;


 struct dst_entry* FUNC_0 (struct sk_buff const*) ;

__attribute__((used)) static bool
FUNC_1(const struct sk_buff *VAR_0, const struct xt_match_param *VAR_1)
{
 const struct xt_realm_info *VAR_2 = VAR_1->matchinfo;
 const struct dst_entry *VAR_3 = FUNC_0(VAR_0);

 return (VAR_2->id == (VAR_3->tclassid & VAR_2->mask)) ^ VAR_2->invert;
}
