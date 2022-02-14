
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xt_match_param {int matchinfo; TYPE_1__* match; } ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {TYPE_1__* match; } ;
struct TYPE_6__ {TYPE_2__ kernel; } ;
struct ip6t_entry_match {TYPE_3__ u; int data; } ;
struct TYPE_4__ {int (* match ) (struct sk_buff const*,struct xt_match_param*) ;} ;


 int FUNC_0 (struct sk_buff const*,struct xt_match_param*) ;

__attribute__((used)) static inline bool
FUNC_1(struct ip6t_entry_match *VAR_0, const struct sk_buff *VAR_1,
  struct xt_match_param *VAR_2)
{
 VAR_2->match = VAR_0->u.kernel.match;
 VAR_2->matchinfo = VAR_0->data;


 if (!VAR_0->u.kernel.match->match(VAR_1, VAR_2))
  return 1;
 else
  return 0;
}
