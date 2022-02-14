
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct syr827_reg_sc {void* volt_reg; void* suspend_reg; int param; int xref; int base_dev; struct regnode* regnode; } ;
struct regnode_init_def {int ofw_node; scalar_t__ id; } ;
struct regnode {int dummy; } ;
typedef int phandle_t ;
typedef int initdef ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,char*,int*,int) ;
 int FUNC_1 (int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct regnode_init_def*,int ,int) ;
 struct regnode* FUNC_4 (int ,int *,struct regnode_init_def*) ;
 struct syr827_reg_sc* FUNC_5 (struct regnode*) ;
 int FUNC_6 (struct regnode*) ;
 int FUNC_7 (struct regnode*) ;
 int FUNC_8 (int ,int ,struct regnode_init_def*) ;
 int VAR_2 ;

__attribute__((used)) static struct syr827_reg_sc *
FUNC_9(device_t VAR_3, phandle_t VAR_4)
{
 struct syr827_reg_sc *VAR_5;
 struct regnode_init_def VAR_6;
 struct regnode *VAR_7;
 int VAR_8;

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 FUNC_8(VAR_3, VAR_4, &VAR_6);
 VAR_6.id = 0;
 VAR_6.ofw_node = VAR_4;
 VAR_7 = FUNC_4(VAR_3, &VAR_2, &VAR_6);
 if (VAR_7 == ((void*)0)) {
  FUNC_2(VAR_3, "cannot create regulator\n");
  return (((void*)0));
 }

 VAR_5 = FUNC_5(VAR_7);
 VAR_5->regnode = VAR_7;
 VAR_5->base_dev = VAR_3;
 VAR_5->xref = FUNC_1(VAR_4);
 VAR_5->param = FUNC_6(VAR_7);

 if (FUNC_0(VAR_4, "fcs,suspend-voltage-selector", &VAR_8,
     sizeof(uint32_t)) <= 0)
  VAR_8 = 0;

 switch (VAR_8) {
 case 0:
  VAR_5->suspend_reg = VAR_0;
  VAR_5->volt_reg = VAR_1;
  break;
 case 1:
  VAR_5->suspend_reg = VAR_1;
  VAR_5->volt_reg = VAR_0;
  break;
 }

 FUNC_7(VAR_7);

 return (VAR_5);
}
