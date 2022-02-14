
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct regnode {int dummy; } ;
struct axp8xx_reg_sc {TYPE_1__* def; int base_dev; } ;
struct TYPE_2__ {int enable_mask; int enable_value; int disable_value; int enable_reg; int name; } ;


 int FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,char*,char*,int ,int ) ;
 int FUNC_3 (struct regnode*) ;
 struct axp8xx_reg_sc* FUNC_4 (struct regnode*) ;

__attribute__((used)) static int
FUNC_5(struct regnode *VAR_1, bool VAR_2, int *VAR_3)
{
 struct axp8xx_reg_sc *VAR_4;
 uint8_t VAR_5;

 VAR_4 = FUNC_4(VAR_1);

 if (VAR_0)
  FUNC_2(VAR_4->base_dev, "%sable %s (%s)\n",
      VAR_2 ? "En" : "Dis",
      FUNC_3(VAR_1),
      VAR_4->def->name);

 FUNC_0(VAR_4->base_dev, VAR_4->def->enable_reg, &VAR_5, 1);
 VAR_5 &= ~VAR_4->def->enable_mask;
 if (VAR_2)
  VAR_5 |= VAR_4->def->enable_value;
 else {
  if (VAR_4->def->disable_value)
   VAR_5 |= VAR_4->def->disable_value;
  else
   VAR_5 &= ~VAR_4->def->enable_value;
 }
 FUNC_1(VAR_4->base_dev, VAR_4->def->enable_reg, VAR_5);

 *VAR_3 = 0;

 return (0);
}
