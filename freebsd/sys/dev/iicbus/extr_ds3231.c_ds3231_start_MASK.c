
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct ds3231_softc {int sc_status; int sc_dev; int enum_hook; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct ds3231_softc*,int ,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_1 (struct sysctl_oid*) ;
 int FUNC_2 (scalar_t__,int,int ) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int *) ;
 struct ds3231_softc* FUNC_5 (scalar_t__) ;
 struct sysctl_ctx_list* FUNC_6 (scalar_t__) ;
 struct sysctl_oid* FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_9 (struct ds3231_softc*) ;
 int FUNC_10 (struct ds3231_softc*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_11 (struct ds3231_softc*) ;
 int FUNC_12 (struct ds3231_softc*,int,int) ;
 int VAR_14 ;

__attribute__((used)) static void
FUNC_13(void *VAR_15)
{
 device_t VAR_16;
 struct ds3231_softc *VAR_17;
 struct sysctl_ctx_list *VAR_18;
 struct sysctl_oid *VAR_19;
 struct sysctl_oid_list *VAR_20;

 VAR_16 = (device_t)VAR_15;
 VAR_17 = FUNC_5(VAR_16);
 VAR_18 = FUNC_6(VAR_16);
 VAR_19 = FUNC_7(VAR_16);
 VAR_20 = FUNC_1(VAR_19);

 FUNC_4(&VAR_17->enum_hook);
 if (FUNC_9(VAR_17) != 0)
  return;
 if (FUNC_11(VAR_17) != 0)
  return;




 if (VAR_17->sc_status & VAR_7) {
  FUNC_8(VAR_17->sc_dev,
      "WARNING: RTC clock stopped, check the battery.\n");
 }
 FUNC_12(VAR_17, 1, 1);
 FUNC_10(VAR_17);


 FUNC_0(VAR_18, VAR_20, VAR_8, "temperature",
     VAR_4 | VAR_2 | VAR_1, VAR_17, 0,
     VAR_14, "IK", "Current temperature");

 FUNC_0(VAR_18, VAR_20, VAR_8, "temp_conv",
     VAR_3 | VAR_6 | VAR_1, VAR_17, 0,
     VAR_10, "IU",
     "DS3231 start a new temperature converstion");
 FUNC_0(VAR_18, VAR_20, VAR_8, "bbsqw",
     VAR_3 | VAR_6 | VAR_1, VAR_17, 0,
     VAR_9, "IU",
     "DS3231 battery-backed square-wave output enable");
 FUNC_0(VAR_18, VAR_20, VAR_8, "sqw_freq",
     VAR_3 | VAR_6 | VAR_1, VAR_17, 0,
     VAR_12, "IU",
     "DS3231 square-wave output frequency");
 FUNC_0(VAR_18, VAR_20, VAR_8, "sqw_mode",
     VAR_3 | VAR_5 | VAR_1, VAR_17, 0,
     VAR_13, "A", "DS3231 SQW output mode control");
 FUNC_0(VAR_18, VAR_20, VAR_8, "32khz_enable",
     VAR_3 | VAR_6 | VAR_1, VAR_17, 0,
     VAR_11, "IU", "DS3231 enable the 32kHz output");






 FUNC_2(VAR_16, 1000000, VAR_0);
 FUNC_3(VAR_16, 1);
}
