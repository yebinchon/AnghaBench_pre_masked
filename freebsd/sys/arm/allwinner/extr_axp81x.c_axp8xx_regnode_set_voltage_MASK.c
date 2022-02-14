
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct regnode {int dummy; } ;
struct axp8xx_reg_sc {TYPE_1__* def; int base_dev; } ;
struct TYPE_2__ {scalar_t__ voltage_step1; int voltage_reg; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct axp8xx_reg_sc*,int,int,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,char*,int ,int ,int,int) ;
 int FUNC_3 (struct regnode*) ;
 struct axp8xx_reg_sc* FUNC_4 (struct regnode*) ;

__attribute__((used)) static int
FUNC_5(struct regnode *VAR_3, int VAR_4,
    int VAR_5, int *VAR_6)
{
 struct axp8xx_reg_sc *VAR_7;
 uint8_t VAR_8;

 VAR_7 = FUNC_4(VAR_3);

 if (VAR_2)
  FUNC_2(VAR_7->base_dev, "Setting %s (%s) to %d<->%d\n",
      FUNC_3(VAR_3),
      VAR_7->def->name,
      VAR_4, VAR_5);

 if (VAR_7->def->voltage_step1 == 0)
  return (VAR_0);

 if (FUNC_0(VAR_7, VAR_4, VAR_5, &VAR_8) != 0)
  return (VAR_1);

 FUNC_1(VAR_7->base_dev, VAR_7->def->voltage_reg, VAR_8);

 *VAR_6 = 0;

 return (0);
}
