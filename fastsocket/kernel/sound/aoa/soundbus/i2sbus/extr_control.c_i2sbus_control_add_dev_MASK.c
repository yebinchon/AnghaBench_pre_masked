
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device_node* node; } ;
struct TYPE_4__ {TYPE_1__ ofdev; } ;
struct i2sbus_dev {int bus_number; int item; void* clock_disable; void* cell_disable; void* clock_enable; void* cell_enable; void* enable; TYPE_2__ sound; } ;
struct i2sbus_control {int list; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 void* FUNC_1 (struct device_node*,char*) ;
 int FUNC_2 (void*) ;

int FUNC_3(struct i2sbus_control *VAR_1,
      struct i2sbus_dev *VAR_2)
{
 struct device_node *VAR_3;

 VAR_3 = VAR_2->sound.ofdev.node;
 VAR_2->enable = FUNC_1(VAR_3, "enable");
 VAR_2->cell_enable = FUNC_1(VAR_3, "cell-enable");
 VAR_2->clock_enable = FUNC_1(VAR_3, "clock-enable");
 VAR_2->cell_disable = FUNC_1(VAR_3, "cell-disable");
 VAR_2->clock_disable = FUNC_1(VAR_3, "clock-disable");






 if (VAR_2->bus_number != 0 && VAR_2->bus_number != 1 &&
     (!VAR_2->enable ||
      !VAR_2->cell_enable || !VAR_2->clock_enable ||
      !VAR_2->cell_disable || !VAR_2->clock_disable)) {
  FUNC_2(VAR_2->enable);
  FUNC_2(VAR_2->cell_enable);
  FUNC_2(VAR_2->clock_enable);
  FUNC_2(VAR_2->cell_disable);
  FUNC_2(VAR_2->clock_disable);
  return -VAR_0;
 }

 FUNC_0(&VAR_2->item, &VAR_1->list);

 return 0;
}
