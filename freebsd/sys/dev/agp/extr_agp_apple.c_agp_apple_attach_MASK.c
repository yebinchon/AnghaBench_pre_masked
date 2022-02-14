
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_apple_softc {int needs_2x_reset; int u3; int aperture; scalar_t__ gatt; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 struct agp_apple_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_2)
{
 struct agp_apple_softc *VAR_3 = FUNC_6(VAR_2);
 int VAR_4;


 VAR_3->needs_2x_reset = 0;
 VAR_3->u3 = 0;
 switch (FUNC_7(VAR_2)) {
 case 0x0020106b:
 case 0x0027106b:
  VAR_3->needs_2x_reset = 1;
  break;
 case 0x004b106b:
 case 0x0058106b:
 case 0x0059106b:
  VAR_3->u3 = 1;
  break;
 }


 FUNC_8(VAR_2, VAR_1, 0, 4);
 FUNC_5(VAR_2, -1);

 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4)
  return (VAR_4);

 VAR_3->aperture = 256*1024*1024;

 for (VAR_3->aperture = 256*1024*1024; VAR_3->aperture >= 4*1024*1024;
     VAR_3->aperture /= 2) {
  VAR_3->gatt = FUNC_2(VAR_2);
  if (VAR_3->gatt)
   break;
 }
 if (VAR_3->aperture < 4*1024*1024) {
  FUNC_4(VAR_2);
  return VAR_0;
 }


 FUNC_1(VAR_2, VAR_3->aperture);




 FUNC_0(VAR_2);

 return (0);
}
