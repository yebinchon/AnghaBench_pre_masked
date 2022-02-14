
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct rk805_reg_sc {TYPE_1__* def; int base_dev; } ;
struct regnode {int dummy; } ;
struct TYPE_2__ {int name; int voltage_reg; int voltage_step; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rk805_reg_sc*,char*,int ,int,...) ;
 struct rk805_reg_sc* FUNC_1 (struct regnode*) ;
 int FUNC_2 (int ,int ,int *,int) ;
 int FUNC_3 (struct rk805_reg_sc*,int ,int*) ;
 scalar_t__ FUNC_4 (struct rk805_reg_sc*,int,int,int *) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct regnode *VAR_2, int VAR_3,
    int VAR_4, int *VAR_5)
{
 struct rk805_reg_sc *VAR_6;
 uint8_t VAR_7;
 int VAR_8;

 VAR_6 = FUNC_1(VAR_2);

 if (!VAR_6->def->voltage_step)
  return (VAR_0);

 FUNC_0(VAR_6, "Setting %s to %d<->%d uvolts\n",
     VAR_6->def->name,
     VAR_3,
     VAR_4);
 FUNC_2(VAR_6->base_dev, VAR_6->def->voltage_reg, &VAR_7, 1);
 if (FUNC_4(VAR_6, VAR_3, VAR_4, &VAR_7) != 0)
  return (VAR_1);

 FUNC_5(VAR_6->base_dev, VAR_6->def->voltage_reg, VAR_7);

 FUNC_2(VAR_6->base_dev, VAR_6->def->voltage_reg, &VAR_7, 1);

 *VAR_5 = 0;

 FUNC_3(VAR_6, VAR_7, &VAR_8);
 FUNC_0(VAR_6, "Regulator %s set to %d uvolt\n",
   VAR_6->def->name,
   VAR_8);

 return (0);
}
