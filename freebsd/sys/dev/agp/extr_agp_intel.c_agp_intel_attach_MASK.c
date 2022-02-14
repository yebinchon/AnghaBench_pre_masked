
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct agp_intel_softc {int aperture_mask; int current_aperture; int initial_aperture; struct agp_gatt* gatt; } ;
struct agp_gatt {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct agp_gatt* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct agp_intel_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_3)
{
 struct agp_intel_softc *VAR_4;
 struct agp_gatt *VAR_5;
 u_int32_t VAR_6;
 int VAR_7;

 VAR_4 = FUNC_6(VAR_3);

 VAR_7 = FUNC_3(VAR_3);
 if (VAR_7)
  return (VAR_7);


 VAR_6 = FUNC_7(VAR_3, VAR_0, 1);
 FUNC_8(VAR_3, VAR_0, VAR_2, 1);
 VAR_4->aperture_mask = FUNC_7(VAR_3, VAR_0, 1) &
     VAR_2;
 FUNC_8(VAR_3, VAR_0, VAR_6, 1);
 VAR_4->current_aperture = VAR_4->initial_aperture = FUNC_0(VAR_3);

 for (;;) {
  VAR_5 = FUNC_2(VAR_3);
  if (VAR_5)
   break;





  if (FUNC_1(VAR_3, FUNC_0(VAR_3) / 2)) {
   FUNC_4(VAR_3);
   return (VAR_1);
  }
 }
 VAR_4->gatt = VAR_5;

 FUNC_5(VAR_3);

 return (0);
}
