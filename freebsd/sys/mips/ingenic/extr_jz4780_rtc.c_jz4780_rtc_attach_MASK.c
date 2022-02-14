
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jz4780_rtc_softc {int res; int dev; } ;
typedef int device_t ;


 int FUNC_0 (struct jz4780_rtc_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int) ;
 struct jz4780_rtc_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (struct jz4780_rtc_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_4)
{
 struct jz4780_rtc_softc *VAR_5 = FUNC_3(VAR_4);
 uint32_t VAR_6;
 int VAR_7;

 VAR_5->dev = VAR_4;

 if (FUNC_1(VAR_4, VAR_3, VAR_5->res)) {
  FUNC_4(VAR_4, "could not allocate resources for device\n");
  return (VAR_0);
 }

 VAR_6 = FUNC_0(VAR_5, VAR_1);
 if (VAR_6 != 0x12345678) {
  VAR_7 = FUNC_6(VAR_5, VAR_1, 0x12345678);
  if (VAR_7 == 0)
   VAR_7 = FUNC_6(VAR_5, VAR_2, 0);
  if (VAR_7) {
   FUNC_4(VAR_4, "Unable to write RTC registers\n");
   FUNC_5(VAR_4);
   return (VAR_7);
  }
 }
 FUNC_2(VAR_4, 1000000);
 return (0);
}
