
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef int vm_memattr_t ;
struct cdev {struct altera_avgen_softc* si_drv1; } ;
struct altera_avgen_softc {int avg_flags; int avg_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_10, vm_ooffset_t VAR_11, vm_paddr_t *VAR_12,
    int VAR_13, vm_memattr_t *VAR_14)
{
 struct altera_avgen_softc *VAR_15;

 VAR_15 = VAR_10->si_drv1;
 if (VAR_13 & VAR_8) {
  if ((VAR_15->avg_flags & VAR_1) == 0)
   return (VAR_3);
 }
 if (VAR_13 & VAR_9) {
  if ((VAR_15->avg_flags & VAR_2) == 0)
   return (VAR_3);
 }
 if (VAR_13 & VAR_7) {
  if ((VAR_15->avg_flags & VAR_0) == 0)
   return (VAR_3);
 }
 if (FUNC_2(VAR_11) == VAR_11 &&
     VAR_11 + VAR_5 > VAR_11 &&
     FUNC_0(VAR_15->avg_res) >= VAR_11 + VAR_5) {
  *VAR_12 = FUNC_1(VAR_15->avg_res) + VAR_11;
  *VAR_14 = VAR_6;
 } else
  return (VAR_4);
 return (0);
}
