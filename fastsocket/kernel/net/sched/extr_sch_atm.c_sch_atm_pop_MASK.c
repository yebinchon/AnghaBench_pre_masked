
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct atm_vcc {int dummy; } ;
struct atm_qdisc_data {int task; } ;
struct TYPE_2__ {int (* old_pop ) (struct atm_vcc*,struct sk_buff*) ;struct atm_qdisc_data* parent; } ;


 TYPE_1__* FUNC_0 (struct atm_vcc*) ;
 int FUNC_1 (char*,struct atm_vcc*,struct sk_buff*,struct atm_qdisc_data*) ;
 int FUNC_2 (struct atm_vcc*,struct sk_buff*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct atm_vcc *VAR_0, struct sk_buff *VAR_1)
{
 struct atm_qdisc_data *VAR_2 = FUNC_0(VAR_0)->parent;

 FUNC_1("sch_atm_pop(vcc %p,skb %p,[qdisc %p])\n", VAR_0, VAR_1, VAR_2);
 FUNC_0(VAR_0)->old_pop(VAR_0, VAR_1);
 FUNC_3(&VAR_2->task);
}
