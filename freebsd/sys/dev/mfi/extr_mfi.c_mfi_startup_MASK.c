
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfi_softc {int mfi_flags; int mfi_ich; int mfi_config_lock; int mfi_io_lock; int (* mfi_enable_intr ) (struct mfi_softc*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mfi_softc*) ;
 int FUNC_2 (struct mfi_softc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mfi_softc*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(void *VAR_1)
{
 struct mfi_softc *VAR_2;

 VAR_2 = (struct mfi_softc *)VAR_1;

 VAR_2->mfi_enable_intr(VAR_2);
 FUNC_6(&VAR_2->mfi_config_lock);
 FUNC_3(&VAR_2->mfi_io_lock);
 FUNC_1(VAR_2);
 if (VAR_2->mfi_flags & VAR_0)
     FUNC_2(VAR_2);
 FUNC_4(&VAR_2->mfi_io_lock);
 FUNC_7(&VAR_2->mfi_config_lock);

 FUNC_0(&VAR_2->mfi_ich);
}
