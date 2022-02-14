
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ft5406ts_softc {int sc_callout; } ;
struct evdev_dev {int dummy; } ;


 int FUNC_0 (struct ft5406ts_softc*) ;
 int FUNC_1 (int *) ;
 struct ft5406ts_softc* FUNC_2 (struct evdev_dev*) ;

__attribute__((used)) static int
FUNC_3(struct evdev_dev *VAR_0)
{
 struct ft5406ts_softc *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1);

 FUNC_1(&VAR_1->sc_callout);

 return (0);
}
