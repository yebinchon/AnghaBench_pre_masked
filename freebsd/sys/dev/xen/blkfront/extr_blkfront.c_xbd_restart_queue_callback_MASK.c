
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbd_softc {int xbd_io_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct xbd_softc*) ;
 int FUNC_3 (struct xbd_softc*,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct xbd_softc *VAR_2 = VAR_1;

 FUNC_0(&VAR_2->xbd_io_lock);

 FUNC_3(VAR_2, VAR_0);

 FUNC_2(VAR_2);

 FUNC_1(&VAR_2->xbd_io_lock);
}
