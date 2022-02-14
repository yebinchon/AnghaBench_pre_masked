
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef int vm_memattr_t ;
struct hpet_softc {int mem_res; int mmap_allow_write; } ;
struct cdev {struct hpet_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_4, vm_ooffset_t VAR_5, vm_paddr_t *VAR_6,
    int VAR_7, vm_memattr_t *VAR_8)
{
 struct hpet_softc *VAR_9;

 VAR_9 = VAR_4->si_drv1;
 if (VAR_5 >= FUNC_0(VAR_9->mem_res))
  return (VAR_0);
 if (!VAR_9->mmap_allow_write && (VAR_7 & VAR_2))
  return (VAR_1);
 *VAR_6 = FUNC_1(VAR_9->mem_res) + VAR_5;
 *VAR_8 = VAR_3;

 return (0);
}
