
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfi_softc {int (* mfi_check_clear_intr ) (struct mfi_softc*) ;int mfi_io_lock; int mfi_flags; scalar_t__ mfi_detaching; } ;


 int VAR_0 ;
 int FUNC_0 (struct mfi_softc*) ;
 int FUNC_1 (struct mfi_softc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mfi_softc*) ;

void
FUNC_5(void *VAR_1)
{
 struct mfi_softc *VAR_2 = (struct mfi_softc *)VAR_1;

 if (VAR_2->mfi_check_clear_intr(VAR_2) == 1) {
  return;
 }
 if (VAR_2->mfi_detaching)
  return;
 FUNC_2(&VAR_2->mfi_io_lock);
 FUNC_1(VAR_2);
 VAR_2->mfi_flags &= ~VAR_0;
 FUNC_0(VAR_2);
 FUNC_3(&VAR_2->mfi_io_lock);
 return;
}
