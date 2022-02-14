
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct coretemp_softc {int sc_tjmax; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct sysctl_oid* FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int,int *,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,int ,int ,char*,int,int ,int ,int ,char*,char*) ;
 int FUNC_3 (struct sysctl_oid*) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (int ) ;
 struct coretemp_softc* FUNC_5 (int ) ;
 struct sysctl_ctx_list* FUNC_6 (int ) ;
 struct sysctl_oid* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int*) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_18)
{
 struct coretemp_softc *VAR_19 = FUNC_5(VAR_18);
 device_t VAR_20;
 uint64_t VAR_21;
 int VAR_22, VAR_23;
 int VAR_24, VAR_25;
 struct sysctl_oid *VAR_26;
 struct sysctl_ctx_list *VAR_27;

 VAR_19->sc_dev = VAR_18;
 VAR_20 = FUNC_4(VAR_18);
 VAR_22 = FUNC_0(VAR_17);
 VAR_23 = VAR_17 & VAR_4;







 if (VAR_22 < 0xe)
  return (VAR_9);
 VAR_19->sc_tjmax = 100;

 if ((VAR_22 == 0xf && VAR_23 >= 2) || VAR_22 == 0xe) {







  VAR_21 = FUNC_9(VAR_11);
  if (VAR_21 & (1 << 30))
   VAR_19->sc_tjmax = 85;
 } else if (VAR_22 == 0x17) {
  switch (VAR_23) {
  case 0x6:
   VAR_19->sc_tjmax = 105;
   break;
  default:
   break;
  }
 } else if (VAR_22 == 0x1c) {
  switch (VAR_23) {
  case 0xa:
   VAR_19->sc_tjmax = 100;
   break;
  default:
   VAR_19->sc_tjmax = 90;
   break;
  }
 } else {






  VAR_24 = FUNC_10(VAR_12, &VAR_21);
  if (VAR_24 == 0) {
   VAR_25 = (VAR_21 >> 16) & 0xff;
   if (VAR_25 >= 70 && VAR_25 <= 110)
    VAR_19->sc_tjmax = VAR_25;
   else
    FUNC_8(VAR_18, "Tj(target) value %d "
        "does not seem right.\n", VAR_25);
  } else
   FUNC_8(VAR_18, "Can not get Tj(target) "
       "from your CPU, using 100C.\n");
 }

 if (VAR_14)
  FUNC_8(VAR_18, "Setting TjMax=%d\n", VAR_19->sc_tjmax);

 VAR_27 = FUNC_6(VAR_18);

 VAR_26 = FUNC_1(VAR_27,
     FUNC_3(FUNC_7(VAR_20)), VAR_13,
     "coretemp", VAR_6, ((void*)0), "Per-CPU thermal information");




 FUNC_2(VAR_27, FUNC_3(FUNC_7(VAR_20)),
     VAR_13, "temperature", VAR_8 | VAR_6 | VAR_5,
     VAR_18, VAR_2, VAR_15, "IK",
     "Current temperature");
 FUNC_2(VAR_27, FUNC_3(VAR_26), VAR_13, "delta",
     VAR_8 | VAR_6 | VAR_5, VAR_18, VAR_0,
     VAR_15, "I",
     "Delta between TCC activation and current temperature");
 FUNC_2(VAR_27, FUNC_3(VAR_26), VAR_13, "resolution",
     VAR_8 | VAR_6 | VAR_5, VAR_18, VAR_1,
     VAR_15, "I",
     "Resolution of CPU thermal sensor");
 FUNC_2(VAR_27, FUNC_3(VAR_26), VAR_13, "tjmax",
     VAR_8 | VAR_6 | VAR_5, VAR_18, VAR_3,
     VAR_15, "IK",
     "TCC activation temperature");
 FUNC_2(VAR_27, FUNC_3(VAR_26), VAR_13,
     "throttle_log", VAR_8 | VAR_7 | VAR_5, VAR_18, 0,
     VAR_16, "I",
     "Set to 1 if the thermal sensor has tripped");

 return (0);
}
