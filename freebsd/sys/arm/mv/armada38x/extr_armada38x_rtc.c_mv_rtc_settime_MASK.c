
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_nsec; int tv_sec; } ;
struct mv_rtc_softc {int dummy; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mv_rtc_softc*) ;
 int FUNC_1 (struct mv_rtc_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mv_rtc_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct mv_rtc_softc*,int ) ;
 int FUNC_4 (struct mv_rtc_softc*,int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_6, struct timespec *VAR_7)
{
 struct mv_rtc_softc *VAR_8;

 VAR_8 = FUNC_2(VAR_6);


 if (VAR_7->tv_nsec >= VAR_0)
  VAR_7->tv_sec++;
 VAR_7->tv_nsec = 0;

 FUNC_0(VAR_8);

 if ((FUNC_3(VAR_8, VAR_1) & VAR_3) !=
     VAR_2) {

  FUNC_5(VAR_6);
 }






 FUNC_4(VAR_8, VAR_4, 0x0);
 FUNC_4(VAR_8, VAR_4, 0x0);
 FUNC_4(VAR_8, VAR_5, VAR_7->tv_sec);

 FUNC_1(VAR_8);

 return (0);
}
