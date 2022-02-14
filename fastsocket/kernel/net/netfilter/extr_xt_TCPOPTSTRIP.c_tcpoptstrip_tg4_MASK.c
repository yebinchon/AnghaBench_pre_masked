
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_target_param {int targinfo; } ;
struct tcphdr {int dummy; } ;
struct sk_buff {int dummy; } ;
struct iphdr {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 unsigned int FUNC_1 (struct sk_buff*,int ,int ,int) ;

__attribute__((used)) static unsigned int
FUNC_2(struct sk_buff *VAR_0, const struct xt_target_param *VAR_1)
{
 return FUNC_1(VAR_0, VAR_1->targinfo, FUNC_0(VAR_0),
        sizeof(struct iphdr) + sizeof(struct tcphdr));
}
