
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef int vm_memattr_t ;
struct cdev {struct beri_mem_softc* si_drv1; } ;
struct beri_mem_softc {scalar_t__ mem_size; scalar_t__ mem_start; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct cdev *VAR_1, vm_ooffset_t VAR_2, vm_paddr_t *VAR_3, int VAR_4,
    vm_memattr_t *VAR_5)
{
 struct beri_mem_softc *VAR_6;

 VAR_6 = VAR_1->si_drv1;

 if (VAR_2 < VAR_6->mem_size) {
  *VAR_3 = VAR_6->mem_start + VAR_2;
  return (0);
        }

 return (VAR_0);
}
