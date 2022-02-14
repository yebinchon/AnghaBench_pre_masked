
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct resource {int dummy; } ;
struct flash_slice {int size; char* label; int base; } ;
typedef int device_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,...) ;



 int FUNC_3 (struct resource*,int) ;
 int FUNC_4 (struct resource*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0, struct resource *VAR_1,
    struct flash_slice *VAR_2, int *VAR_3)
{
 uint32_t VAR_4;
 uint32_t VAR_5;
 uint32_t VAR_6;
 uint32_t VAR_7;
 int VAR_8;

 *VAR_3 = 0;

 VAR_8 = FUNC_4(VAR_1);
 VAR_7 = VAR_8;

 FUNC_1(VAR_0, "slicer: scanning memory [%x bytes] for headers...",
     VAR_8);


 for(uint32_t VAR_9 = 0; VAR_9 < VAR_8; VAR_9+= 0x1000){
  VAR_6 = FUNC_3(VAR_1, VAR_9);
  switch (VAR_6) {
  case 128:

   if (VAR_7 < VAR_9) {
    FUNC_1(VAR_0, "stop on 2nd TRX: %x", VAR_9);
    break;
   }

   FUNC_0("TRX found: %x", VAR_9);
   VAR_7 = VAR_9;

   VAR_5 = FUNC_3(VAR_1, VAR_9 + 24);
   FUNC_0("FS offset: %x", VAR_5);





   if (VAR_5 % 0x200 != 0) {
    FUNC_2("WARNING! filesystem offset should be"
        " aligned on sector size (%d bytes)", 0x200);
    FUNC_2("ignoring TRX firmware image");
    break;
   }

   VAR_2[*VAR_3].base = VAR_9 + VAR_5;

   VAR_4 = FUNC_3(VAR_1, VAR_9 + 4);
   VAR_2[*VAR_3].size = VAR_4 - VAR_5;
   VAR_2[*VAR_3].label = "rootfs";
   *VAR_3 += 1;
   break;
  case 130:
   FUNC_0("CFE found: %x", VAR_9);
   break;
  case 129:
   FUNC_0("NVRAM found: %x", VAR_9);
   break;
  default:
   break;
  }
 }

 FUNC_0("slicer: done");
 return (0);
}
