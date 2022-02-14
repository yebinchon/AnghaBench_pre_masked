
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct siba_softc {int dummy; } ;
struct TYPE_2__ {int pwrctl; } ;
struct siba_devinfo {scalar_t__ pmu_state; TYPE_1__ pmu; struct bhnd_resource** cfg_res; } ;
struct bhnd_resource {int dummy; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct siba_softc*) ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (int,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (struct siba_softc*) ;
 int VAR_18 ;
 int FUNC_4 (struct bhnd_resource*,int ) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 struct siba_devinfo* FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 struct siba_softc* FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,char*,int) ;
 int FUNC_10 (scalar_t__,struct siba_devinfo*,int ,int,int ,int) ;
 int FUNC_11 (scalar_t__,struct siba_devinfo*,int ,int,int) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_19, device_t VAR_20, uint16_t VAR_21)
{
 struct siba_softc *VAR_22;
 struct siba_devinfo *VAR_23;
 struct bhnd_resource *VAR_24;
 uint32_t VAR_25, VAR_26, VAR_27;
 uint16_t VAR_28, VAR_29;
 int VAR_30;

 if (FUNC_7(VAR_20) != VAR_19)
  return (VAR_3);

 VAR_22 = FUNC_8(VAR_19);
 VAR_23 = FUNC_6(VAR_20);


 if ((VAR_24 = VAR_23->cfg_res[0]) == ((void*)0))
  return (VAR_4);


 VAR_29 = VAR_1 | VAR_2;
 if (VAR_21 & VAR_29)
  return (VAR_3);


 VAR_26 = FUNC_4(VAR_24, VAR_8);
 if (VAR_26 & VAR_15)
  return (0);



 VAR_28 = FUNC_2(VAR_26, VAR_18);
 if (!(VAR_28 & VAR_1)) {
  VAR_26 = VAR_15 | VAR_14 |
    (VAR_21 << VAR_17);
  VAR_27 = VAR_15 | VAR_14 | VAR_16;

  FUNC_11(VAR_20, VAR_23, VAR_8,
      VAR_26, VAR_27);
  return (0);
 }


 FUNC_11(VAR_20, VAR_23, VAR_8,
     VAR_14, VAR_14);



 VAR_30 = FUNC_10(VAR_20, VAR_23, VAR_7,
     0x0, VAR_13, 100000);
 if (VAR_30)
  return (VAR_30);



 VAR_25 = FUNC_4(VAR_24, VAR_5);
 if (VAR_25 & VAR_9) {

  FUNC_11(VAR_20, VAR_23, VAR_6,
      VAR_11, VAR_11);


  VAR_30 = FUNC_10(VAR_20, VAR_23, VAR_6,
      0x0, VAR_10, 100000);
  if (VAR_30)
   return (VAR_30);
 }




 VAR_26 = VAR_15 |
   (VAR_21 << VAR_17) |
   (VAR_1 << VAR_17) |
   (VAR_2 << VAR_17);
 VAR_27 = VAR_15 |
    VAR_16;

 FUNC_11(VAR_20, VAR_23, VAR_8, VAR_26,
     VAR_27);


 FUNC_0(10);


 if (VAR_25 & VAR_9) {
  FUNC_11(VAR_20, VAR_23, VAR_6, 0x0,
      VAR_11);
 }


 FUNC_11(VAR_20, VAR_23, VAR_8, 0x0,
     (VAR_1 | VAR_2) << VAR_17);
 FUNC_1(VAR_22);
 if (VAR_23->pmu_state == VAR_12) {
  VAR_30 = FUNC_5(VAR_23->pmu.pwrctl, VAR_20,
      VAR_0);
  FUNC_3(VAR_22);

  if (VAR_30) {
   FUNC_9(VAR_20, "failed to release clock request: "
       "%d", VAR_30);
   return (VAR_30);
  }

  return (0);
 } else {
  FUNC_3(VAR_22);
  return (0);
 }
}
