
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgdtor_param {struct xt_led_info* targinfo; } ;
struct xt_led_info_internal {int netfilter_led_trigger; int timer; } ;
struct xt_led_info {scalar_t__ delay; struct xt_led_info_internal* internal_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct xt_led_info_internal*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(const struct xt_tgdtor_param *VAR_0)
{
 const struct xt_led_info *VAR_1 = VAR_0->targinfo;
 struct xt_led_info_internal *VAR_2 = VAR_1->internal_data;

 if (VAR_1->delay > 0)
  FUNC_0(&VAR_2->timer);

 FUNC_2(&VAR_2->netfilter_led_trigger);
 FUNC_1(VAR_2);
}
