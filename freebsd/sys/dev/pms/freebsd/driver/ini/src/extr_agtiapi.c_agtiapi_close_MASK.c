
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {struct agtiapi_softc* si_drv1; } ;
struct agtiapi_softc {int my_dev; } ;


 int FUNC_0 (char*,...) ;

int FUNC_1( struct cdev *VAR_0, int VAR_1, int VAR_2, struct thread *VAR_3 )
{
  struct agtiapi_softc *VAR_4;

  VAR_4 = VAR_0->si_drv1;
  FUNC_0("agtiapi_close\n");
  FUNC_0("Closed. sc->my_dev %p\n", VAR_4->my_dev);
  return( 0 );
}
