
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_gic_softc {int gic_bus; } ;
typedef int device_t ;


 intptr_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct arm_gic_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int ,intptr_t,int ,struct arm_gic_softc*,scalar_t__) ;
 int FUNC_8 (int ,intptr_t) ;
 int * FUNC_9 (int ,intptr_t) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_6)
{
 struct arm_gic_softc *VAR_7 = FUNC_5(VAR_6);
 intptr_t VAR_8;
 int VAR_9;

 VAR_7->gic_bus = VAR_2;

 VAR_9 = FUNC_1(VAR_6);
 if (VAR_9 != 0)
  return (VAR_9);

 VAR_8 = VAR_0;





 if (FUNC_9(VAR_6, VAR_8) == ((void*)0)) {
  FUNC_6(VAR_6, "could not register PIC\n");
  goto cleanup;
 }




 if (FUNC_7(VAR_6, VAR_8, VAR_5, VAR_7,
     VAR_4 - VAR_3 + 1) != 0) {
  FUNC_6(VAR_6, "could not set PIC as a root\n");
  FUNC_8(VAR_6, VAR_8);
  goto cleanup;
 }

 if (FUNC_0(VAR_6)) {
  FUNC_4(VAR_6);
  return (FUNC_3(VAR_6));
 }

 return (0);

cleanup:
 FUNC_2(VAR_6);
 return(VAR_1);
}
