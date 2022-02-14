
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
typedef int intmax_t ;
typedef int device_t ;
struct TYPE_6__ {int ag_entries; } ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct TYPE_4__ {int (* install_gtt_pte ) (int ,int,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct agp_i810_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int,int,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, vm_offset_t VAR_3, vm_offset_t VAR_4)
{
 struct agp_i810_softc *VAR_5 = FUNC_0(VAR_2);
 u_int VAR_6;

 if (VAR_3 >= (VAR_5->gatt->ag_entries << VAR_0)) {
  FUNC_1(VAR_2, "failed: offset is 0x%08jx, "
      "shift is %d, entries is %d\n", (intmax_t)VAR_3,
      VAR_0, VAR_5->gatt->ag_entries);
  return (VAR_1);
 }
 VAR_6 = VAR_3 >> VAR_0;
 if (VAR_5->stolen != 0 && VAR_6 < VAR_5->stolen) {
  FUNC_1(VAR_2, "trying to bind into stolen memory\n");
  return (VAR_1);
 }
 VAR_5->match->driver->install_gtt_pte(VAR_2, VAR_6, VAR_4, 0);
 return (0);
}
