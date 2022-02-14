
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timeval {int tv_sec; int tv_usec; } ;
struct timespec {int dummy; } ;
struct tegra_rtc_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct tegra_rtc_softc*) ;
 int FUNC_1 (struct tegra_rtc_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct timeval*,struct timespec*) ;
 int FUNC_3 (struct tegra_rtc_softc*) ;
 struct tegra_rtc_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2, struct timespec *VAR_3)
{
 struct tegra_rtc_softc *VAR_4;
 struct timeval VAR_5;
 uint32_t VAR_6, VAR_7;

 VAR_4 = FUNC_4(VAR_2);

 FUNC_0(VAR_4);
 VAR_6 = FUNC_1(VAR_4, VAR_0);
 VAR_7 = FUNC_1(VAR_4, VAR_1);
 FUNC_3(VAR_4);
 VAR_5.tv_sec = VAR_7;
 VAR_5.tv_usec = VAR_6 * 1000;
 FUNC_2(&VAR_5, VAR_3);
 return (0);
}
