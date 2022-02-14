
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct agp_amd64_softc {int apbase; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct agp_amd64_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ,int ,int) ;
 int FUNC_2 (int ,int,int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_4, uint32_t VAR_5)
{
 struct agp_amd64_softc *VAR_6 = FUNC_0(VAR_4);
 uint32_t VAR_7;

 switch (VAR_5) {
 case 0x02000000: VAR_7 = 0x0f; break;
 case 0x04000000: VAR_7 = 0x0e; break;
 case 0x08000000: VAR_7 = 0x0c; break;
 case 0x10000000: VAR_7 = 0x08; break;
 case 0x20000000: VAR_7 = 0x00; break;
 default:
  return (VAR_3);
 }

 FUNC_2(0, 11, 0, VAR_2,
     (FUNC_1(0, 11, 0, VAR_2, 4) &
     0xfffffff0) | VAR_7, 4);
 FUNC_2(0, 11, 0, VAR_0,
     VAR_6->apbase + VAR_5 - 1, 4);
 FUNC_2(0, 11, 0, VAR_1,
     VAR_6->apbase + VAR_5 - 1, 4);

 return (0);
}
