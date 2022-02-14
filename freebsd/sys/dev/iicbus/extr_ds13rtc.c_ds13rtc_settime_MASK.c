
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct timespec {int tv_sec; } ;
struct time_regs {int hour; int month; int year; int wday; int day; int min; int sec; } ;
struct ds13rtc_softc {scalar_t__ osfaddr; scalar_t__ secaddr; scalar_t__ use_century; scalar_t__ use_ampm; int dev; scalar_t__ is_binary_counter; } ;
struct bcd_clocktime {int year; int hour; int mon; int dow; int day; int min; int sec; scalar_t__ ispm; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,struct bcd_clocktime*) ;
 int FUNC_1 (struct timespec*,struct bcd_clocktime*,scalar_t__) ;
 struct ds13rtc_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct ds13rtc_softc*,scalar_t__,int*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct ds13rtc_softc*,scalar_t__,int) ;
 int FUNC_7 (struct ds13rtc_softc*,struct time_regs*) ;
 int FUNC_8 (struct ds13rtc_softc*,int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_5, struct timespec *VAR_6)
{
 struct bcd_clocktime VAR_7;
 struct time_regs VAR_8;
 struct ds13rtc_softc *VAR_9;
 int VAR_10;
 uint8_t VAR_11, VAR_12, VAR_13;

 VAR_9 = FUNC_2(VAR_5);





 VAR_6->tv_sec -= FUNC_5();


 if (VAR_9->is_binary_counter)
  return (FUNC_8(VAR_9, VAR_6->tv_sec));

 FUNC_1(VAR_6, &VAR_7, VAR_9->use_ampm);
 FUNC_0(VAR_9->dev, VAR_0, &VAR_7);


 VAR_13 = 0;
 if (VAR_9->use_ampm) {
  VAR_13 = VAR_1;
  if (VAR_7.ispm)
   VAR_13 |= VAR_2;
 }


 VAR_11 = 0;
 if (VAR_9->use_century) {
  if (VAR_7.year >= 2000)
   VAR_11 |= VAR_3;
 }

 VAR_8.sec = VAR_7.sec;
 VAR_8.min = VAR_7.min;
 VAR_8.hour = VAR_7.hour | VAR_13;
 VAR_8.day = VAR_7.day;
 VAR_8.month = VAR_7.mon | VAR_11;
 VAR_8.year = VAR_7.year & 0xff;
 VAR_8.wday = VAR_7.dow;





 if ((VAR_10 = FUNC_7(VAR_9, &VAR_8)) != 0)
  goto errout;
 if (VAR_9->osfaddr != VAR_9->secaddr) {
  if ((VAR_10 = FUNC_4(VAR_9, VAR_9->osfaddr, &VAR_12)) != 0)
   goto errout;
  if (VAR_12 & VAR_4) {
   VAR_12 &= ~VAR_4;
   VAR_10 = FUNC_6(VAR_9, VAR_9->osfaddr, VAR_12);
  }
 }

errout:

 if (VAR_10 != 0)
  FUNC_3(VAR_5, "cannot update RTC time\n");

 return (VAR_10);
}
