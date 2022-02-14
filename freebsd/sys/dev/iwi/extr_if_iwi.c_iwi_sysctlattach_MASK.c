
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct iwi_softc {scalar_t__ antenna; scalar_t__ bluetooth; int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int ,scalar_t__*,int ,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int,struct iwi_softc*,int ,int ,char*,char*) ;
 int FUNC_2 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 struct sysctl_oid* FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_5(struct iwi_softc *VAR_8)
{
 struct sysctl_ctx_list *VAR_9 = FUNC_3(VAR_8->sc_dev);
 struct sysctl_oid *VAR_10 = FUNC_4(VAR_8->sc_dev);

 FUNC_1(VAR_9, FUNC_2(VAR_10), VAR_5, "radio",
     VAR_2 | VAR_0, VAR_8, 0, VAR_6, "I",
     "radio transmitter switch state (0=off, 1=on)");

 FUNC_1(VAR_9, FUNC_2(VAR_10), VAR_5, "stats",
     VAR_3 | VAR_0, VAR_8, 0, VAR_7, "S",
     "statistics");

 VAR_8->bluetooth = 0;
 FUNC_0(VAR_9, FUNC_2(VAR_10), VAR_5, "bluetooth",
     VAR_1, &VAR_8->bluetooth, 0, "bluetooth coexistence");

 VAR_8->antenna = VAR_4;
 FUNC_0(VAR_9, FUNC_2(VAR_10), VAR_5, "antenna",
     VAR_1, &VAR_8->antenna, 0, "antenna (0=auto)");
}
