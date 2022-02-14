
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_actions {int dummy; } ;
struct sw_flow {int sf_acts; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sw_flow_actions const*) ;
 struct sw_flow_actions* FUNC_2 (int ) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct sw_flow *VAR_1)
{
 const struct sw_flow_actions *VAR_2;

 VAR_2 = FUNC_2(VAR_1->sf_acts);

 return FUNC_0(FUNC_1(VAR_2), VAR_0);
}
