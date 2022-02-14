
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct agp_intel_softc {int aperture_mask; int current_aperture; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct agp_intel_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, u_int32_t VAR_3)
{
 struct agp_intel_softc *VAR_4;
 u_int32_t VAR_5;

 VAR_4 = FUNC_0(VAR_2);




 VAR_5 = ((VAR_3 - 1) >> 22) ^ VAR_4->aperture_mask;




 if ((((VAR_5 ^ VAR_4->aperture_mask) << 22) | ((1 << 22) - 1)) + 1 != VAR_3)
  return (VAR_1);

 VAR_4->current_aperture = VAR_5;

 FUNC_1(VAR_2, VAR_0, VAR_5, 1);

 return (0);
}
