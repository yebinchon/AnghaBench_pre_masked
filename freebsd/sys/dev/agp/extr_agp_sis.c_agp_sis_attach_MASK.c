
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_sis_softc {int initial_aperture; struct agp_gatt* gatt; } ;
struct agp_gatt {int ag_physical; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct agp_gatt* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct agp_sis_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_4)
{
 struct agp_sis_softc *VAR_5 = FUNC_5(VAR_4);
 struct agp_gatt *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_5->initial_aperture = FUNC_0(VAR_4);

 for (;;) {
  VAR_6 = FUNC_2(VAR_4);
  if (VAR_6)
   break;





  if (FUNC_1(VAR_4, FUNC_0(VAR_4) / 2)) {
   FUNC_4(VAR_4);
   return VAR_3;
  }
 }
 VAR_5->gatt = VAR_6;


 FUNC_7(VAR_4, VAR_0, VAR_6->ag_physical, 4);


 FUNC_7(VAR_4, VAR_2,
    FUNC_6(VAR_4, VAR_2, 1) | 3, 1);





 FUNC_7(VAR_4, VAR_1, 0x05, 1);

 return 0;
}
