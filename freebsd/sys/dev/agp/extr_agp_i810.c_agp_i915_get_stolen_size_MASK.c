
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct agp_i810_softc {unsigned int stolen_size; unsigned int stolen; TYPE_2__* match; int bdev; int * sc_res; } ;
typedef int device_t ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int chiptype; int gen; } ;




 unsigned int VAR_0 ;






 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 struct agp_i810_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 unsigned int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_6)
{
 struct agp_i810_softc *VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10;

 VAR_7 = FUNC_1(VAR_6);






 switch (VAR_7->match->driver->chiptype) {
 case 131:
  VAR_10 = 128;
  break;
 case 130:
  VAR_10 = 256;
  break;
 case 129:
  switch (FUNC_0(VAR_7->sc_res[0], VAR_1) &
   VAR_2) {
  case 146:
   VAR_10 = 128;
   break;
  case 145:
   VAR_10 = 256;
   break;
  case 144:
   VAR_10 = 512;
   break;
  case 136:
   VAR_10 = 1024;
   break;
  case 134:
   VAR_10 = 2048;
   break;
  case 135:
   VAR_10 = 1024 + 512;
   break;
  default:
   FUNC_2(VAR_6, "Bad PGTBL size\n");
   return (VAR_5);
  }
  break;
 case 133:
  VAR_8 = FUNC_3(VAR_7->bdev, VAR_3, 2);
  switch (VAR_8 & VAR_0) {
  case 152:
   VAR_10 = 1024;
   break;
  case 151:
   VAR_10 = 2048;
   break;
  default:
   FUNC_2(VAR_6, "Bad PGTBL size\n");
   return (VAR_5);
  }
  break;
 case 128:
 case 132:
  VAR_10 = 0;
  break;
 default:
  FUNC_2(VAR_6, "Bad chiptype\n");
  return (VAR_5);
 }


 VAR_8 = FUNC_3(VAR_7->bdev, VAR_3, 1);
 switch (VAR_8 & VAR_4) {
 case 142:
  VAR_9 = 1024;
  break;
 case 140:
  VAR_9 = 4 * 1024;
  break;
 case 139:
  VAR_9 = 8 * 1024;
  break;
 case 143:
  VAR_9 = 16 * 1024;
  break;
 case 141:
  VAR_9 = 32 * 1024;
  break;
 case 138:
  VAR_9 = VAR_7->match->driver->gen > 2 ? 48 * 1024 : 0;
  break;
 case 137:
  VAR_9 = VAR_7->match->driver->gen > 2 ? 64 * 1024 : 0;
  break;
 case 154:
  VAR_9 = VAR_7->match->driver->gen > 2 ? 128 * 1024 : 0;
  break;
 case 153:
  VAR_9 = VAR_7->match->driver->gen > 2 ? 256 * 1024 : 0;
  break;
 case 147:
  if (VAR_7->match->driver->chiptype == 129 ||
      VAR_7->match->driver->chiptype == 132)
   VAR_9 = 96 * 1024;
  else
   VAR_9 = 0;
  break;
 case 150:
  if (VAR_7->match->driver->chiptype == 129 ||
      VAR_7->match->driver->chiptype == 132)
   VAR_9 = 160 * 1024;
  else
   VAR_9 = 0;
  break;
 case 149:
  if (VAR_7->match->driver->chiptype == 129 ||
      VAR_7->match->driver->chiptype == 132)
   VAR_9 = 224 * 1024;
  else
   VAR_9 = 0;
  break;
 case 148:
  if (VAR_7->match->driver->chiptype == 129 ||
      VAR_7->match->driver->chiptype == 132)
   VAR_9 = 352 * 1024;
  else
   VAR_9 = 0;
  break;
 default:
  FUNC_2(VAR_6,
      "unknown memory configuration, disabling (GCC1 %x)\n",
      VAR_8);
  return (VAR_5);
 }

 VAR_10 += 4;
 VAR_7->stolen_size = VAR_9 * 1024;
 VAR_7->stolen = (VAR_9 - VAR_10) * 1024 / 4096;

 return (0);
}
