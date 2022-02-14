
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_softc {int as_aperture_rid; } ;
typedef int device_t ;


 struct agp_softc* FUNC_0 (int ) ;

void
FUNC_1(device_t VAR_0, int VAR_1)
{
 struct agp_softc *VAR_2 = FUNC_0(VAR_0);

 VAR_2->as_aperture_rid = VAR_1;
}
