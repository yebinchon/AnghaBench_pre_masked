
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct agp_i810_softc {int bdev; } ;
typedef int device_t ;




 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 struct agp_i810_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_6)
{
 struct agp_i810_softc *VAR_7;
 uint16_t VAR_8;

 VAR_7 = FUNC_2(VAR_6);

 VAR_8 = FUNC_4(VAR_7->bdev, VAR_4, 2);
 switch (VAR_8 & VAR_0) {
 case 132:
 case 130:
  FUNC_0(VAR_6, VAR_1);
  break;
 case 129:
  FUNC_0(VAR_6, VAR_2);
  break;
 case 131:
 case 128:
  FUNC_0(VAR_6, VAR_3);
  break;
 default:
  FUNC_3(VAR_6, "Unknown page table size\n");
  return (VAR_5);
 }

 return (FUNC_1(VAR_6));
}
