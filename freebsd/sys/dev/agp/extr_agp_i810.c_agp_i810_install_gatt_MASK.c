
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
struct agp_i810_softc {int dcache_size; TYPE_1__* gatt; int * sc_res; } ;
typedef int device_t ;
struct TYPE_2__ {int ag_physical; int * ag_virtual; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct agp_i810_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int,int,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_9)
{
 struct agp_i810_softc *VAR_10;

 VAR_10 = FUNC_2(VAR_9);


 if ((FUNC_0(VAR_10->sc_res[0], VAR_0) & VAR_1)
     != 0)
  VAR_10->dcache_size = 4 * 1024 * 1024;
 else
  VAR_10->dcache_size = 0;


 VAR_10->gatt->ag_virtual = (void *)FUNC_4(64 * 1024, VAR_4 |
     VAR_5, 0, ~0, VAR_6, 0, VAR_7);
 if (VAR_10->gatt->ag_virtual == ((void*)0)) {
  if (VAR_8)
   FUNC_3(VAR_9, "contiguous allocation failed\n");
  return (VAR_3);
 }

 VAR_10->gatt->ag_physical = FUNC_5((vm_offset_t)VAR_10->gatt->ag_virtual);

 FUNC_1(VAR_10->sc_res[0], VAR_2,
     VAR_10->gatt->ag_physical | 1);
 return (0);
}
