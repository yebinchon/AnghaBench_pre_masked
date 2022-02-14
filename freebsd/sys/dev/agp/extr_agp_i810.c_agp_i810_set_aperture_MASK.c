
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int16_t ;
struct agp_i810_softc {int bdev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct agp_i810_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_5, u_int32_t VAR_6)
{
 struct agp_i810_softc *VAR_7;
 u_int16_t VAR_8;

 VAR_7 = FUNC_0(VAR_5);



 if (VAR_6 != 32 * 1024 * 1024 && VAR_6 != 64 * 1024 * 1024) {
  FUNC_1(VAR_5, "bad aperture size %d\n", VAR_6);
  return (VAR_4);
 }

 VAR_8 = FUNC_2(VAR_7->bdev, VAR_0, 2);
 VAR_8 &= ~VAR_1;
 if (VAR_6 == 32 * 1024 * 1024)
  VAR_8 |= VAR_2;
 else
  VAR_8 |= VAR_3;

 FUNC_3(VAR_7->bdev, VAR_0, VAR_8, 2);
 return (0);
}
