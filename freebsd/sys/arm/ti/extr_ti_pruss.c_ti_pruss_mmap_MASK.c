
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef int vm_memattr_t ;
struct ti_pruss_softc {int sc_mem_res; } ;
struct cdev {int si_drv1; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ti_pruss_softc* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_2, vm_ooffset_t VAR_3, vm_paddr_t *VAR_4,
    int VAR_5, vm_memattr_t *VAR_6)
{
 device_t VAR_7 = VAR_2->si_drv1;
 struct ti_pruss_softc *VAR_8 = FUNC_0(VAR_7);

 if (VAR_3 >= FUNC_1(VAR_8->sc_mem_res))
  return (VAR_0);
 *VAR_4 = FUNC_2(VAR_8->sc_mem_res) + VAR_3;
 *VAR_6 = VAR_1;

 return (0);
}
