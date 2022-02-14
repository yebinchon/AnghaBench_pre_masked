
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct timespec {int tv_sec; } ;
struct ds1307_softc {int sc_dev; scalar_t__ sc_mcp7941x; scalar_t__ sc_use_ampm; } ;
struct bcd_clocktime {int sec; int min; int hour; int day; int dow; int mon; int year; scalar_t__ ispm; } ;
typedef int device_t ;
typedef int data ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,struct bcd_clocktime*) ;
 int FUNC_2 (struct timespec*,struct bcd_clocktime*,scalar_t__) ;
 struct ds1307_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,size_t,int*,int,int ) ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static int
FUNC_7(device_t VAR_14, struct timespec *VAR_15)
{
 struct bcd_clocktime VAR_16;
 struct ds1307_softc *VAR_17;
 int VAR_18, VAR_19;
 uint8_t VAR_20[7];
 uint8_t VAR_21;

 VAR_17 = FUNC_3(VAR_14);





 VAR_15->tv_sec -= FUNC_6();
 FUNC_2(VAR_15, &VAR_16, VAR_17->sc_use_ampm);
 FUNC_1(VAR_17->sc_dev, VAR_0, &VAR_16);


 if (VAR_17->sc_use_ampm) {
  VAR_21 = VAR_4;
  if (VAR_16.ispm)
   VAR_21 |= VAR_3;
 } else
  VAR_21 = 0;

 VAR_20[VAR_7] = VAR_16.sec;
 VAR_20[VAR_5] = VAR_16.min;
 VAR_20[VAR_2] = VAR_16.hour | VAR_21;
 VAR_20[VAR_1] = VAR_16.day;
 VAR_20[VAR_8] = VAR_16.dow;
 VAR_20[VAR_6] = VAR_16.mon;
 VAR_20[VAR_9] = VAR_16.year & 0xff;
 if (VAR_17->sc_mcp7941x) {
  VAR_20[VAR_7] |= VAR_12;
  VAR_20[VAR_8] |= VAR_13;
  VAR_19 = FUNC_0(VAR_16.year >> 8) * 100 + FUNC_0(VAR_16.year & 0xff);
  if ((VAR_19 % 4 == 0 && VAR_19 % 100 != 0) || VAR_19 % 400 == 0)
   VAR_20[VAR_6] |= VAR_11;
 }

 VAR_18 = FUNC_5(VAR_17->sc_dev, VAR_7, VAR_20, sizeof(VAR_20),
     VAR_10);
 if (VAR_18 != 0)
  FUNC_4(VAR_14, "cannot write to RTC.\n");

 return (VAR_18);
}
