
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_led_info_internal {int netfilter_led_trigger; } ;
struct xt_led_info {struct xt_led_info_internal* internal_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_1)
{
 struct xt_led_info *VAR_2 = (struct xt_led_info *)VAR_1;
 struct xt_led_info_internal *VAR_3 = VAR_2->internal_data;

 FUNC_0(&VAR_3->netfilter_led_trigger, VAR_0);
}
