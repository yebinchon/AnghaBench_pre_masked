
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct timespec {scalar_t__ tv_nsec; int tv_sec; } ;
struct clocktime {scalar_t__ year; int hour; int min; int sec; int mon; int day; } ;
struct aw_rtc_softc {TYPE_1__* conf; } ;
typedef int device_t ;
struct TYPE_2__ {int rtc_time; int rtc_date; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct aw_rtc_softc*,int ) ;
 int VAR_4 ;
 int FUNC_3 (struct aw_rtc_softc*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_11 (struct timespec*,struct clocktime*) ;
 struct aw_rtc_softc* FUNC_12 (int ) ;
 int FUNC_13 (int ,char*) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_8, struct timespec *VAR_9)
{
 struct aw_rtc_softc *VAR_10 = FUNC_12(VAR_8);
 struct clocktime VAR_11;
 uint32_t VAR_12, VAR_13, VAR_14;


 if (VAR_9->tv_nsec >= VAR_1)
  VAR_9->tv_sec++;
 VAR_9->tv_nsec = 0;

 FUNC_11(VAR_9, &VAR_11);

 if ((VAR_11.year < VAR_6) || (VAR_11.year > VAR_5)) {
  FUNC_13(VAR_8, "could not set time, year out of range\n");
  return (VAR_0);
 }

 for (VAR_12 = 0; FUNC_2(VAR_10, VAR_3) & VAR_2; VAR_12++) {
  if (VAR_12 > VAR_4) {
   FUNC_13(VAR_8, "could not set time, RTC busy\n");
   return (VAR_0);
  }
  FUNC_0(1);
 }

 FUNC_3(VAR_10, VAR_10->conf->rtc_time, 0);

 VAR_13 = FUNC_4(VAR_11.day) | FUNC_8(VAR_11.mon) |
  FUNC_10(VAR_11.year - VAR_7) |
  FUNC_6(FUNC_1(VAR_11.year));

 VAR_14 = FUNC_9(VAR_11.sec) | FUNC_7(VAR_11.min) |
  FUNC_5(VAR_11.hour);

 for (VAR_12 = 0; FUNC_2(VAR_10, VAR_3) & VAR_2; VAR_12++) {
  if (VAR_12 > VAR_4) {
   FUNC_13(VAR_8, "could not set date, RTC busy\n");
   return (VAR_0);
  }
  FUNC_0(1);
 }
 FUNC_3(VAR_10, VAR_10->conf->rtc_date, VAR_13);

 for (VAR_12 = 0; FUNC_2(VAR_10, VAR_3) & VAR_2; VAR_12++) {
  if (VAR_12 > VAR_4) {
   FUNC_13(VAR_8, "could not set time, RTC busy\n");
   return (VAR_0);
  }
  FUNC_0(1);
 }
 FUNC_3(VAR_10, VAR_10->conf->rtc_time, VAR_14);

 FUNC_0(VAR_4);

 return (0);
}
