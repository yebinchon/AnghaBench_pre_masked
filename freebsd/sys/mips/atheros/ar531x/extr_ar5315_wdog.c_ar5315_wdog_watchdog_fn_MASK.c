
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;
typedef unsigned long long u_int ;
struct ar5315_wdog_softc {int armed; int dev; scalar_t__ debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 unsigned long long VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_5(void *VAR_3, u_int VAR_4, int *VAR_5)
{
 struct ar5315_wdog_softc *VAR_6 = VAR_3;
 uint64_t VAR_7;

 VAR_4 &= VAR_2;
 if (VAR_6->debug)
  FUNC_4(VAR_6->dev, "ar5315_wdog_watchdog_fn: cmd: %x\n", VAR_4);
 if (VAR_4 > 0) {
  VAR_7 = (uint64_t)(1ULL << VAR_4) * FUNC_1() /
      1000000000;
  if (VAR_6->debug)
   FUNC_4(VAR_6->dev, "ar5315_wdog_watchdog_fn: programming timer: %jx\n", (uintmax_t) VAR_7);




  FUNC_0(FUNC_3(),
      FUNC_1() * 10);
  FUNC_0(FUNC_2(),
      VAR_1);
  FUNC_0(FUNC_3(),
      (VAR_7 & 0xffffffff));
  VAR_6->armed = 1;
  *VAR_5 = 0;
 } else {
  if (VAR_6->debug)
   FUNC_4(VAR_6->dev, "ar5315_wdog_watchdog_fn: disarming\n");
  if (VAR_6->armed) {
   FUNC_0(FUNC_2(),
       VAR_0);
   VAR_6->armed = 0;
  }
 }
}
