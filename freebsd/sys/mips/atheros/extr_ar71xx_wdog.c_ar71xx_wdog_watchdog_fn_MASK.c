
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;
typedef unsigned long long u_int ;
struct ar71xx_wdog_softc {int armed; int dev; scalar_t__ debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long long VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_3(void *VAR_5, u_int VAR_6, int *VAR_7)
{
 struct ar71xx_wdog_softc *VAR_8 = VAR_5;
 uint64_t VAR_9;

 VAR_6 &= VAR_4;
 if (VAR_8->debug)
  FUNC_2(VAR_8->dev, "ar71xx_wdog_watchdog_fn: cmd: %x\n", VAR_6);
 if (VAR_6 > 0) {
  VAR_9 = (uint64_t)(1ULL << VAR_6) * FUNC_1() /
      1000000000;
  if (VAR_8->debug)
   FUNC_2(VAR_8->dev, "ar71xx_wdog_watchdog_fn: programming timer: %jx\n", (uintmax_t) VAR_9);




  FUNC_0(VAR_1,
      FUNC_1() * 10);
  FUNC_0(VAR_0,
      VAR_3);
  FUNC_0(VAR_1,
      (VAR_9 & 0xffffffff));
  VAR_8->armed = 1;
  *VAR_7 = 0;
 } else {
  if (VAR_8->debug)
   FUNC_2(VAR_8->dev, "ar71xx_wdog_watchdog_fn: disarming\n");
  if (VAR_8->armed) {
   FUNC_0(VAR_0,
       VAR_2);
   VAR_8->armed = 0;
  }
 }
}
