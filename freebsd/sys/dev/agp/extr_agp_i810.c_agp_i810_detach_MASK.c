
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct agp_i810_softc {int sc_res; TYPE_2__* match; int gatt; int initial_aperture; } ;
typedef int device_t ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int res_spec; int (* chipset_flush_teardown ) (int ) ;int (* deinstall_gatt ) (int ) ;} ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 struct agp_i810_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_1)
{
 struct agp_i810_softc *VAR_2;

 VAR_2 = FUNC_4(VAR_1);
 FUNC_1(VAR_1);


 VAR_2->match->driver->deinstall_gatt(VAR_1);

 VAR_2->match->driver->chipset_flush_teardown(VAR_1);


 FUNC_0(VAR_1, VAR_2->initial_aperture);

 FUNC_5(VAR_2->gatt, VAR_0);
 FUNC_3(VAR_1, VAR_2->match->driver->res_spec, VAR_2->sc_res);
 FUNC_2(VAR_1);

 return (0);
}
