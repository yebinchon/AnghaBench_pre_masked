
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mutex; int work; } ;
struct TYPE_6__ {int mutex; int work; } ;
struct TYPE_5__ {int mutex; int work; } ;
struct gpio_runtime {TYPE_1__ line_out_notify; TYPE_3__ line_in_notify; TYPE_2__ headphone_notify; scalar_t__ implementation_private; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct gpio_runtime*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct gpio_runtime *VAR_1)
{
 FUNC_2(VAR_1);
 VAR_1->implementation_private = 0;
 FUNC_0(&VAR_1->headphone_notify.work, VAR_0);
 FUNC_0(&VAR_1->line_in_notify.work, VAR_0);
 FUNC_0(&VAR_1->line_out_notify.work, VAR_0);
 FUNC_1(&VAR_1->headphone_notify.mutex);
 FUNC_1(&VAR_1->line_in_notify.mutex);
 FUNC_1(&VAR_1->line_out_notify.mutex);
}
