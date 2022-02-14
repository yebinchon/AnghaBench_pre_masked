
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int supply_node ;
struct reg_def {char* supply_name; } ;
struct as3722_softc {int dev; } ;
struct TYPE_2__ {int * parent_name; } ;
struct as3722_regnode_init_def {int ext_control; int enable_tracking; TYPE_1__ reg_init_def; } ;
typedef int prop_name ;
typedef int phandle_t ;


 int FUNC_0 (int,char*,int*,int) ;
 int FUNC_1 (int,char*,void**) ;
 scalar_t__ FUNC_2 (int,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,int,TYPE_1__*) ;
 int FUNC_7 (char*,int,char*,char*) ;

__attribute__((used)) static void
FUNC_8(struct as3722_softc *VAR_0, phandle_t VAR_1, struct reg_def *VAR_2,
struct as3722_regnode_init_def *VAR_3)
{
 int VAR_4;
 phandle_t VAR_5, VAR_6;
 char VAR_7[64];

 VAR_4 = FUNC_6(VAR_0->dev, VAR_1,
     &VAR_3->reg_init_def);

 VAR_4 = FUNC_0(VAR_1, "ams,ext-control", &VAR_3->ext_control,
     sizeof(VAR_3->ext_control));
 if (VAR_4 <= 0)
  VAR_3->ext_control = 0;
 if (VAR_3->ext_control > 3) {
  FUNC_5(VAR_0->dev,
      "Invalid value for ams,ext-control property: %d\n",
      VAR_3->ext_control);
  VAR_3->ext_control = 0;
 }
 if (FUNC_2(VAR_1, "ams,enable-tracking"))
  VAR_3->enable_tracking = 1;



 if (VAR_2->supply_name == ((void*)0))
   return;

 VAR_5 = FUNC_4(VAR_1);
 FUNC_7(VAR_7, sizeof(VAR_7), "%s-supply",
     VAR_2->supply_name);
 VAR_4 = FUNC_0(VAR_5, VAR_7, &VAR_6,
     sizeof(VAR_6));
 if (VAR_4 <= 0)
  return;
 VAR_6 = FUNC_3(VAR_6);
 VAR_4 = FUNC_1(VAR_6, "regulator-name",
     (void **)&VAR_3->reg_init_def.parent_name);
 if (VAR_4 <= 0)
  VAR_3->reg_init_def.parent_name = ((void*)0);
}
