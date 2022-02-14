
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; } ;
struct timespec {int dummy; } ;
struct tegra_rtc_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct tegra_rtc_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct timeval*,struct timespec*) ;
 int FUNC_2 (struct tegra_rtc_softc*) ;
 int FUNC_3 (struct tegra_rtc_softc*,int ,int ) ;
 struct tegra_rtc_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct tegra_rtc_softc*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1, struct timespec *VAR_2)
{
 struct tegra_rtc_softc *VAR_3;
 struct timeval VAR_4;

 VAR_3 = FUNC_4(VAR_1);

 FUNC_0(VAR_3);
 FUNC_1(&VAR_4, VAR_2);
 FUNC_5(VAR_3);
 FUNC_3(VAR_3, VAR_0, VAR_4.tv_sec);
 FUNC_2(VAR_3);

 return (0);
}
