
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_target_param {struct ebt_nat_info* targinfo; } ;
struct sk_buff {int dummy; } ;
struct ebt_nat_info {unsigned int target; int mac; } ;
struct TYPE_2__ {int h_dest; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;

__attribute__((used)) static unsigned int
FUNC_3(struct sk_buff *VAR_2, const struct xt_target_param *VAR_3)
{
 const struct ebt_nat_info *VAR_4 = VAR_3->targinfo;

 if (!FUNC_2(VAR_2, 0))
  return VAR_0;

 FUNC_1(FUNC_0(VAR_2)->h_dest, VAR_4->mac, VAR_1);
 return VAR_4->target;
}
