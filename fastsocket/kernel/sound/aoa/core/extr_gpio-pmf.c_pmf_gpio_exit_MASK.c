
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ gpio_private; int mutex; int work; } ;
struct TYPE_5__ {scalar_t__ gpio_private; int mutex; int work; } ;
struct TYPE_4__ {scalar_t__ gpio_private; int mutex; int work; } ;
struct gpio_runtime {TYPE_3__ line_out_notify; TYPE_2__ line_in_notify; TYPE_1__ headphone_notify; scalar_t__ implementation_private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct gpio_runtime*) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct gpio_runtime *VAR_0)
{
 FUNC_4(VAR_0);
 VAR_0->implementation_private = 0;

 if (VAR_0->headphone_notify.gpio_private)
  FUNC_5(VAR_0->headphone_notify.gpio_private);
 if (VAR_0->line_in_notify.gpio_private)
  FUNC_5(VAR_0->line_in_notify.gpio_private);
 if (VAR_0->line_out_notify.gpio_private)
  FUNC_5(VAR_0->line_out_notify.gpio_private);



 FUNC_0(&VAR_0->headphone_notify.work);
 FUNC_0(&VAR_0->line_in_notify.work);
 FUNC_0(&VAR_0->line_out_notify.work);
 FUNC_1();

 FUNC_3(&VAR_0->headphone_notify.mutex);
 FUNC_3(&VAR_0->line_in_notify.mutex);
 FUNC_3(&VAR_0->line_out_notify.mutex);

 if (VAR_0->headphone_notify.gpio_private)
  FUNC_2(VAR_0->headphone_notify.gpio_private);
 if (VAR_0->line_in_notify.gpio_private)
  FUNC_2(VAR_0->line_in_notify.gpio_private);
 if (VAR_0->line_out_notify.gpio_private)
  FUNC_2(VAR_0->line_out_notify.gpio_private);
}
