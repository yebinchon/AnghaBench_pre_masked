
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct regnode {int dummy; } ;
struct axp8xx_reg_sc {TYPE_1__* def; int base_dev; } ;
struct TYPE_2__ {int voltage_reg; int voltage_step2; int voltage_step1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (struct axp8xx_reg_sc*,int,int*) ;
 struct axp8xx_reg_sc* FUNC_2 (struct regnode*) ;

__attribute__((used)) static int
FUNC_3(struct regnode *VAR_2, int *VAR_3)
{
 struct axp8xx_reg_sc *VAR_4;
 uint8_t VAR_5;

 VAR_4 = FUNC_2(VAR_2);

 if (!VAR_4->def->voltage_step1 || !VAR_4->def->voltage_step2)
  return (VAR_1);

 FUNC_0(VAR_4->base_dev, VAR_4->def->voltage_reg, &VAR_5, 1);
 FUNC_1(VAR_4, VAR_5 & VAR_0, VAR_3);

 return (0);
}
