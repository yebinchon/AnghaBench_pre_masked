
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_target_param {struct xt_led_info* targinfo; } ;
struct xt_led_info_internal {int netfilter_led_trigger; int timer; } ;
struct xt_led_info {scalar_t__ delay; scalar_t__ always_blink; struct xt_led_info_internal* internal_data; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static unsigned int
FUNC_4(struct sk_buff *VAR_4, const struct xt_target_param *VAR_5)
{
 const struct xt_led_info *VAR_6 = VAR_5->targinfo;
 struct xt_led_info_internal *VAR_7 = VAR_6->internal_data;





 if ((VAR_6->delay > 0) && VAR_6->always_blink &&
     FUNC_3(&VAR_7->timer))
  FUNC_0(&VAR_7->netfilter_led_trigger,VAR_1);

 FUNC_0(&VAR_7->netfilter_led_trigger, VAR_0);


 if (VAR_6->delay > 0) {
  FUNC_1(&VAR_7->timer,
     VAR_3 + FUNC_2(VAR_6->delay));


 } else if (VAR_6->delay == 0) {
  FUNC_0(&VAR_7->netfilter_led_trigger, VAR_1);
 }



 return VAR_2;
}
