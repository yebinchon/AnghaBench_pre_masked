
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_intel_softc {int current_aperture; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct agp_intel_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0)
{
 struct agp_intel_softc *VAR_1;
 VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_0, VAR_1->current_aperture);
 FUNC_1(VAR_0);
 return (FUNC_2(VAR_0));
}
