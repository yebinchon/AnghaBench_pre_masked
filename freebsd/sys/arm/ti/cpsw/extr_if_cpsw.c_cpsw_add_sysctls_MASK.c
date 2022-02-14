
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct cpsw_softc {int active_slave; int rx; int tx; int dualemac; int debug; int dev; } ;
struct TYPE_2__ {char* oid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int,char*,int,int *,int ,char*) ;
 struct sysctl_oid* FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int,char*,int,int *,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int,char*,int,struct cpsw_softc*,int,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_3 (struct sysctl_oid*) ;
 int FUNC_4 (struct sysctl_ctx_list*,struct sysctl_oid*,int *) ;
 int FUNC_5 (struct sysctl_ctx_list*,struct sysctl_oid*,struct cpsw_softc*) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct sysctl_ctx_list* FUNC_6 (int ) ;
 struct sysctl_oid* FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct cpsw_softc *VAR_12)
{
 struct sysctl_ctx_list *VAR_13;
 struct sysctl_oid *VAR_14, *VAR_15, *VAR_16;
 struct sysctl_oid_list *VAR_17, *VAR_18, *VAR_19;
 struct sysctl_oid_list *VAR_20, *VAR_21;
 char VAR_22[16];
 int VAR_23;

 VAR_13 = FUNC_6(VAR_12->dev);
 VAR_17 = FUNC_3(FUNC_7(VAR_12->dev));

 FUNC_0(VAR_13, VAR_17, VAR_6, "debug",
     VAR_3, &VAR_12->debug, 0, "Enable switch debug messages");

 FUNC_2(VAR_13, VAR_17, VAR_6, "attachedSecs",
     VAR_5 | VAR_2, VAR_12, 0, VAR_8, "IU",
     "Time since driver attach");

 FUNC_2(VAR_13, VAR_17, VAR_6, "intr_coalesce_us",
     VAR_5 | VAR_3, VAR_12, 0, VAR_7, "IU",
     "minimum time between interrupts");

 VAR_16 = FUNC_1(VAR_13, VAR_17, VAR_6, "ports",
     VAR_2, ((void*)0), "CPSW Ports Statistics");
 VAR_20 = FUNC_3(VAR_16);
 for (VAR_23 = 0; VAR_23 < VAR_0; VAR_23++) {
  if (!VAR_12->dualemac && VAR_23 != VAR_12->active_slave)
   continue;
  VAR_22[0] = '0' + VAR_23;
  VAR_22[1] = '\0';
  VAR_16 = FUNC_1(VAR_13, VAR_20, VAR_6,
      VAR_22, VAR_2, ((void*)0), "CPSW Port Statistics");
  VAR_21 = FUNC_3(VAR_16);
  FUNC_2(VAR_13, VAR_21, VAR_6, "uptime",
      VAR_5 | VAR_2, VAR_12, VAR_23,
      VAR_10, "IU", "Seconds since driver init");
 }

 VAR_14 = FUNC_1(VAR_13, VAR_17, VAR_6, "stats",
         VAR_2, ((void*)0), "CPSW Statistics");
 VAR_18 = FUNC_3(VAR_14);
 for (VAR_23 = 0; VAR_23 < VAR_1; ++VAR_23) {
  FUNC_2(VAR_13, VAR_18, VAR_23,
    VAR_9[VAR_23].oid,
    VAR_4 | VAR_2, VAR_12, 0,
    VAR_11, "IU",
    VAR_9[VAR_23].oid);
 }

 VAR_15 = FUNC_1(VAR_13, VAR_17, VAR_6, "queue",
     VAR_2, ((void*)0), "CPSW Queue Statistics");
 VAR_19 = FUNC_3(VAR_15);

 VAR_16 = FUNC_1(VAR_13, VAR_19, VAR_6, "tx",
     VAR_2, ((void*)0), "TX Queue Statistics");
 FUNC_4(VAR_13, VAR_16, &VAR_12->tx);

 VAR_16 = FUNC_1(VAR_13, VAR_19, VAR_6, "rx",
     VAR_2, ((void*)0), "RX Queue Statistics");
 FUNC_4(VAR_13, VAR_16, &VAR_12->rx);

 VAR_16 = FUNC_1(VAR_13, VAR_17, VAR_6, "watchdog",
     VAR_2, ((void*)0), "Watchdog Statistics");
 FUNC_5(VAR_13, VAR_16, VAR_12);
}
