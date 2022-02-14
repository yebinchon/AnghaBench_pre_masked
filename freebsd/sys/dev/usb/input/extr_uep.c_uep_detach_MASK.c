
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uep_softc {int mtx; int xfer; int fifo; int evdev; } ;
typedef int device_t ;


 int VAR_0 ;
 struct uep_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct uep_softc *VAR_2 = FUNC_0(VAR_1);




 FUNC_3(&VAR_2->fifo);


 FUNC_4(VAR_2->xfer, VAR_0);

 FUNC_2(&VAR_2->mtx);

 return (0);
}
