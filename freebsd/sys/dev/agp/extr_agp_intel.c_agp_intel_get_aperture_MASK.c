
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct agp_intel_softc {int aperture_mask; } ;
typedef int device_t ;


 int VAR_0 ;
 struct agp_intel_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static u_int32_t
FUNC_2(device_t VAR_1)
{
 struct agp_intel_softc *VAR_2;
 u_int32_t VAR_3;

 VAR_2 = FUNC_0(VAR_1);

 VAR_3 = FUNC_1(VAR_1, VAR_0, 1) & VAR_2->aperture_mask;
 return ((((VAR_3 ^ VAR_2->aperture_mask) << 22) | ((1 << 22) - 1)) + 1);
}
