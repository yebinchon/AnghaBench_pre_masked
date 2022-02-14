
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct uio {scalar_t__ uio_resid; } ;
struct TYPE_2__ {scalar_t__ vaddr; scalar_t__ fill; } ;
struct fpgamgr_s10_softc {scalar_t__ opened; int sx; TYPE_1__ mem; } ;
struct cdev {struct fpgamgr_s10_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*,int,struct uio*) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_3, struct uio *VAR_4, int VAR_5)
{
 struct fpgamgr_s10_softc *VAR_6;
 vm_offset_t VAR_7;
 int VAR_8;

 VAR_6 = VAR_3->si_drv1;

 FUNC_1(&VAR_6->sx);
 if (VAR_6->opened == 0) {

  FUNC_2(&VAR_6->sx);
  return (VAR_1);
 }

 while (VAR_4->uio_resid > 0) {
  VAR_7 = VAR_6->mem.vaddr + VAR_6->mem.fill;
  if (VAR_6->mem.fill >= VAR_2)
   return (VAR_0);
  VAR_8 = FUNC_0(VAR_4->uio_resid, (VAR_2 - VAR_6->mem.fill));
  FUNC_3((void *)VAR_7, VAR_8, VAR_4);
  VAR_6->mem.fill += VAR_8;
 }

 FUNC_2(&VAR_6->sx);

 return (0);
}
