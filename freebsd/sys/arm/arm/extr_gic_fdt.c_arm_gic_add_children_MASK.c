
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct arm_gic_fdt_softc {int size_cells; int addr_cells; } ;
struct TYPE_3__ {int obd_name; } ;
struct arm_gic_devinfo {TYPE_1__ obdinfo; int rl; } ;
typedef scalar_t__ phandle_t ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,struct arm_gic_fdt_softc*) ;
 int * FUNC_3 (int *,int *,int) ;
 struct arm_gic_fdt_softc* FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *,struct arm_gic_devinfo*) ;
 int FUNC_7 (struct arm_gic_devinfo*,int ) ;
 struct arm_gic_devinfo* FUNC_8 (int,int ,int) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,scalar_t__,int ,int ,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static bool
FUNC_15(device_t VAR_3)
{
 struct arm_gic_fdt_softc *VAR_4;
 struct arm_gic_devinfo *VAR_5;
 phandle_t VAR_6, VAR_7;
 device_t VAR_8;

 VAR_4 = FUNC_4(VAR_3);
 VAR_7 = FUNC_11(VAR_3);


 VAR_6 = FUNC_0(VAR_7);
 if (VAR_6 == 0)
  return (0);

 if (FUNC_2(VAR_7, VAR_4) < 0) {
  FUNC_5(VAR_3, "Have a child, but no ranges\n");
  return (0);
 }

 for (; VAR_6 != 0; VAR_6 = FUNC_1(VAR_6)) {
  VAR_5 = FUNC_8(sizeof(*VAR_5), VAR_0, VAR_1 | VAR_2);

  if (FUNC_10(&VAR_5->obdinfo, VAR_6) != 0) {
   FUNC_7(VAR_5, VAR_0);
   continue;
  }

  FUNC_14(&VAR_5->rl);
  FUNC_12(VAR_3, VAR_6, VAR_4->addr_cells,
      VAR_4->size_cells, &VAR_5->rl);

  VAR_8 = FUNC_3(VAR_3, ((void*)0), -1);
  if (VAR_8 == ((void*)0)) {
   FUNC_5(VAR_3, "<%s>: device_add_child failed\n",
       VAR_5->obdinfo.obd_name);
   FUNC_13(&VAR_5->rl);
   FUNC_9(&VAR_5->obdinfo);
   FUNC_7(VAR_5, VAR_0);
   continue;
  }
  FUNC_6(VAR_8, VAR_5);
 }

 return (1);
}
