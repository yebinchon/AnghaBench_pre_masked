
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct twe_softc {int dummy; } ;
struct thread {int dummy; } ;
struct cdev {scalar_t__ si_drv1; } ;
typedef int int32_t ;
typedef int caddr_t ;


 int FUNC_0 (struct twe_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct cdev *VAR_0, u_long VAR_1, caddr_t VAR_2, int32_t VAR_3, struct thread *VAR_4)
{
    struct twe_softc *VAR_5 = (struct twe_softc *)VAR_0->si_drv1;

    return(FUNC_0(VAR_5, VAR_1, VAR_2));
}
