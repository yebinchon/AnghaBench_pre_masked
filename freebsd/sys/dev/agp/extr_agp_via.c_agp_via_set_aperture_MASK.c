
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct agp_via_softc {int * regs; } ;
typedef int device_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct agp_via_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int,int) ;
 int * VAR_2 ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3, u_int32_t VAR_4)
{
 struct agp_via_softc *VAR_5 = FUNC_0(VAR_3);
 u_int32_t VAR_6, VAR_7, VAR_8;

 if (VAR_5->regs == VAR_2) {



  VAR_6 = ((VAR_4 - 1) >> 20) ^ 0xff;




  if ((((VAR_6 ^ 0xff) << 20) | ((1 << 20) - 1)) + 1 != VAR_4)
   return VAR_0;

  FUNC_3(VAR_3, VAR_5->regs[VAR_1], VAR_6, 1);
 } else {
  switch (VAR_4) {
  case 0x80000000:
   VAR_7 = 0x800;
   break;
  case 0x40000000:
   VAR_7 = 0xc00;
   break;
  case 0x20000000:
   VAR_7 = 0xe00;
   break;
  case 0x10000000:
   VAR_7 = 0xf00;
   break;
  case 0x08000000:
   VAR_7 = 0xf20;
   break;
  case 0x04000000:
   VAR_7 = 0xf30;
   break;
  case 0x02000000:
   VAR_7 = 0xf38;
   break;
  case 0x01000000:
   VAR_7 = 0xf3c;
   break;
  case 0x00800000:
   VAR_7 = 0xf3e;
   break;
  case 0x00400000:
   VAR_7 = 0xf3f;
   break;
  default:
   FUNC_1(VAR_3, "Invalid aperture size (%dMb)\n",
       VAR_4 / 1024 / 1024);
   return VAR_0;
  }
  VAR_8 = FUNC_2(VAR_3, VAR_5->regs[VAR_1], 2);
  FUNC_3(VAR_3, VAR_5->regs[VAR_1],
      ((VAR_8 & ~0xfff) | VAR_7), 2);
 }
 return 0;
}
