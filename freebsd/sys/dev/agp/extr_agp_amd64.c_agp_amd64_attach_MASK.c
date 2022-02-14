
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct agp_gatt {int ag_physical; } ;
struct agp_amd64_softc {int* mctrl; int n_mctrl; int initial_aperture; int via_agp; struct agp_gatt* gatt; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct agp_gatt* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ VAR_10 ;
 struct agp_amd64_softc* FUNC_12 (int ) ;
 int FUNC_13 (int ,char*,int) ;
 int FUNC_14 (int ,int,int,int ,int) ;
 int FUNC_15 (int ,int,int,int ,int,int) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_11)
{
 struct agp_amd64_softc *VAR_12 = FUNC_12(VAR_11);
 struct agp_gatt *VAR_13;
 uint32_t VAR_14;
 int VAR_15, VAR_16, VAR_17;

 for (VAR_15 = 0, VAR_16 = 0; VAR_15 < VAR_9 && VAR_16 < VAR_6; VAR_15++) {
  VAR_14 = FUNC_14(0, VAR_15, 3, 0, 4);
  if (VAR_14 == 0x11031022 || VAR_14 == 0x12031022) {
   VAR_12->mctrl[VAR_16] = VAR_15;
   VAR_16++;
  }
 }
 if (VAR_16 == 0)
  return (VAR_8);

 VAR_12->n_mctrl = VAR_16;

 if (VAR_10)
  FUNC_13(VAR_11, "%d Miscellaneous Control unit(s) found.\n",
      VAR_12->n_mctrl);

 if ((VAR_17 = FUNC_10(VAR_11)))
  return (VAR_17);

 VAR_12->initial_aperture = FUNC_0(VAR_11);

 for (;;) {
  VAR_13 = FUNC_2(VAR_11);
  if (VAR_13)
   break;





  if (FUNC_1(VAR_11, FUNC_0(VAR_11) / 2)) {
   FUNC_11(VAR_11);
   return (VAR_7);
  }
 }
 VAR_12->gatt = VAR_13;

 switch (FUNC_16(VAR_11)) {
 case 0x10b9:
  FUNC_5(VAR_11);
  if (FUNC_6(VAR_11, VAR_12->initial_aperture))
   return (VAR_8);
  break;

 case 0x10de:
  FUNC_3(VAR_11);
  if (FUNC_4(VAR_11, VAR_12->initial_aperture))
   return (VAR_8);
  break;

 case 0x1106:
  VAR_12->via_agp = FUNC_8();
  if (VAR_12->via_agp) {
   FUNC_7(VAR_11);
   if (FUNC_9(VAR_11,
       VAR_12->initial_aperture))
    return (VAR_8);
  }
  break;
 }


 for (VAR_15 = 0; VAR_15 < VAR_12->n_mctrl; VAR_15++) {
  FUNC_15(0, VAR_12->mctrl[VAR_15], 3, VAR_4,
      (uint32_t)(VAR_13->ag_physical >> 8) & VAR_5,
      4);
  FUNC_15(0, VAR_12->mctrl[VAR_15], 3, VAR_0,
      (FUNC_14(0, VAR_12->mctrl[VAR_15], 3, VAR_0, 4) |
      VAR_3) &
      ~(VAR_1 | VAR_2),
      4);
 }

 return (0);
}
