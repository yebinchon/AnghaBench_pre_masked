
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int dummy; } ;
struct tws_softc {int dummy; } ;
struct cdev {struct tws_softc* si_drv1; } ;


 int FUNC_0 (struct tws_softc*,char*,struct cdev*,int) ;

int
FUNC_1(struct cdev *VAR_0, struct uio *VAR_1, int VAR_2)
{
    struct tws_softc *VAR_3 = VAR_0->si_drv1;

    if ( VAR_3 )
        FUNC_0(VAR_3, "entry", VAR_0, VAR_2);
    return (0);
}
