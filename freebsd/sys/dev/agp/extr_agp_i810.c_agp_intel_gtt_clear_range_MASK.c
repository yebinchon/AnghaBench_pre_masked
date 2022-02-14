
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct agp_i810_softc {TYPE_2__* match; } ;
typedef int device_t ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int (* read_gtt_pte ) (int ,scalar_t__) ;int (* install_gtt_pte ) (int ,scalar_t__,int ,int ) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct agp_i810_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;
 int FUNC_3 (int ,scalar_t__) ;

void
FUNC_4(device_t VAR_1, u_int VAR_2, u_int VAR_3)
{
 struct agp_i810_softc *VAR_4;
 u_int VAR_5;

 VAR_4 = FUNC_1(VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  VAR_4->match->driver->install_gtt_pte(VAR_1, VAR_2 + VAR_5,
      FUNC_0(VAR_0), 0);
 VAR_4->match->driver->read_gtt_pte(VAR_1, VAR_2 + VAR_3 - 1);
}
