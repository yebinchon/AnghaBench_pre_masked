
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef int vm_memattr_t ;
struct cdev {int si_drv1; } ;
struct agp_softc {int * as_aperture; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ) ;
 struct agp_softc* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_0, vm_ooffset_t VAR_1, vm_paddr_t *VAR_2,
    int VAR_3, vm_memattr_t *VAR_4)
{
 device_t VAR_5 = VAR_0->si_drv1;
 struct agp_softc *VAR_6 = FUNC_1(VAR_5);

 if (VAR_1 > FUNC_0(VAR_5))
  return -1;
 if (VAR_6->as_aperture == ((void*)0))
  return -1;
 *VAR_2 = FUNC_2(VAR_6->as_aperture) + VAR_1;
 return 0;
}
