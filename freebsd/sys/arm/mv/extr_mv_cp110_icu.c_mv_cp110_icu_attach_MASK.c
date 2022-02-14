
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_cp110_icu_softc {int res; struct intr_map_data_fdt* parent_map_data; int * parent; int dev; } ;
struct intr_map_data_fdt {int dummy; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*,int *,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int *) ;
 struct mv_cp110_icu_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int ,int,int) ;
 int * FUNC_8 (int ,int ) ;
 int VAR_4 ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_5)
{
 struct mv_cp110_icu_softc *VAR_6;
 phandle_t VAR_7, VAR_8;

 VAR_6 = FUNC_5(VAR_5);
 VAR_6->dev = VAR_5;
 VAR_7 = FUNC_9(VAR_5);

 if (FUNC_1(VAR_7, "msi-parent", &VAR_8,
     sizeof(phandle_t)) <= 0) {
  FUNC_6(VAR_5, "cannot find msi-parent property\n");
  return (VAR_0);
 }

 if ((VAR_6->parent = FUNC_0(VAR_8)) == ((void*)0)) {
  FUNC_6(VAR_5, "cannot find msi-parent device\n");
  return (VAR_0);
 }
 if (FUNC_3(VAR_5, VAR_4, &VAR_6->res) != 0) {
  FUNC_6(VAR_5, "cannot allocate resources for device\n");
  return (VAR_0);
 }

 if (FUNC_8(VAR_5, FUNC_2(VAR_7)) == ((void*)0)) {
  FUNC_6(VAR_5, "Cannot register ICU\n");
  goto fail;
 }


 VAR_6->parent_map_data = (struct intr_map_data_fdt *)FUNC_7(
     VAR_1, sizeof(struct intr_map_data_fdt) +
     + 3 * sizeof(phandle_t), VAR_2 | VAR_3);
 return (0);

fail:
 FUNC_4(VAR_5, VAR_4, &VAR_6->res);
 return (VAR_0);
}
