
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct agp_i810_softc {TYPE_2__* match; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {void (* write_gtt ) (int ,int ,int ) ;} ;


 struct agp_i810_softc* FUNC_0 (int ) ;
 int VAR_0 ;
 void FUNC_1 (int ,int ,int ) ;

void
FUNC_2(u_int VAR_1, uint32_t VAR_2)
{
 struct agp_i810_softc *VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 return (VAR_3->match->driver->write_gtt(VAR_0, VAR_1, VAR_2));
}
