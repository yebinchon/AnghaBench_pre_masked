
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int min_uvolt; int max_uvolt; } ;
struct regnode_init_def {int ofw_node; int id; TYPE_1__ std_param; } ;
struct regnode {int dummy; } ;
struct axp2xx_regdef {int voltage_min; int voltage_max; int id; } ;
struct axp2xx_reg_sc {int param; int xref; struct axp2xx_regdef* def; int base_dev; struct regnode* regnode; } ;
typedef int phandle_t ;
typedef int initdef ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct regnode_init_def*,int ,int) ;
 struct regnode* FUNC_3 (int ,int *,struct regnode_init_def*) ;
 struct axp2xx_reg_sc* FUNC_4 (struct regnode*) ;
 int FUNC_5 (struct regnode*) ;
 int FUNC_6 (struct regnode*) ;
 scalar_t__ FUNC_7 (int ,int ,struct regnode_init_def*) ;

__attribute__((used)) static struct axp2xx_reg_sc *
FUNC_8(device_t VAR_1, phandle_t VAR_2,
    struct axp2xx_regdef *VAR_3)
{
 struct axp2xx_reg_sc *VAR_4;
 struct regnode_init_def VAR_5;
 struct regnode *VAR_6;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 if (FUNC_7(VAR_1, VAR_2, &VAR_5) != 0) {
  FUNC_1(VAR_1, "cannot create regulator\n");
  return (((void*)0));
 }
 if (VAR_5.std_param.min_uvolt == 0)
  VAR_5.std_param.min_uvolt = VAR_3->voltage_min * 1000;
 if (VAR_5.std_param.max_uvolt == 0)
  VAR_5.std_param.max_uvolt = VAR_3->voltage_max * 1000;
 VAR_5.id = VAR_3->id;
 VAR_5.ofw_node = VAR_2;
 VAR_6 = FUNC_3(VAR_1, &VAR_0, &VAR_5);
 if (VAR_6 == ((void*)0)) {
  FUNC_1(VAR_1, "cannot create regulator\n");
  return (((void*)0));
 }

 VAR_4 = FUNC_4(VAR_6);
 VAR_4->regnode = VAR_6;
 VAR_4->base_dev = VAR_1;
 VAR_4->def = VAR_3;
 VAR_4->xref = FUNC_0(VAR_2);
 VAR_4->param = FUNC_5(VAR_6);

 FUNC_6(VAR_6);

 return (VAR_4);
}
