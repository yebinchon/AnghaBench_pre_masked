
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct regnode {int dummy; } ;
struct axp2xx_reg_sc {TYPE_1__* def; int base_dev; } ;
struct TYPE_2__ {int voltage_mask; int voltage_reg; int voltage_step; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (struct axp2xx_reg_sc*,int,int*) ;
 struct axp2xx_reg_sc* FUNC_2 (struct regnode*) ;

__attribute__((used)) static int
FUNC_3(struct regnode *VAR_1, int *VAR_2)
{
 struct axp2xx_reg_sc *VAR_3;
 uint8_t VAR_4;

 VAR_3 = FUNC_2(VAR_1);

 if (!VAR_3->def->voltage_step)
  return (VAR_0);

 FUNC_0(VAR_3->base_dev, VAR_3->def->voltage_reg, &VAR_4, 1);
 FUNC_1(VAR_3, VAR_4 & VAR_3->def->voltage_mask, VAR_2);

 return (0);
}
