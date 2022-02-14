
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct regnode {int dummy; } ;
struct axp2xx_reg_sc {TYPE_1__* def; int base_dev; } ;
struct TYPE_2__ {int voltage_reg; int voltage_step; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct axp2xx_reg_sc*,int,int,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 struct axp2xx_reg_sc* FUNC_2 (struct regnode*) ;

__attribute__((used)) static int
FUNC_3(struct regnode *VAR_2, int VAR_3,
    int VAR_4, int *VAR_5)
{
 struct axp2xx_reg_sc *VAR_6;
 uint8_t VAR_7;

 VAR_6 = FUNC_2(VAR_2);

 if (!VAR_6->def->voltage_step)
  return (VAR_0);

 if (FUNC_0(VAR_6, VAR_3, VAR_4, &VAR_7) != 0)
  return (VAR_1);

 FUNC_1(VAR_6->base_dev, VAR_6->def->voltage_reg, VAR_7);

 *VAR_5 = 0;

 return (0);
}
