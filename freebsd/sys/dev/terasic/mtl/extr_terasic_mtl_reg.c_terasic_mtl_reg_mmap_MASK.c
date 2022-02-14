
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef int vm_memattr_t ;
struct terasic_mtl_softc {int mtl_reg_res; } ;
struct cdev {struct terasic_mtl_softc* si_drv1; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_3, vm_ooffset_t VAR_4, vm_paddr_t *VAR_5,
    int VAR_6, vm_memattr_t *VAR_7)
{
 struct terasic_mtl_softc *VAR_8;
 int VAR_9;

 VAR_8 = VAR_3->si_drv1;
 VAR_9 = 0;
 if (FUNC_2(VAR_4) == VAR_4 &&
     VAR_4 + VAR_1 > VAR_4 &&
     FUNC_0(VAR_8->mtl_reg_res) >= VAR_4 + VAR_1) {
  *VAR_5 = FUNC_1(VAR_8->mtl_reg_res) + VAR_4;
  *VAR_7 = VAR_2;
 } else
  VAR_9 = VAR_0;
 return (VAR_9);
}
