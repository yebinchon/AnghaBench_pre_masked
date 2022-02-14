
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_cnstate {int kbd_locked; } ;
typedef int sc_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(sc_softc_t *VAR_2, struct sc_cnstate *VAR_3)
{






    VAR_3->kbd_locked = !VAR_1 && FUNC_0(&VAR_0);
}
