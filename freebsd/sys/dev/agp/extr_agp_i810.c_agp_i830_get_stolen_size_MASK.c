
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_i810_softc {int stolen; int stolen_size; int bdev; } ;
typedef int device_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;



 int VAR_2 ;
 struct agp_i810_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 unsigned int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{
 struct agp_i810_softc *VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_0(VAR_3);

 VAR_5 = FUNC_2(VAR_4->bdev, VAR_0, 1);
 switch (VAR_5 & VAR_1) {
 case 129:
  VAR_4->stolen = (512 - 132) * 1024 / 4096;
  VAR_4->stolen_size = 512 * 1024;
  break;
 case 130:
  VAR_4->stolen = (1024 - 132) * 1024 / 4096;
  VAR_4->stolen_size = 1024 * 1024;
  break;
 case 128:
  VAR_4->stolen = (8192 - 132) * 1024 / 4096;
  VAR_4->stolen_size = 8192 * 1024;
  break;
 default:
  VAR_4->stolen = 0;
  FUNC_1(VAR_3,
      "unknown memory configuration, disabling (GCC1 %x)\n",
      VAR_5);
  return (VAR_2);
 }
 return (0);
}
