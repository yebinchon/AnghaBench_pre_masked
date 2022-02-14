
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_mbox_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ti_mbox_softc*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ti_mbox_softc*) ;
 struct ti_mbox_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (struct ti_mbox_softc*,int ) ;
 int FUNC_8 (struct ti_mbox_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_2, int VAR_3, uint32_t VAR_4)
{
 int VAR_5 = 500;
 struct ti_mbox_softc *VAR_6;

 if (VAR_3 < 0 || VAR_3 > 7)
  return (VAR_1);
 VAR_6 = FUNC_5(VAR_2);
 FUNC_2(VAR_6);

 while (FUNC_7(VAR_6, FUNC_1(VAR_3)) == 1 &&
     VAR_5--) {
  FUNC_0(10);
 }
 if (VAR_5 == 0) {
  FUNC_6(VAR_2, "FIFOSTAUS%d stuck\n", VAR_3);
  FUNC_4(VAR_6);
  return (VAR_0);
 }
 FUNC_8(VAR_6, FUNC_3(VAR_3), VAR_4);

 return (0);
}
