
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_target_param {struct xt_rateest_target_info* targinfo; } ;
struct xt_rateest_target_info {TYPE_1__* est; } ;
struct sk_buff {scalar_t__ len; } ;
struct gnet_stats_basic_packed {int packets; int bytes; } ;
struct TYPE_2__ {int lock; struct gnet_stats_basic_packed bstats; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static unsigned int
FUNC_2(struct sk_buff *VAR_1, const struct xt_target_param *VAR_2)
{
 const struct xt_rateest_target_info *VAR_3 = VAR_2->targinfo;
 struct gnet_stats_basic_packed *VAR_4 = &VAR_3->est->bstats;

 FUNC_0(&VAR_3->est->lock);
 VAR_4->bytes += VAR_1->len;
 VAR_4->packets++;
 FUNC_1(&VAR_3->est->lock);

 return VAR_0;
}
