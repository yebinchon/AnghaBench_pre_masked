
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct timespec {int tv_sec; } ;
struct ds3231_softc {int sc_status; scalar_t__ sc_last_c; scalar_t__ sc_use_ampm; int sc_dev; } ;
struct bcd_clocktime {int sec; int min; int hour; int day; int dow; int mon; int year; scalar_t__ ispm; } ;
typedef int device_t ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ,struct bcd_clocktime*) ;
 int FUNC_1 (struct timespec*,struct bcd_clocktime*,scalar_t__) ;
 struct ds3231_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct ds3231_softc*) ;
 int FUNC_5 (struct ds3231_softc*,int ,int ) ;
 int FUNC_6 (int ,size_t,int*,int,int ) ;
 scalar_t__ FUNC_7 () ;

__attribute__((used)) static int
FUNC_8(device_t VAR_13, struct timespec *VAR_14)
{
 int VAR_15;
 struct bcd_clocktime VAR_16;
 struct ds3231_softc *VAR_17;
 uint8_t VAR_18[7];
 uint8_t VAR_19;

 VAR_17 = FUNC_2(VAR_13);





 VAR_14->tv_sec -= FUNC_7();
 FUNC_1(VAR_14, &VAR_16, VAR_17->sc_use_ampm);
 FUNC_0(VAR_17->sc_dev, VAR_0, &VAR_16);


 if (VAR_17->sc_use_ampm) {
  VAR_19 = VAR_5;
  if (VAR_16.ispm)
   VAR_19 |= VAR_4;
 } else
  VAR_19 = 0;

 VAR_18[VAR_8] = VAR_16.sec;
 VAR_18[VAR_6] = VAR_16.min;
 VAR_18[VAR_3] = VAR_16.hour | VAR_19;
 VAR_18[VAR_2] = VAR_16.day;
 VAR_18[VAR_10] = VAR_16.dow + 1;
 VAR_18[VAR_7] = VAR_16.mon;
 VAR_18[VAR_11] = VAR_16.year & 0xff;
 if (VAR_17->sc_last_c)
  VAR_18[VAR_7] |= VAR_1;


 VAR_15 = FUNC_6(VAR_13, VAR_8, VAR_18, sizeof(VAR_18),
     VAR_12);
 if (VAR_15 != 0) {
  FUNC_3(VAR_13, "cannot write to RTC.\n");
  return (VAR_15);
 }





 if (VAR_17->sc_status & VAR_9) {
  if ((VAR_15 = FUNC_4(VAR_17)) != 0) {
   FUNC_3(VAR_13, "cannot read from RTC.\n");
   return (VAR_15);
  }
  VAR_17->sc_status &= ~VAR_9;
  if ((VAR_15 = FUNC_5(VAR_17, 0, 0)) != 0) {
   FUNC_3(VAR_13, "cannot write to RTC.\n");
   return (VAR_15);
  }
 }

 return (VAR_15);
}
