
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; int work; scalar_t__ gpio_private; scalar_t__ notify; } ;
struct gpio_runtime {TYPE_1__ line_out_notify; TYPE_1__ line_in_notify; TYPE_1__ headphone_notify; scalar_t__ implementation_private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (struct gpio_runtime*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct gpio_runtime *VAR_3)
{
 FUNC_3(VAR_3);
 VAR_3->implementation_private = 0;
 if (VAR_3->headphone_notify.notify)
  FUNC_2(VAR_0, &VAR_3->headphone_notify);
 if (VAR_3->line_in_notify.gpio_private)
  FUNC_2(VAR_1, &VAR_3->line_in_notify);
 if (VAR_3->line_out_notify.gpio_private)
  FUNC_2(VAR_2, &VAR_3->line_out_notify);
 FUNC_0(&VAR_3->headphone_notify.work);
 FUNC_0(&VAR_3->line_in_notify.work);
 FUNC_0(&VAR_3->line_out_notify.work);
 FUNC_1();
 FUNC_4(&VAR_3->headphone_notify.mutex);
 FUNC_4(&VAR_3->line_in_notify.mutex);
 FUNC_4(&VAR_3->line_out_notify.mutex);
}
