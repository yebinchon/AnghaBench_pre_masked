
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef int u_int ;
struct agp_i810_softc {TYPE_2__* match; } ;
typedef int device_t ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int (* install_gtt_pte ) (int ,int ,int ,int ) ;} ;


 struct agp_i810_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, u_int VAR_1, vm_paddr_t VAR_2,
    u_int VAR_3)
{
 struct agp_i810_softc *VAR_4;

 VAR_4 = FUNC_0(VAR_0);
 VAR_4->match->driver->install_gtt_pte(VAR_0, VAR_1, VAR_2, VAR_3);
}
