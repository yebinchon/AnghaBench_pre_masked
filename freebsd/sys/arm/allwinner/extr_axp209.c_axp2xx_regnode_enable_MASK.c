
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct regnode {int dummy; } ;
struct axp2xx_reg_sc {TYPE_1__* def; int base_dev; } ;
struct TYPE_2__ {int enable_reg; int enable_mask; } ;


 int FUNC_0 (int ,int ,int *,int) ;
 int FUNC_1 (int ,int ,int ) ;
 struct axp2xx_reg_sc* FUNC_2 (struct regnode*) ;

__attribute__((used)) static int
FUNC_3(struct regnode *VAR_0, bool VAR_1, int *VAR_2)
{
 struct axp2xx_reg_sc *VAR_3;
 uint8_t VAR_4;

 VAR_3 = FUNC_2(VAR_0);

 FUNC_0(VAR_3->base_dev, VAR_3->def->enable_reg, &VAR_4, 1);
 if (VAR_1)
  VAR_4 |= VAR_3->def->enable_mask;
 else
  VAR_4 &= ~VAR_3->def->enable_mask;
 FUNC_1(VAR_3->base_dev, VAR_3->def->enable_reg, VAR_4);

 *VAR_2 = 0;

 return (0);
}
