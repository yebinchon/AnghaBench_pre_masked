
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct xt_target_param {TYPE_1__* target; struct xt_NFQ_info_v1* targinfo; } ;
struct xt_NFQ_info_v1 {int queues_total; scalar_t__ queuenum; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static unsigned int
FUNC_3(struct sk_buff *VAR_2, const struct xt_target_param *VAR_3)
{
 const struct xt_NFQ_info_v1 *VAR_4 = VAR_3->targinfo;
 u32 VAR_5 = VAR_4->queuenum;

 if (VAR_4->queues_total > 1) {
  if (VAR_3->target->family == VAR_0)
   VAR_5 = FUNC_1(VAR_2) % VAR_4->queues_total + VAR_5;




 }
 return FUNC_0(VAR_5);
}
