
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct agp_amd64_softc {scalar_t__ apbase; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct agp_amd64_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, uint32_t VAR_3)
{
 struct agp_amd64_softc *VAR_4 = FUNC_0(VAR_2);

 switch (VAR_3) {
 case 0x02000000:
 case 0x04000000:
 case 0x08000000:
 case 0x10000000:
  break;
 default:
  return (VAR_1);
 }

 FUNC_1(VAR_2, VAR_0,
     VAR_4->apbase + VAR_3 - 1, 4);

 return (0);
}
