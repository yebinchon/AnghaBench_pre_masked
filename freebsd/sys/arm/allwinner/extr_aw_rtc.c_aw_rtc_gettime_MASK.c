
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct timespec {int dummy; } ;
struct clocktime {int dow; scalar_t__ nsec; scalar_t__ year; int mon; int day; int hour; int min; int sec; } ;
struct aw_rtc_softc {TYPE_1__* conf; } ;
typedef int device_t ;
struct TYPE_2__ {int rtc_date; int rtc_time; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct aw_rtc_softc*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (struct clocktime*,struct timespec*) ;
 struct aw_rtc_softc* FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_2, struct timespec *VAR_3)
{
 struct aw_rtc_softc *VAR_4 = FUNC_8(VAR_2);
 struct clocktime VAR_5;
 uint32_t VAR_6, VAR_7;

 VAR_6 = FUNC_6(VAR_4, VAR_4->conf->rtc_date);
 VAR_7 = FUNC_6(VAR_4, VAR_4->conf->rtc_time);

 if ((VAR_7 & VAR_0) == 0)
  VAR_6 = FUNC_6(VAR_4, VAR_4->conf->rtc_date);

 VAR_5.sec = FUNC_4(VAR_7);
 VAR_5.min = FUNC_2(VAR_7);
 VAR_5.hour = FUNC_1(VAR_7);
 VAR_5.day = FUNC_0(VAR_6);
 VAR_5.mon = FUNC_3(VAR_6);
 VAR_5.year = FUNC_5(VAR_6) + VAR_1;
 VAR_5.dow = -1;

 VAR_5.nsec = 0;

 return (FUNC_7(&VAR_5, VAR_3));
}
