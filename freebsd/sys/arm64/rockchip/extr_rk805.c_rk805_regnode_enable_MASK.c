
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct rk805_reg_sc {TYPE_1__* def; int base_dev; } ;
struct regnode {int dummy; } ;
struct TYPE_2__ {int enable_reg; int enable_mask; int name; } ;


 int FUNC_0 (struct rk805_reg_sc*,char*,char*,int ) ;
 struct rk805_reg_sc* FUNC_1 (struct regnode*) ;
 int FUNC_2 (int ,int ,int *,int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct regnode *VAR_0, bool VAR_1, int *VAR_2)
{
 struct rk805_reg_sc *VAR_3;
 uint8_t VAR_4;

 VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3, "%sabling regulator %s\n",
     VAR_1 ? "En" : "Dis",
     VAR_3->def->name);
 FUNC_2(VAR_3->base_dev, VAR_3->def->enable_reg, &VAR_4, 1);
 if (VAR_1)
  VAR_4 |= VAR_3->def->enable_mask;
 else
  VAR_4 &= ~VAR_3->def->enable_mask;
 FUNC_3(VAR_3->base_dev, VAR_3->def->enable_reg, VAR_4);

 *VAR_2 = 0;

 return (0);
}
