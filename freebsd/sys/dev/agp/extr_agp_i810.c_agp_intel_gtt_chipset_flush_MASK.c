
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct agp_i810_softc {TYPE_2__* match; } ;
typedef int device_t ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int (* chipset_flush ) (int ) ;} ;


 struct agp_i810_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int
FUNC_2(device_t VAR_0)
{
 struct agp_i810_softc *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 VAR_1->match->driver->chipset_flush(VAR_0);
 return (0);
}
