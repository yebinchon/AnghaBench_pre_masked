
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int every; } ;
struct TYPE_5__ {int probability; } ;
struct TYPE_7__ {TYPE_2__ nth; TYPE_1__ random; } ;
struct xt_statistic_info {int flags; int mode; TYPE_4__* master; TYPE_3__ u; } ;
struct xt_match_param {struct xt_statistic_info* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct TYPE_8__ {int count; } ;


 int VAR_0 ;


 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool
FUNC_3(const struct sk_buff *VAR_2, const struct xt_match_param *VAR_3)
{
 const struct xt_statistic_info *VAR_4 = VAR_3->matchinfo;
 bool VAR_5 = VAR_4->flags & VAR_0;

 switch (VAR_4->mode) {
 case 128:
  if ((FUNC_0() & 0x7FFFFFFF) < VAR_4->u.random.probability)
   VAR_5 = !VAR_5;
  break;
 case 129:
  FUNC_1(&VAR_1);
  if (VAR_4->master->count++ == VAR_4->u.nth.every) {
   VAR_4->master->count = 0;
   VAR_5 = !VAR_5;
  }
  FUNC_2(&VAR_1);
  break;
 }

 return VAR_5;
}
