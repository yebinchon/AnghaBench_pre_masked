
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct regnode {int dummy; } ;
struct TYPE_6__ {int id; int ofw_node; } ;
struct TYPE_4__ {TYPE_3__ reg_init_def; } ;
struct gpioregulator_softc {TYPE_1__ init_def; TYPE_2__* reg_sc; void* dev; } ;
typedef int phandle_t ;
typedef void* device_t ;
struct TYPE_5__ {TYPE_1__* def; int param; void* base_dev; struct regnode* regnode; } ;


 int VAR_0 ;
 struct gpioregulator_softc* FUNC_0 (void*) ;
 int FUNC_1 (void*,char*) ;
 int FUNC_2 (struct gpioregulator_softc*) ;
 int VAR_1 ;
 int FUNC_3 (void*) ;
 struct regnode* FUNC_4 (void*,int *,TYPE_3__*) ;
 TYPE_2__* FUNC_5 (struct regnode*) ;
 int FUNC_6 (struct regnode*) ;
 int FUNC_7 (struct regnode*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_2)
{
 struct gpioregulator_softc *VAR_3;
 struct regnode *VAR_4;
 phandle_t VAR_5;
 int VAR_6;

 VAR_3 = FUNC_0(VAR_2);
 VAR_3->dev = VAR_2;
 VAR_5 = FUNC_3(VAR_2);

 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6 != 0) {
  FUNC_1(VAR_2, "cannot parse parameters\n");
  return (VAR_0);
 }
 VAR_3->init_def.reg_init_def.id = 1;
 VAR_3->init_def.reg_init_def.ofw_node = VAR_5;

 VAR_4 = FUNC_4(VAR_2, &VAR_1,
     &VAR_3->init_def.reg_init_def);
 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_2, "cannot create regulator\n");
  return (VAR_0);
 }

 VAR_3->reg_sc = FUNC_5(VAR_4);
 VAR_3->reg_sc->regnode = VAR_4;
 VAR_3->reg_sc->base_dev = VAR_2;
 VAR_3->reg_sc->param = FUNC_6(VAR_4);
 VAR_3->reg_sc->def = &VAR_3->init_def;

 FUNC_7(VAR_4);

 return (0);
}
