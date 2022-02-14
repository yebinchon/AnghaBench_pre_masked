
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmmdev_softc {int dummy; } ;
struct cdev {struct vmmdev_softc* si_drv1; } ;



__attribute__((used)) static struct vmmdev_softc *
FUNC_0(struct cdev *VAR_0)
{

 return (VAR_0->si_drv1);
}
