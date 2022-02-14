
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct agp_i810_softc {TYPE_1__* gatt; int * sc_res; int initial_aperture; } ;
typedef int device_t ;
struct TYPE_2__ {int ag_physical; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 struct agp_i810_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct agp_i810_softc *VAR_2;
 VAR_2 = FUNC_3(VAR_1);

 FUNC_0(VAR_1, VAR_2->initial_aperture);


 FUNC_2(VAR_2->sc_res[0], VAR_0,
 VAR_2->gatt->ag_physical | 1);

 return (FUNC_1(VAR_1));
}
