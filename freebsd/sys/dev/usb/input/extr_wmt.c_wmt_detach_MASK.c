
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmt_softc {int mtx; int xfer; int evdev; } ;
typedef int device_t ;


 int VAR_0 ;
 struct wmt_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct wmt_softc *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2->evdev);
 FUNC_3(VAR_2->xfer, VAR_0);
 FUNC_2(&VAR_2->mtx);
 return (0);
}
