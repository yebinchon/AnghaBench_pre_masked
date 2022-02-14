
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct ar71xx_wdog_softc {int reboot_from_watchdog; int armed; int debug; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_1 (struct sysctl_oid*) ;
 struct ar71xx_wdog_softc* FUNC_2 (int ) ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 struct sysctl_oid* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_3)
{
 struct ar71xx_wdog_softc *VAR_4 = FUNC_2(VAR_3);

        struct sysctl_ctx_list *VAR_5 = FUNC_3(VAR_4->dev);
        struct sysctl_oid *VAR_6 = FUNC_4(VAR_4->dev);

        FUNC_0(VAR_5, FUNC_1(VAR_6), VAR_2,
                "debug", VAR_1, &VAR_4->debug, 0,
                "enable watchdog debugging");
        FUNC_0(VAR_5, FUNC_1(VAR_6), VAR_2,
                "armed", VAR_0, &VAR_4->armed, 0,
                "whether the watchdog is armed");
        FUNC_0(VAR_5, FUNC_1(VAR_6), VAR_2,
                "reboot_from_watchdog", VAR_0, &VAR_4->reboot_from_watchdog, 0,
                "whether the system rebooted from the watchdog");
}
