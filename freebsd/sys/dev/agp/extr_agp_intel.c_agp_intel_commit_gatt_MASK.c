
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct agp_intel_softc {TYPE_1__* gatt; } ;
typedef int device_t ;
struct TYPE_2__ {int ag_physical; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct agp_intel_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_8)
{
 struct agp_intel_softc *VAR_9;
 u_int32_t VAR_10;
 u_int32_t VAR_11;

 VAR_9 = FUNC_0(VAR_8);
 VAR_10 = FUNC_1(VAR_8);


 FUNC_3(VAR_8, VAR_1, VAR_9->gatt->ag_physical, 4);


 switch (VAR_10) {
 case 0x71908086:
  FUNC_3(VAR_8, VAR_0, 0x2080, 4);
  break;
 case 0x71808086:




  FUNC_3(VAR_8, VAR_0, 0x2280, 4);
  break;
 default:
  VAR_11 = FUNC_2(VAR_8, VAR_0, 4);
  FUNC_3(VAR_8, VAR_0, VAR_11 | 0x80, 4);
 }


 switch (VAR_10) {
 case 0x25008086:
 case 0x25018086:
  FUNC_3(VAR_8, VAR_3,
     (FUNC_2(VAR_8, VAR_3, 1)
      | (1 << 1)), 1);
  break;
 case 0x1a308086:
 case 0x25608086:
 case 0x33408086:
 case 0x35808086:
 case 0x25708086:
 case 0x25788086:
  FUNC_3(VAR_8, VAR_4,
     (FUNC_2(VAR_8, VAR_4, 1)
      | (1 << 1)), 1);
  break;
 case 0x1a218086:
 case 0x25308086:
 case 0x25318086:
 case 0x255d8086:
 case 0x25508086:
  FUNC_3(VAR_8, VAR_6,
     (FUNC_2(VAR_8, VAR_6, 2)
      | (1 << 9)), 2);
  break;
 default:
  FUNC_3(VAR_8, VAR_7,
     (FUNC_2(VAR_8, VAR_7, 4)
      & ~(1 << 10)) | (1 << 9), 4);
 }


 switch (VAR_10) {
 case 0x1a218086:
  FUNC_3(VAR_8, VAR_5, 0xc000, 2);
  break;
 case 0x25008086:
 case 0x25018086:
 case 0x1a308086:
 case 0x25608086:
 case 0x25308086:
 case 0x33408086:
 case 0x25318086:
 case 0x25708086:
 case 0x25788086:
 case 0x255d8086:
 case 0x25508086:
  FUNC_3(VAR_8, VAR_5, 0x00ff, 2);
  break;
 default:
  FUNC_3(VAR_8, VAR_2 + 1, 7, 1);
 }
}
