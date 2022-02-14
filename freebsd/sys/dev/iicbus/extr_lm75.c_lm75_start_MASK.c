
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct lm75_softc {scalar_t__ sc_hwtype; int enum_hook; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,scalar_t__,int ,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_1 (struct sysctl_oid*) ;
 int FUNC_2 (int *) ;
 struct lm75_softc* FUNC_3 (scalar_t__) ;
 struct sysctl_ctx_list* FUNC_4 (scalar_t__) ;
 struct sysctl_oid* FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_7 (struct lm75_softc*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_16)
{
 device_t VAR_17;
 struct lm75_softc *VAR_18;
 struct sysctl_ctx_list *VAR_19;
 struct sysctl_oid *VAR_20;
 struct sysctl_oid_list *VAR_21;

 VAR_17 = (device_t)VAR_16;
 VAR_18 = FUNC_3(VAR_17);
 VAR_19 = FUNC_4(VAR_17);
 VAR_20 = FUNC_5(VAR_17);
 VAR_21 = FUNC_1(VAR_20);

 FUNC_2(&VAR_18->enum_hook);





 if (FUNC_7(VAR_18) != 0) {
  FUNC_6(VAR_17, "cannot read from sensor.\n");
  return;
 }
 if (VAR_18->sc_hwtype == VAR_6)
  FUNC_6(VAR_17,
      "LM75A type sensor detected (11bits resolution).\n");


 FUNC_0(VAR_19, VAR_21, VAR_10, "temperature",
     VAR_3 | VAR_1 | VAR_0, VAR_17, VAR_7,
     VAR_15, "IK", "Current temperature");
 FUNC_0(VAR_19, VAR_21, VAR_10, "thyst",
     VAR_3 | VAR_2 | VAR_0, VAR_17, VAR_8,
     VAR_15, "IK", "Hysteresis temperature");
 FUNC_0(VAR_19, VAR_21, VAR_10, "tos",
     VAR_3 | VAR_2 | VAR_0, VAR_17, VAR_9,
     VAR_15, "IK", "Overtemperature");


 FUNC_0(VAR_19, VAR_21, VAR_10, "faults",
     VAR_2 | VAR_5 | VAR_0, VAR_17, 0,
     VAR_11, "IU", "LM75 fault queue");
 FUNC_0(VAR_19, VAR_21, VAR_10, "mode",
     VAR_2 | VAR_4 | VAR_0, VAR_17, 0,
     VAR_12, "A", "LM75 mode");
 FUNC_0(VAR_19, VAR_21, VAR_10, "polarity",
     VAR_2 | VAR_4 | VAR_0, VAR_17, 0,
     VAR_13, "A", "LM75 OS polarity");
 FUNC_0(VAR_19, VAR_21, VAR_10, "shutdown",
     VAR_2 | VAR_5 | VAR_0, VAR_17, 0,
     VAR_14, "IU", "LM75 shutdown");
}
