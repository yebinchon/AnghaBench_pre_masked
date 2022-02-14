
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct iwi_softc {int sc_ledstate; int sc_ledidle; int sc_ledpin; int sc_nictype; int sc_softled; int sc_mtx; int sc_ledtimer; scalar_t__ sc_blinking; int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,struct iwi_softc*,int ,int ,char*,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int,int*,int ,char*) ;
 int FUNC_2 (struct sysctl_oid*) ;
 int FUNC_3 (int *,int *,int ) ;
 struct sysctl_ctx_list* FUNC_4 (int ) ;
 struct sysctl_oid* FUNC_5 (int ) ;
 int VAR_7 ;
 int FUNC_6 (struct iwi_softc*,int ) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_7(struct iwi_softc *VAR_9)
{
 struct sysctl_ctx_list *VAR_10 = FUNC_4(VAR_9->sc_dev);
 struct sysctl_oid *VAR_11 = FUNC_5(VAR_9->sc_dev);

 VAR_9->sc_blinking = 0;
 VAR_9->sc_ledstate = 1;
 VAR_9->sc_ledidle = (2700*VAR_7)/1000;
 FUNC_3(&VAR_9->sc_ledtimer, &VAR_9->sc_mtx, 0);

 FUNC_0(VAR_10, FUNC_2(VAR_11), VAR_6,
  "softled", VAR_2 | VAR_1, VAR_9, 0,
  VAR_8, "I", "enable/disable software LED support");
 FUNC_1(VAR_10, FUNC_2(VAR_11), VAR_6,
  "ledpin", VAR_1, &VAR_9->sc_ledpin, 0,
  "pin setting to turn activity LED on");
 FUNC_1(VAR_10, FUNC_2(VAR_11), VAR_6,
  "ledidle", VAR_1, &VAR_9->sc_ledidle, 0,
  "idle time for inactivity LED (ticks)");

 FUNC_1(VAR_10, FUNC_2(VAR_11), VAR_6,
  "nictype", VAR_0, &VAR_9->sc_nictype, 0,
  "NIC type from EEPROM");

 VAR_9->sc_ledpin = VAR_4;
 VAR_9->sc_softled = 1;

 VAR_9->sc_nictype = (FUNC_6(VAR_9, VAR_3) >> 8) & 0xff;
 if (VAR_9->sc_nictype == 1) {



  VAR_9->sc_ledpin = VAR_5;
 }
}
