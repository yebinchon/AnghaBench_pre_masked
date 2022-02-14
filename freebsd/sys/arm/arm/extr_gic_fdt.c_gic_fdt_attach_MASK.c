
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gic_intrhand; int ** gic_res; int gic_bus; } ;
struct arm_gic_fdt_softc {TYPE_1__ base; } ;
typedef intptr_t phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (intptr_t,int ) ;
 intptr_t FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int *,int ,int ,int *,struct arm_gic_fdt_softc*,int *) ;
 struct arm_gic_fdt_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 scalar_t__ FUNC_10 (int ,intptr_t,int ,struct arm_gic_fdt_softc*,scalar_t__) ;
 int FUNC_11 (int ,intptr_t) ;
 int * FUNC_12 (int ,intptr_t) ;
 intptr_t FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_6)
{
 struct arm_gic_fdt_softc *VAR_7 = FUNC_8(VAR_6);
 phandle_t VAR_8;
 intptr_t VAR_9;
 int VAR_10;

 VAR_7->base.gic_bus = VAR_1;

 VAR_10 = FUNC_3(VAR_6);
 if (VAR_10 != 0)
  return (VAR_10);

 VAR_9 = FUNC_1(FUNC_14(VAR_6));





 if (FUNC_12(VAR_6, VAR_9) == ((void*)0)) {
  FUNC_9(VAR_6, "could not register PIC\n");
  goto cleanup;
 }






 VAR_8 = FUNC_13(FUNC_14(VAR_6));
 if (VAR_8 == 0 || VAR_9 == VAR_8) {
  if (FUNC_10(VAR_6, VAR_9, VAR_5, VAR_7,
      VAR_3 - VAR_2 + 1) != 0) {
   FUNC_9(VAR_6, "could not set PIC as a root\n");
   FUNC_11(VAR_6, VAR_9);
   goto cleanup;
  }
 } else {
  if (VAR_7->base.gic_res[2] == ((void*)0)) {
   FUNC_9(VAR_6,
       "not root PIC must have defined interrupt\n");
   FUNC_11(VAR_6, VAR_9);
   goto cleanup;
  }
  if (FUNC_7(VAR_6, VAR_7->base.gic_res[2], VAR_4,
      VAR_5, ((void*)0), VAR_7, &VAR_7->base.gic_intrhand)) {
   FUNC_9(VAR_6, "could not setup irq handler\n");
   FUNC_11(VAR_6, VAR_9);
   goto cleanup;
  }
 }

 FUNC_0(VAR_9, VAR_6);


 if (FUNC_2(VAR_6)) {
  FUNC_6(VAR_6);
  return (FUNC_5(VAR_6));
 }

 return (0);

cleanup:
 FUNC_4(VAR_6);
 return(VAR_0);
}
