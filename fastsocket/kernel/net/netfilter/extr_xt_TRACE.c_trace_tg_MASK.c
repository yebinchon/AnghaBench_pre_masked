
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_target_param {int dummy; } ;
struct sk_buff {int nf_trace; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static unsigned int
FUNC_0(struct sk_buff *VAR_1, const struct xt_target_param *VAR_2)
{
 VAR_1->nf_trace = 1;
 return VAR_0;
}
