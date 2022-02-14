
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ukbd_softc {scalar_t__ sc_composed_char; int sc_flags; } ;
struct TYPE_5__ {struct ukbd_softc* kb_data; } ;
typedef TYPE_1__ keyboard_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(keyboard_t *VAR_1)
{
 struct ukbd_softc *VAR_2 = VAR_1->kb_data;

 FUNC_1();

 if (!FUNC_0(VAR_1))
  return (0);

 if ((VAR_2->sc_composed_char > 0) &&
     (!(VAR_2->sc_flags & VAR_0))) {
  return (1);
 }
 return (FUNC_2(VAR_1));
}
