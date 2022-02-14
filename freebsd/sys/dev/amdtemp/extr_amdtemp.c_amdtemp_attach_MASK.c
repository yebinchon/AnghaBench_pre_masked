
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
typedef int tn ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_2__ {int ich_arg; int (* ich_func ) (int ) ;} ;
struct amdtemp_softc {int sc_ntemps; int sc_ncores; TYPE_1__ sc_ich; int sc_offset; int * sc_smn; int sc_gettemp; int sc_flags; } ;
struct amdtemp_product {scalar_t__ amdtemp_has_cpuid; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (struct sysctl_ctx_list*,int ,int ,char*,int ,int *,int ,char*) ;
 struct sysctl_oid* FUNC_3 (struct sysctl_ctx_list*,int ,int ,char*,int,int ,char*) ;
 int FUNC_4 (struct sysctl_ctx_list*,int ,int ,char*,int,int ,int ,int ,char*,char*) ;
 int FUNC_5 (struct sysctl_oid*) ;
 int FUNC_6 (char*,int *) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,struct amdtemp_product const**) ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int VAR_26 ;
 int VAR_27 ;
 int * FUNC_10 (int ,char*,int) ;
 int FUNC_11 (int ) ;
 struct amdtemp_softc* FUNC_12 (int ) ;
 struct sysctl_ctx_list* FUNC_13 (int ) ;
 struct sysctl_oid* FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,char*,...) ;
 int FUNC_17 (int,int*) ;
 int FUNC_18 (int ,int ,int,int ,int) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,int ,int) ;
 int FUNC_22 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_23(device_t VAR_28)
{
 char VAR_29[32];
 u_int VAR_30[4];
 const struct amdtemp_product *VAR_31;
 struct amdtemp_softc *VAR_32;
 struct sysctl_ctx_list *VAR_33;
 struct sysctl_oid *VAR_34;
 uint32_t VAR_35, VAR_36, VAR_37;
 u_int VAR_38;
 int VAR_39, VAR_40;
 bool VAR_41;

 VAR_32 = FUNC_12(VAR_28);
 VAR_39 = 0;
 VAR_41 = 0;

 if (!FUNC_8(FUNC_11(VAR_28), &VAR_31))
  return (VAR_16);

 VAR_35 = VAR_26;
 VAR_36 = FUNC_0(VAR_35);
 VAR_37 = FUNC_1(VAR_35);
 if (VAR_31->amdtemp_has_cpuid && (VAR_36 > 0x0f ||
     (VAR_36 == 0x0f && VAR_37 >= 0x40))) {
  VAR_35 = FUNC_21(FUNC_11(VAR_28), VAR_2,
      4);
  VAR_36 = FUNC_0(VAR_35);
  VAR_37 = FUNC_1(VAR_35);
 }

 switch (VAR_36) {
 case 0x0f:
  if (VAR_37 >= 0x40)
   VAR_32->sc_flags |= VAR_6;
  if (VAR_37 >= 0x60 && VAR_37 != 0xc1) {
   FUNC_17(0x80000001, VAR_30);
   VAR_38 = (VAR_30[1] >> 9) & 0x1f;
   switch (VAR_37) {
   case 0x68:
   case 0x6c:
   case 0x7c:
    break;
   case 0x6b:
    if (VAR_38 != 0x0b && VAR_38 != 0x0c)
     VAR_32->sc_flags |=
         VAR_5;
    break;
   case 0x6f:
   case 0x7f:
    if (VAR_38 != 0x07 && VAR_38 != 0x09 &&
        VAR_38 != 0x0c)
     VAR_32->sc_flags |=
         VAR_5;
    break;
   default:
    VAR_32->sc_flags |= VAR_5;
   }
   VAR_32->sc_flags |= VAR_7;
  }




  VAR_32->sc_ntemps = 2;

  VAR_32->sc_gettemp = VAR_21;
  break;
 case 0x10:





  FUNC_17(0x80000001, VAR_30);
  switch ((VAR_30[1] >> 28) & 0xf) {
  case 0:
   VAR_39 = 1;
   break;
  case 1:
   if ((FUNC_18(FUNC_19(VAR_28),
       FUNC_20(VAR_28), 2, VAR_3, 2) &
       VAR_4) != 0 || VAR_37 > 0x04 ||
       (VAR_37 == 0x04 && (VAR_35 & VAR_12) >= 3))
    break;

   VAR_39 = 1;
   break;
  }

 case 0x11:
 case 0x12:
 case 0x14:
 case 0x15:
 case 0x16:
  VAR_32->sc_ntemps = 1;






  if (VAR_36 == 0x15 && VAR_37 >= 0x60) {
   VAR_32->sc_gettemp = VAR_22;
   VAR_41 = 1;
  } else
   VAR_32->sc_gettemp = VAR_20;
  break;
 case 0x17:
  VAR_32->sc_ntemps = 1;
  VAR_32->sc_gettemp = VAR_23;
  VAR_41 = 1;
  break;
 default:
  FUNC_16(VAR_28, "Bogus family 0x%x\n", VAR_36);
  return (VAR_16);
 }

 if (VAR_41) {
  VAR_32->sc_smn = FUNC_10(
      FUNC_11(VAR_28), "amdsmn", -1);
  if (VAR_32->sc_smn == ((void*)0)) {
   if (VAR_25)
    FUNC_16(VAR_28, "No SMN device found\n");
   return (VAR_16);
  }
 }


 VAR_32->sc_ncores = (VAR_19 & VAR_0) != 0 ?
     (VAR_27 & VAR_1) + 1 : 1;
 if (VAR_32->sc_ncores > VAR_17)
  return (VAR_16);

 if (VAR_39)
  FUNC_16(VAR_28,
      "Erratum 319: temperature measurement may be inaccurate\n");
 if (VAR_25)
  FUNC_16(VAR_28, "Found %d cores and %d sensors.\n",
      VAR_32->sc_ncores,
      VAR_32->sc_ntemps > 1 ? VAR_32->sc_ntemps * VAR_32->sc_ncores : 1);




 VAR_40 = FUNC_15(VAR_28);
 FUNC_22(VAR_29, sizeof(VAR_29), "dev.amdtemp.%d.sensor_offset", VAR_40);
 FUNC_6(VAR_29, &VAR_32->sc_offset);

 VAR_33 = FUNC_13(VAR_28);
 FUNC_2(VAR_33,
     FUNC_5(FUNC_14(VAR_28)), VAR_18,
     "sensor_offset", VAR_14, &VAR_32->sc_offset, 0,
     "Temperature sensor offset");
 VAR_34 = FUNC_3(VAR_33,
     FUNC_5(FUNC_14(VAR_28)), VAR_18,
     "core0", VAR_13, 0, "Core 0");

 FUNC_4(VAR_33,
     FUNC_5(VAR_34),
     VAR_18, "sensor0", VAR_15 | VAR_13,
     VAR_28, VAR_8, VAR_24, "IK",
     "Core 0 / Sensor 0 temperature");

 if (VAR_32->sc_ntemps > 1) {
  FUNC_4(VAR_33,
      FUNC_5(VAR_34),
      VAR_18, "sensor1", VAR_15 | VAR_13,
      VAR_28, VAR_9, VAR_24, "IK",
      "Core 0 / Sensor 1 temperature");

  if (VAR_32->sc_ncores > 1) {
   VAR_34 = FUNC_3(VAR_33,
       FUNC_5(FUNC_14(VAR_28)),
       VAR_18, "core1", VAR_13, 0, "Core 1");

   FUNC_4(VAR_33,
       FUNC_5(VAR_34),
       VAR_18, "sensor0", VAR_15 | VAR_13,
       VAR_28, VAR_10, VAR_24, "IK",
       "Core 1 / Sensor 0 temperature");

   FUNC_4(VAR_33,
       FUNC_5(VAR_34),
       VAR_18, "sensor1", VAR_15 | VAR_13,
       VAR_28, VAR_11, VAR_24, "IK",
       "Core 1 / Sensor 1 temperature");
  }
 }






 FUNC_7(VAR_28);
 VAR_32->sc_ich.ich_func = FUNC_7;
 VAR_32->sc_ich.ich_arg = VAR_28;
 if (FUNC_9(&VAR_32->sc_ich) != 0) {
  FUNC_16(VAR_28, "config_intrhook_establish failed!\n");
  return (VAR_16);
 }

 return (0);
}
