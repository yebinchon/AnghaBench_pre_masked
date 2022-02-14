
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef int vm_memattr_t ;
struct creator_softc {scalar_t__ sc_reg_size; scalar_t__* sc_bh; } ;
struct cdev {struct creator_softc* si_drv1; } ;
struct TYPE_2__ {scalar_t__ virt; scalar_t__ size; scalar_t__ phys; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct cdev *VAR_3, vm_ooffset_t VAR_4, vm_paddr_t *VAR_5,
    int VAR_6, vm_memattr_t *VAR_7)
{
 struct creator_softc *VAR_8;
 int VAR_9;





 VAR_8 = VAR_3->si_drv1;
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  if (VAR_4 >= VAR_2[VAR_9].virt &&
      VAR_4 < VAR_2[VAR_9].virt + VAR_2[VAR_9].size) {
   VAR_4 += VAR_2[VAR_9].phys -
       VAR_2[VAR_9].virt;
   if (VAR_4 >= VAR_8->sc_reg_size)
    return (VAR_1);
   *VAR_5 = VAR_8->sc_bh[0] + VAR_4;
   return (0);
  }
 }
 return (VAR_1);
}
