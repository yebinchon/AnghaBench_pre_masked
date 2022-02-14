
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int dim; int index; } ;
struct xt_set_info_match {TYPE_1__ match_set; } ;
struct xt_match_param {int family; struct xt_set_info_match* matchinfo; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct sk_buff const*,int ,int ,int,int) ;

__attribute__((used)) static bool
FUNC_1(const struct sk_buff *VAR_1, const struct xt_match_param *VAR_2)
{
 const struct xt_set_info_match *VAR_3 = VAR_2->matchinfo;

 return FUNC_0(VAR_3->match_set.index, VAR_1, VAR_2->family,
    VAR_3->match_set.dim,
    VAR_3->match_set.flags,
    VAR_3->match_set.flags & VAR_0);
}
