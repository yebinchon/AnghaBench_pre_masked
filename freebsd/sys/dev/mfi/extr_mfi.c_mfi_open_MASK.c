
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct mfi_softc {int mfi_io_lock; int mfi_flags; scalar_t__ mfi_detaching; } ;
struct cdev {struct mfi_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_2, int VAR_3, int VAR_4, struct thread *VAR_5)
{
 struct mfi_softc *VAR_6;
 int VAR_7;

 VAR_6 = VAR_2->si_drv1;

 FUNC_0(&VAR_6->mfi_io_lock);
 if (VAR_6->mfi_detaching)
  VAR_7 = VAR_0;
 else {
  VAR_6->mfi_flags |= VAR_1;
  VAR_7 = 0;
 }
 FUNC_1(&VAR_6->mfi_io_lock);

 return (VAR_7);
}
