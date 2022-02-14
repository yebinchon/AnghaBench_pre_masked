
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar5315_wdog_softc {int dev; scalar_t__ debug; scalar_t__ armed; scalar_t__ reboot_from_watchdog; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,struct ar5315_wdog_softc*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 () ;
 struct ar5315_wdog_softc* FUNC_4 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 struct ar5315_wdog_softc *VAR_4 = FUNC_4(VAR_3);


 VAR_4->reboot_from_watchdog = 0;
 VAR_4->armed = 0;
 VAR_4->debug = 0;
 FUNC_0(FUNC_3(), VAR_0);

 VAR_4->dev = VAR_3;
 FUNC_1(VAR_2, VAR_1, VAR_4, 0);
 FUNC_2(VAR_3);

 return (0);
}
