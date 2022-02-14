
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef int u_int32_t ;
typedef int u_int ;
struct agp_i810_softc {TYPE_2__* match; } ;
typedef int device_t ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int (* read_gtt_pte ) (int ,int ) ;} ;


 int VAR_0 ;
 struct agp_i810_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static vm_paddr_t
FUNC_2(device_t VAR_1, u_int VAR_2)
{
 struct agp_i810_softc *VAR_3;
 u_int32_t VAR_4;
 vm_paddr_t VAR_5;

 VAR_3 = FUNC_0(VAR_1);
 VAR_4 = VAR_3->match->driver->read_gtt_pte(VAR_1, VAR_2);
 VAR_5 = VAR_4 & ~VAR_0;
 return (VAR_5);
}
