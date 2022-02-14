
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
struct mv_rtc_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct mv_rtc_softc*) ;
 int FUNC_1 (struct mv_rtc_softc*) ;
 int VAR_0 ;
 struct mv_rtc_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct mv_rtc_softc*,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, struct timespec *VAR_2)
{
 struct mv_rtc_softc *VAR_3;
 uint32_t VAR_4, VAR_5;

 VAR_3 = FUNC_2(VAR_1);

 FUNC_0(VAR_3);




 VAR_4 = FUNC_3(VAR_3, VAR_0);
 VAR_5 = FUNC_3(VAR_3, VAR_0);
 if (VAR_5 - VAR_4 > 1)
  VAR_5 = FUNC_3(VAR_3, VAR_0);

 FUNC_1(VAR_3);

 VAR_2->tv_sec = VAR_5;

 VAR_2->tv_nsec = 0;

 return (0);
}
