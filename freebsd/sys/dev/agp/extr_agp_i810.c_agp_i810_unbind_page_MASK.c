
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int u_int ;
struct agp_i810_softc {int stolen; TYPE_2__* match; TYPE_3__* gatt; } ;
typedef int device_t ;
struct TYPE_6__ {int ag_entries; } ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct TYPE_4__ {int (* install_gtt_pte ) (int ,int,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct agp_i810_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int,int ,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, vm_offset_t VAR_3)
{
 struct agp_i810_softc *VAR_4;
 u_int VAR_5;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_3 >= (VAR_4->gatt->ag_entries << VAR_0))
  return (VAR_1);
 VAR_5 = VAR_3 >> VAR_0;
 if (VAR_4->stolen != 0 && VAR_5 < VAR_4->stolen) {
  FUNC_1(VAR_2, "trying to unbind from stolen memory\n");
  return (VAR_1);
 }
 VAR_4->match->driver->install_gtt_pte(VAR_2, VAR_5, 0, 0);
 return (0);
}
