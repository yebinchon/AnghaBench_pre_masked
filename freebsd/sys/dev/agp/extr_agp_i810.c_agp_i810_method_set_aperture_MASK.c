
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct agp_i810_softc {TYPE_2__* match; } ;
typedef int device_t ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int (* set_aperture ) (int ,int ) ;} ;


 struct agp_i810_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, u_int32_t VAR_1)
{
 struct agp_i810_softc *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 return (VAR_2->match->driver->set_aperture(VAR_0, VAR_1));
}
