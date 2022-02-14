
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
struct agp_i810_softc {TYPE_1__* gatt; int * sc_res; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ ag_virtual; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 struct agp_i810_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_1)
{
 struct agp_i810_softc *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 FUNC_0(VAR_2->sc_res[0], VAR_0, 0);
 FUNC_2((vm_offset_t)VAR_2->gatt->ag_virtual, 64 * 1024);
}
