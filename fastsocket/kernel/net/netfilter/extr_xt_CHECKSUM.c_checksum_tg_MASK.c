
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_target_param {int dummy; } ;
struct sk_buff {scalar_t__ ip_summed; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static unsigned int
FUNC_1(struct sk_buff *VAR_2, const struct xt_target_param *VAR_3)
{
 if (VAR_2->ip_summed == VAR_0)
  FUNC_0(VAR_2);

 return VAR_1;
}
