
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ti_wdt_softc {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (struct ti_wdt_softc*) ;
 int FUNC_2 (struct ti_wdt_softc*) ;
 int FUNC_3 (struct ti_wdt_softc*,int ) ;
 int FUNC_4 (struct ti_wdt_softc*,int ) ;
 int FUNC_5 (struct ti_wdt_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_6(void *VAR_7, unsigned int VAR_8, int *VAR_9)
{
 struct ti_wdt_softc *VAR_10;
 uint8_t VAR_11;
 uint32_t VAR_12;
 uint32_t VAR_13;

 VAR_10 = VAR_7;
 FUNC_1(VAR_10);
 if (VAR_8 == VAR_6) {
  *VAR_9 = 0;
  return;
 }
 FUNC_0("cmd 0x%x\n", VAR_8);
 VAR_8 &= VAR_4;
 if (VAR_8 < VAR_5) {
  *VAR_9 = VAR_0;
  return;
 }
 VAR_11 = 1 << (VAR_8 - VAR_5);
 FUNC_0("seconds %u\n", VAR_11);
 VAR_13 = 0;
 VAR_12 = 0xffffffff - (VAR_11 * (32768 / (1 << VAR_13))) + 1;
 FUNC_0("wldr 0x%x\n", VAR_12);
 FUNC_5(VAR_10, VAR_1, VAR_12);



 FUNC_5(VAR_10, VAR_2,
     FUNC_3(VAR_10, VAR_2) + 1);
 FUNC_4(VAR_10, VAR_3);
 FUNC_2(VAR_10);
 *VAR_9 = 0;
}
