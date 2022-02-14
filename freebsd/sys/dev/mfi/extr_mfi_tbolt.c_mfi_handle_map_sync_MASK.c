
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfi_softc {int mfi_io_lock; } ;


 int FUNC_0 (struct mfi_softc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(void *VAR_0, int VAR_1)
{
 struct mfi_softc *VAR_2;

 VAR_2 = VAR_0;
 FUNC_1(&VAR_2->mfi_io_lock);
 FUNC_0(VAR_2);
 FUNC_2(&VAR_2->mfi_io_lock);
}
