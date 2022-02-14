
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct gpiokeys_softc {int dummy; } ;
struct TYPE_4__ {struct gpiokeys_softc* kb_data; } ;
typedef TYPE_1__ keyboard_t ;


 int FUNC_0 (struct gpiokeys_softc*) ;
 int FUNC_1 (struct gpiokeys_softc*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(keyboard_t *VAR_0)
{
 int VAR_1;
 struct gpiokeys_softc *VAR_2 = VAR_0->kb_data;

 FUNC_0(VAR_2);
 VAR_1 = FUNC_2(VAR_0);
 FUNC_1(VAR_2);

 return (VAR_1);
}
