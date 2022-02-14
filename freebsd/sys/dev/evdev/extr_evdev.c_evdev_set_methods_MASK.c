
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdev_methods {int dummy; } ;
struct evdev_dev {void* ev_softc; struct evdev_methods const* ev_methods; } ;



inline void
FUNC_0(struct evdev_dev *VAR_0, void *VAR_1,
    const struct evdev_methods *VAR_2)
{

 VAR_0->ev_methods = VAR_2;
 VAR_0->ev_softc = VAR_1;
}
