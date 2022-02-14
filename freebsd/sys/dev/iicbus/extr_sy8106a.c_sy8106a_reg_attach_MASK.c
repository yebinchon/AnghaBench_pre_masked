
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sy8106a_reg_sc {int param; int xref; int base_dev; struct regnode* regnode; } ;
struct regnode_init_def {int ofw_node; scalar_t__ id; } ;
struct regnode {int dummy; } ;
typedef int phandle_t ;
typedef int initdef ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct regnode_init_def*,int ,int) ;
 struct regnode* FUNC_3 (int ,int *,struct regnode_init_def*) ;
 struct sy8106a_reg_sc* FUNC_4 (struct regnode*) ;
 int FUNC_5 (struct regnode*) ;
 int FUNC_6 (struct regnode*) ;
 int FUNC_7 (int ,int ,struct regnode_init_def*) ;
 int VAR_0 ;

__attribute__((used)) static struct sy8106a_reg_sc *
FUNC_8(device_t VAR_1, phandle_t VAR_2)
{
 struct sy8106a_reg_sc *VAR_3;
 struct regnode_init_def VAR_4;
 struct regnode *VAR_5;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 FUNC_7(VAR_1, VAR_2, &VAR_4);
 VAR_4.id = 0;
 VAR_4.ofw_node = VAR_2;
 VAR_5 = FUNC_3(VAR_1, &VAR_0, &VAR_4);
 if (VAR_5 == ((void*)0)) {
  FUNC_1(VAR_1, "cannot create regulator\n");
  return (((void*)0));
 }

 VAR_3 = FUNC_4(VAR_5);
 VAR_3->regnode = VAR_5;
 VAR_3->base_dev = VAR_1;
 VAR_3->xref = FUNC_0(VAR_2);
 VAR_3->param = FUNC_5(VAR_5);

 FUNC_6(VAR_5);

 return (VAR_3);
}
