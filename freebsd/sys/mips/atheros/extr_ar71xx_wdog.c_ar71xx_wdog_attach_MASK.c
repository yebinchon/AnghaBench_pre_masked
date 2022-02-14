
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar71xx_wdog_softc {int reboot_from_watchdog; int dev; scalar_t__ debug; scalar_t__ armed; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,struct ar71xx_wdog_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 struct ar71xx_wdog_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_5)
{
 struct ar71xx_wdog_softc *VAR_6 = FUNC_4(VAR_5);


 VAR_6->reboot_from_watchdog = 0;
 VAR_6->armed = 0;
 VAR_6->debug = 0;

 if (FUNC_0(VAR_0) & VAR_2) {
  FUNC_5 (VAR_5,
      "Previous reset was due to watchdog timeout\n");
  VAR_6->reboot_from_watchdog = 1;
 }

 FUNC_1(VAR_0, VAR_1);

 VAR_6->dev = VAR_5;
 FUNC_2(VAR_4, VAR_3, VAR_6, 0);
 FUNC_3(VAR_5);

 return (0);
}
