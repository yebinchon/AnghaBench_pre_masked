
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct agp_via_softc {int * regs; } ;
typedef int device_t ;


 size_t VAR_0 ;
 struct agp_via_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int * VAR_1 ;

__attribute__((used)) static u_int32_t
FUNC_3(device_t VAR_2)
{
 struct agp_via_softc *VAR_3 = FUNC_0(VAR_2);
 u_int32_t VAR_4;

 if (VAR_3->regs == VAR_1) {
  VAR_4 = FUNC_2(VAR_2, VAR_3->regs[VAR_0], 1);
  return (((VAR_4 ^ 0xff) << 20) | ((1 << 20) - 1)) + 1;
 } else {
  VAR_4 = FUNC_2(VAR_2, VAR_3->regs[VAR_0], 2) & 0xfff;
  switch (VAR_4) {
  case 0x800:
   return 0x80000000;
  case 0xc00:
   return 0x40000000;
  case 0xe00:
   return 0x20000000;
  case 0xf00:
   return 0x10000000;
  case 0xf20:
   return 0x08000000;
  case 0xf30:
   return 0x04000000;
  case 0xf38:
   return 0x02000000;
  case 0xf3c:
   return 0x01000000;
  case 0xf3e:
   return 0x00800000;
  case 0xf3f:
   return 0x00400000;
  default:
   FUNC_1(VAR_2, "Invalid aperture setting 0x%x\n",
       FUNC_2(VAR_2, VAR_3->regs[VAR_0], 2));
   return 0;
  }
 }
}
