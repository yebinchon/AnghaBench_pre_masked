
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regnode {int dummy; } ;
struct gpioregulator_reg_sc {TYPE_1__* def; } ;
struct TYPE_2__ {int enable_pin_valid; int npins; int * pins; int enable_pin; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct gpioregulator_reg_sc* FUNC_1 (struct regnode*) ;

__attribute__((used)) static int
FUNC_2(struct regnode *VAR_1)
{
 struct gpioregulator_reg_sc *VAR_2;
 int VAR_3, VAR_4;

 VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->def->enable_pin_valid == 1) {
  VAR_3 = FUNC_0(VAR_2->def->enable_pin, VAR_0);
  if (VAR_3 != 0)
   return (VAR_3);
 }

 for (VAR_4 = 0; VAR_4 < VAR_2->def->npins; VAR_4++) {
  VAR_3 = FUNC_0(VAR_2->def->pins[VAR_4], VAR_0);
  if (VAR_3 != 0)
   return (VAR_3);
 }

 return (0);
}
