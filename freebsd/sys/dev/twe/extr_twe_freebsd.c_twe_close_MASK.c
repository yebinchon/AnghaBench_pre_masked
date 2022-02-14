
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twe_softc {int twe_state; } ;
struct thread {int dummy; } ;
struct cdev {scalar_t__ si_drv1; } ;


 int FUNC_0 (struct twe_softc*) ;
 int FUNC_1 (struct twe_softc*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_1, int VAR_2, int VAR_3, struct thread *VAR_4)
{
    struct twe_softc *VAR_5 = (struct twe_softc *)VAR_1->si_drv1;

    FUNC_0(VAR_5);
    VAR_5->twe_state &= ~VAR_0;
    FUNC_1(VAR_5);
    return (0);
}
