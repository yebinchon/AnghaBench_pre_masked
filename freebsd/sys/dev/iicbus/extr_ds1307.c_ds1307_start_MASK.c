
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct ds1307_softc {int sc_dev; scalar_t__ sc_mcp7941x; int enum_hook; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct ds1307_softc*,int ,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_1 (struct sysctl_oid*) ;
 int FUNC_2 (scalar_t__,int,int ) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int *) ;
 struct ds1307_softc* FUNC_5 (scalar_t__) ;
 struct sysctl_ctx_list* FUNC_6 (scalar_t__) ;
 struct sysctl_oid* FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,char*) ;
 scalar_t__ FUNC_9 (int ,int ,int*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_10(void *VAR_10)
{
 device_t VAR_11;
 struct ds1307_softc *VAR_12;
 struct sysctl_ctx_list *VAR_13;
 struct sysctl_oid *VAR_14;
 struct sysctl_oid_list *VAR_15;
 uint8_t VAR_16;
 uint8_t VAR_17;

 VAR_11 = (device_t)VAR_10;
 VAR_12 = FUNC_5(VAR_11);
 VAR_13 = FUNC_6(VAR_11);
 VAR_14 = FUNC_7(VAR_11);
 VAR_15 = FUNC_1(VAR_14);

 FUNC_4(&VAR_12->enum_hook);


 if (FUNC_9(VAR_12->sc_dev, VAR_4, &VAR_16) != 0) {
  FUNC_8(VAR_12->sc_dev, "cannot read from RTC.\n");
  return;
 }
 if (VAR_12->sc_mcp7941x)
  VAR_17 = 0x80;
 else
  VAR_17 = 0x00;

 if (((VAR_16 & VAR_5) ^ VAR_17) != 0) {
  FUNC_8(VAR_12->sc_dev,
      "WARNING: RTC clock stopped, check the battery.\n");
 }


 FUNC_0(VAR_13, VAR_15, VAR_6, "sqwe",
     VAR_2 | VAR_3 | VAR_1, VAR_12, 0,
     VAR_9, "IU", "DS1307 square-wave enable");
 FUNC_0(VAR_13, VAR_15, VAR_6, "sqw_freq",
     VAR_2 | VAR_3 | VAR_1, VAR_12, 0,
     VAR_7, "IU",
     "DS1307 square-wave output frequency");
 FUNC_0(VAR_13, VAR_15, VAR_6, "sqw_out",
     VAR_2 | VAR_3 | VAR_1, VAR_12, 0,
     VAR_8, "IU", "DS1307 square-wave output state");






 FUNC_2(VAR_11, 1000000, VAR_0);
 FUNC_3(VAR_11, 1);
}
