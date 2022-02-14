
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sw_flow_actions {int actions_len; int actions; } ;
struct sk_buff {int dummy; } ;
struct datapath {int dummy; } ;
struct TYPE_4__ {int * tun_key; TYPE_1__* flow; } ;
struct TYPE_3__ {int sf_acts; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct datapath*,struct sk_buff*,int ,int ,int) ;
 struct sw_flow_actions* FUNC_2 (int ) ;

int FUNC_3(struct datapath *VAR_0, struct sk_buff *VAR_1)
{
 struct sw_flow_actions *VAR_2 = FUNC_2(FUNC_0(VAR_1)->flow->sf_acts);

 FUNC_0(VAR_1)->tun_key = ((void*)0);
 return FUNC_1(VAR_0, VAR_1, VAR_2->actions,
      VAR_2->actions_len, 0);
}
