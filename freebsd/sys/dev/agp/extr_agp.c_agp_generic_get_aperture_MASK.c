
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct agp_softc {int as_aperture; } ;
typedef int device_t ;


 struct agp_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

u_int32_t
FUNC_2(device_t VAR_0)
{
 struct agp_softc *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1->as_aperture);
}
