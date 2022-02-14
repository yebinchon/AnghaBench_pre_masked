
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ukbd_softc {int sc_flags; scalar_t__ sc_inputs; scalar_t__* sc_buffered_char; } ;
struct TYPE_4__ {struct ukbd_softc* kb_data; } ;
typedef TYPE_1__ keyboard_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (struct ukbd_softc*,int ) ;

__attribute__((used)) static int
FUNC_3(keyboard_t *VAR_1)
{
 struct ukbd_softc *VAR_2 = VAR_1->kb_data;

 FUNC_1();

 if (!FUNC_0(VAR_1))
  return (0);

 if (VAR_2->sc_flags & VAR_0)
  FUNC_2(VAR_2, 0);






 if (VAR_2->sc_inputs > 0) {
  return (1);
 }
 return (0);
}
