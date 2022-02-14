
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct awg_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct awg_softc*,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct awg_softc*,int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 struct awg_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_5)
{
 struct awg_softc *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_5(VAR_5);


 if (FUNC_4(VAR_5) != 0) {
  FUNC_6(VAR_5, "failed to reset PHY\n");
  return (VAR_2);
 }


 FUNC_2(VAR_6, VAR_1, VAR_0);


 for (VAR_7 = VAR_4; VAR_7 > 0; VAR_7--) {
  if ((FUNC_1(VAR_6, VAR_1) & VAR_0) == 0)
   break;
  FUNC_0(10);
 }
 if (VAR_7 == 0) {
  FUNC_6(VAR_5, "soft reset timed out\n");



  return (VAR_3);
 }

 return (0);
}
