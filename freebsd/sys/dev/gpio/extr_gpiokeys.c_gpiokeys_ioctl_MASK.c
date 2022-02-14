
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
struct gpiokeys_softc {int dummy; } ;
struct TYPE_5__ {struct gpiokeys_softc* kb_data; } ;
typedef TYPE_1__ keyboard_t ;
typedef int caddr_t ;
struct TYPE_6__ {scalar_t__ td_critnest; } ;


 int VAR_0 ;
 int FUNC_0 (struct gpiokeys_softc*) ;
 int FUNC_1 (struct gpiokeys_softc*) ;
 TYPE_4__* VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(keyboard_t *VAR_2, u_long VAR_3, caddr_t VAR_4)
{
 int VAR_5;
 struct gpiokeys_softc *VAR_6;

 VAR_6 = VAR_2->kb_data;



 if (VAR_1->td_critnest != 0)
  return (VAR_0);

 FUNC_0(VAR_6);
 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
 FUNC_1(VAR_6);

 return (VAR_5);
}
