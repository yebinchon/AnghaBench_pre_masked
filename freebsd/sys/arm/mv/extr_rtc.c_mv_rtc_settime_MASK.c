
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timespec {int tv_nsec; int tv_sec; } ;
struct mv_rtc_softc {int dummy; } ;
struct clocktime {scalar_t__ year; scalar_t__ mon; scalar_t__ day; scalar_t__ dow; scalar_t__ hour; scalar_t__ min; scalar_t__ sec; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct timespec*,struct clocktime*) ;
 struct mv_rtc_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct mv_rtc_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3, struct timespec *VAR_4)
{
 struct clocktime VAR_5;
 struct mv_rtc_softc *VAR_6;
 uint32_t VAR_7;

 VAR_6 = FUNC_2(VAR_3);


 if (VAR_4->tv_nsec >= 500000000)
  VAR_4->tv_sec++;
 VAR_4->tv_nsec = 0;
 FUNC_1(VAR_4, &VAR_5);

 VAR_7 = FUNC_0(VAR_5.sec) | (FUNC_0(VAR_5.min) << 8) |
     (FUNC_0(VAR_5.hour) << 16) | (FUNC_0( VAR_5.dow + 1) << 24);
 FUNC_3(VAR_6, VAR_1, VAR_7);

 VAR_7 = FUNC_0(VAR_5.day) | (FUNC_0(VAR_5.mon) << 8) |
     (FUNC_0(VAR_5.year - VAR_2) << 16);
 FUNC_3(VAR_6, VAR_0, VAR_7);

 return (0);
}
