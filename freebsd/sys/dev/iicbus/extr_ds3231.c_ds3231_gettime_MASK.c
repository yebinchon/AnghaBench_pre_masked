
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct timespec {int dummy; } ;
struct ds3231_softc {int sc_status; int sc_use_ampm; int sc_last_c; int sc_year0; int sc_dev; } ;
struct bcd_clocktime {int sec; int min; int hour; int day; int mon; int year; int ispm; scalar_t__ nsec; } ;
typedef int device_t ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct bcd_clocktime*,struct timespec*,int) ;
 int FUNC_1 (int ,int ,struct bcd_clocktime*) ;
 struct ds3231_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct ds3231_softc*) ;
 int FUNC_5 (int ,size_t,int*,int,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_20, struct timespec *VAR_21)
{
 int VAR_22, VAR_23;
 struct bcd_clocktime VAR_24;
 struct ds3231_softc *VAR_25;
 uint8_t VAR_26[7], VAR_27;

 VAR_25 = FUNC_2(VAR_20);


 if ((VAR_23 = FUNC_4(VAR_25)) != 0) {
  FUNC_3(VAR_20, "cannot read from RTC.\n");
  return (VAR_23);
 }
 if (VAR_25->sc_status & VAR_15)
  return (VAR_18);

 VAR_23 = FUNC_5(VAR_25->sc_dev, VAR_13, VAR_26, sizeof(VAR_26),
     VAR_19);
 if (VAR_23 != 0) {
  FUNC_3(VAR_20, "cannot read from RTC.\n");
  return (VAR_23);
 }


 if (VAR_26[VAR_4] & VAR_8) {
  VAR_25->sc_use_ampm = 1;
  VAR_27 = VAR_6;
 } else
  VAR_27 = VAR_7;

 VAR_24.nsec = 0;
 VAR_24.sec = VAR_26[VAR_13] & VAR_14;
 VAR_24.min = VAR_26[VAR_9] & VAR_10;
 VAR_24.hour = VAR_26[VAR_4] & VAR_27;
 VAR_24.day = VAR_26[VAR_2] & VAR_3;
 VAR_24.mon = VAR_26[VAR_11] & VAR_12;
 VAR_24.year = VAR_26[VAR_16] & VAR_17;
 VAR_24.ispm = VAR_26[VAR_4] & VAR_5;






 VAR_22 = (VAR_26[VAR_11] & VAR_1) ? 1 : 0;
 if (VAR_25->sc_last_c == -1)
  VAR_25->sc_last_c = VAR_22;
 else if (VAR_22 != VAR_25->sc_last_c) {
  VAR_25->sc_year0 += 0x100;
  VAR_25->sc_last_c = VAR_22;
 }
 VAR_24.year |= VAR_25->sc_year0;

 FUNC_1(VAR_25->sc_dev, VAR_0, &VAR_24);
 return (FUNC_0(&VAR_24, VAR_21, VAR_25->sc_use_ampm));
}
