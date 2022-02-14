
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gicv3_its_softc {int sc_its_flags; } ;
typedef int device_t ;


 int VAR_0 ;
 struct gicv3_its_softc* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(device_t VAR_1)
{
 struct gicv3_its_softc *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 VAR_2->sc_its_flags |= VAR_0;
}
