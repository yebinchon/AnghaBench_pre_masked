
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_int ;
struct agp_i810_softc {TYPE_2__* match; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int (* read_gtt_pte ) (int ,int ) ;} ;


 struct agp_i810_softc* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;

u_int32_t
FUNC_2(u_int VAR_1)
{
 struct agp_i810_softc *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 return (VAR_2->match->driver->read_gtt_pte(VAR_0, VAR_1));
}
