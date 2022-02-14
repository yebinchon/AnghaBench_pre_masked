
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct mly_softc {int mly_state; } ;
struct cdev {struct mly_softc* si_drv1; } ;


 int FUNC_0 (struct mly_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct mly_softc*) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_1, int VAR_2, int VAR_3, struct thread *VAR_4)
{
    struct mly_softc *VAR_5 = VAR_1->si_drv1;

    FUNC_0(VAR_5);
    VAR_5->mly_state |= VAR_0;
    FUNC_1(VAR_5);
    return(0);
}
