
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twe_softc {int twe_state; } ;
struct thread {int dummy; } ;
struct cdev {scalar_t__ si_drv1; } ;


 int VAR_0 ;
 int FUNC_0 (struct twe_softc*) ;
 int FUNC_1 (struct twe_softc*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_3, int VAR_4, int VAR_5, struct thread *VAR_6)
{
    struct twe_softc *VAR_7 = (struct twe_softc *)VAR_3->si_drv1;

    FUNC_0(VAR_7);
    if (VAR_7->twe_state & VAR_1) {
 FUNC_1(VAR_7);
 return (VAR_0);
    }
    VAR_7->twe_state |= VAR_2;
    FUNC_1(VAR_7);
    return(0);
}
