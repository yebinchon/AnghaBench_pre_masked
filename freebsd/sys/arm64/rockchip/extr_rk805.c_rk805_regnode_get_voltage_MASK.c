
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct rk805_reg_sc {TYPE_1__* def; int base_dev; } ;
struct regnode {int dummy; } ;
struct TYPE_2__ {int voltage_mask; int name; int voltage_reg; int voltage_step; } ;


 int VAR_0 ;
 int FUNC_0 (struct rk805_reg_sc*,char*,int ,int) ;
 struct rk805_reg_sc* FUNC_1 (struct regnode*) ;
 int FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (struct rk805_reg_sc*,int,int*) ;

__attribute__((used)) static int
FUNC_4(struct regnode *VAR_1, int *VAR_2)
{
 struct rk805_reg_sc *VAR_3;
 uint8_t VAR_4;

 VAR_3 = FUNC_1(VAR_1);

 if (!VAR_3->def->voltage_step)
  return (VAR_0);

 FUNC_2(VAR_3->base_dev, VAR_3->def->voltage_reg, &VAR_4, 1);
 FUNC_3(VAR_3, VAR_4 & VAR_3->def->voltage_mask, VAR_2);

 FUNC_0(VAR_3, "Regulator %s is at %d uvolt\n",
   VAR_3->def->name,
   *VAR_2);

 return (0);
}
