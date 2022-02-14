
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
struct time_regs {int hour; int sec; int min; int day; int month; int year; } ;
struct ds13rtc_softc {scalar_t__ use_ampm; int dev; scalar_t__ use_century; scalar_t__ is_binary_counter; int osfaddr; } ;
struct bcd_clocktime {int ispm; int sec; int min; int hour; int day; int mon; int year; scalar_t__ nsec; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct bcd_clocktime*,struct timespec*,scalar_t__) ;
 int FUNC_1 (int ,int ,struct bcd_clocktime*) ;
 struct ds13rtc_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct ds13rtc_softc*,int ,int*) ;
 int FUNC_5 (struct ds13rtc_softc*,struct time_regs*) ;
 int FUNC_6 (struct ds13rtc_softc*,int *) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_12, struct timespec *VAR_13)
{
 struct bcd_clocktime VAR_14;
 struct time_regs VAR_15;
 struct ds13rtc_softc *VAR_16;
 int VAR_17;
 uint8_t VAR_18, VAR_19;

 VAR_16 = FUNC_2(VAR_12);


 if ((VAR_17 = FUNC_4(VAR_16, VAR_16->osfaddr, &VAR_18)) != 0) {
  return (VAR_17);
 }
 if (VAR_18 & VAR_3)
  return (VAR_11);


 if (VAR_16->is_binary_counter) {
  VAR_13->tv_nsec = 0;
  return (FUNC_6(VAR_16, &VAR_13->tv_sec));
 }




 if ((VAR_17 = FUNC_5(VAR_16, &VAR_15)) != 0) {
  FUNC_3(VAR_12, "cannot read RTC time\n");
  return (VAR_17);
 }

 if (VAR_16->use_ampm)
  VAR_19 = VAR_4;
 else
  VAR_19 = VAR_5;

 VAR_14.nsec = 0;
 VAR_14.ispm = VAR_15.hour & VAR_1;
 VAR_14.sec = VAR_15.sec & VAR_9;
 VAR_14.min = VAR_15.min & VAR_7;
 VAR_14.hour = VAR_15.hour & VAR_19;
 VAR_14.day = VAR_15.day & VAR_6;
 VAR_14.mon = VAR_15.month & VAR_8;
 VAR_14.year = VAR_15.year & VAR_10;





 if (VAR_16->use_century)
  VAR_14.year += (VAR_15.month & VAR_2) ? 0x100 : 0;

 FUNC_1(VAR_16->dev, VAR_0, &VAR_14);
 VAR_17 = FUNC_0(&VAR_14, VAR_13, VAR_16->use_ampm);

 return (VAR_17);
}
