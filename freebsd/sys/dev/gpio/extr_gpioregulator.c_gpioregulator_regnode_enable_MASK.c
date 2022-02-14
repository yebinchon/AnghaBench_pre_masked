
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regnode {int dummy; } ;
struct gpioregulator_reg_sc {TYPE_2__* def; TYPE_1__* param; } ;
struct TYPE_4__ {int enable_pin_valid; int startup_delay_us; int enable_pin; } ;
struct TYPE_3__ {int enable_active_high; } ;


 int FUNC_0 (int ,int) ;
 struct gpioregulator_reg_sc* FUNC_1 (struct regnode*) ;

__attribute__((used)) static int
FUNC_2(struct regnode *VAR_0, bool VAR_1, int *VAR_2)
{
 struct gpioregulator_reg_sc *VAR_3;
 bool VAR_4;
 int VAR_5;

 VAR_3 = FUNC_1(VAR_0);

 if (VAR_3->def->enable_pin_valid == 1) {
  VAR_4 = VAR_1;
  if (!VAR_3->param->enable_active_high)
   VAR_4 = !VAR_4;
  VAR_5 = FUNC_0(VAR_3->def->enable_pin, VAR_4);
  if (VAR_5 != 0)
   return (VAR_5);
 }

 *VAR_2 = VAR_3->def->startup_delay_us;

 return (0);
}
