
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdvi_softc {int dev; } ;
typedef int device_t ;


 int FUNC_0 (struct amdvi_softc*) ;
 int FUNC_1 (struct amdvi_softc*) ;
 int FUNC_2 (struct amdvi_softc*) ;
 int FUNC_3 (struct amdvi_softc*) ;
 int FUNC_4 (struct amdvi_softc*) ;
 int FUNC_5 (struct amdvi_softc*) ;
 int FUNC_6 (struct amdvi_softc*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;

int
FUNC_9(struct amdvi_softc *VAR_0)
{
 device_t VAR_1;
 int VAR_2;

 VAR_1 = VAR_0->dev;

 FUNC_2(VAR_0);

 FUNC_6(VAR_0);

 if ((VAR_2 = FUNC_7(VAR_1)) != 0) {
  FUNC_8(VAR_1, "PCI capability.\n");
  return (VAR_2);
 }
 if ((VAR_2 = FUNC_3(VAR_0)) != 0) {
  FUNC_8(VAR_1, "Couldn't configure command buffer.\n");
  return (VAR_2);
 }
 if ((VAR_2 = FUNC_5(VAR_0)) != 0) {
  FUNC_8(VAR_1, "Couldn't configure event buffer.\n");
  return (VAR_2);
 }
 if ((VAR_2 = FUNC_4(VAR_0)) != 0) {
  FUNC_8(VAR_1, "Couldn't configure device table.\n");
  return (VAR_2);
 }
 if ((VAR_2 = FUNC_1(VAR_0)) != 0) {
  return (VAR_2);
 }
 FUNC_0(VAR_0);
 return (0);
}
