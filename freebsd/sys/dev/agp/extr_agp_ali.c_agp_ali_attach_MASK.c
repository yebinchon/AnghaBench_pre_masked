
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct agp_gatt {int ag_physical; } ;
struct agp_ali_softc {int initial_aperture; struct agp_gatt* gatt; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct agp_gatt* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct agp_ali_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_4)
{
 struct agp_ali_softc *VAR_5 = FUNC_5(VAR_4);
 struct agp_gatt *VAR_6;
 int VAR_7;
 u_int32_t VAR_8;

 VAR_7 = FUNC_3(VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_5->initial_aperture = FUNC_0(VAR_4);
 if (VAR_5->initial_aperture == 0) {
  FUNC_6(VAR_4, "bad initial aperture size, disabling\n");
  return VAR_3;
 }

 for (;;) {
  VAR_6 = FUNC_2(VAR_4);
  if (VAR_6)
   break;





  if (FUNC_1(VAR_4, FUNC_0(VAR_4) / 2)) {
   FUNC_4(VAR_4);
   return VAR_2;
  }
 }
 VAR_5->gatt = VAR_6;


 VAR_8 = FUNC_7(VAR_4, VAR_0, 4);
 FUNC_8(VAR_4, VAR_0, VAR_6->ag_physical |
     (VAR_8 & 0xfff), 4);


 FUNC_8(VAR_4, VAR_1, 0x10, 1);

 return 0;
}
