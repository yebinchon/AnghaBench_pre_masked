
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xt_match_param {int matchinfo; TYPE_1__* match; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {TYPE_1__* match; } ;
struct ebt_entry_match {TYPE_2__ u; int data; } ;
struct TYPE_3__ {scalar_t__ (* match ) (struct sk_buff const*,struct xt_match_param*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff const*,struct xt_match_param*) ;

__attribute__((used)) static inline int FUNC_1 (struct ebt_entry_match *VAR_2,
   const struct sk_buff *VAR_3, struct xt_match_param *VAR_4)
{
 VAR_4->match = VAR_2->u.match;
 VAR_4->matchinfo = VAR_2->data;
 return VAR_2->u.match->match(VAR_3, VAR_4) ? VAR_0 : VAR_1;
}
