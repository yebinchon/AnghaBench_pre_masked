
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_gate_softc {scalar_t__ sc_ref; int sc_flags; int sc_name; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_5(struct g_gate_softc *VAR_2)
{

 FUNC_1();
 FUNC_2(&VAR_1);
 VAR_2->sc_ref--;
 FUNC_0(VAR_2->sc_ref >= 0, ("Negative sc_ref for %s.", VAR_2->sc_name));
 if (VAR_2->sc_ref == 0 && (VAR_2->sc_flags & VAR_0) != 0)
  FUNC_4(&VAR_2->sc_ref);
 FUNC_3(&VAR_1);
}
