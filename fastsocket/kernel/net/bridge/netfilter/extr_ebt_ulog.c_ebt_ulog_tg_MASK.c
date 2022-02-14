
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_target_param {int targinfo; int out; int in; int hooknum; } ;
struct sk_buff {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,struct sk_buff*,int ,int ,int ,int *) ;

__attribute__((used)) static unsigned int
FUNC_1(struct sk_buff *VAR_1, const struct xt_target_param *VAR_2)
{
 FUNC_0(VAR_2->hooknum, VAR_1, VAR_2->in, VAR_2->out,
                 VAR_2->targinfo, ((void*)0));
 return VAR_0;
}
