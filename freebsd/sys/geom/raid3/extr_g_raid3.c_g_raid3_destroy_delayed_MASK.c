
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid3_softc {int sc_flags; int sc_lock; int sc_name; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct g_raid3_softc*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(void *VAR_4, int VAR_5)
{
 struct g_raid3_softc *VAR_6;
 int VAR_7;

 if (VAR_5 == VAR_0) {
  FUNC_0(1, "Destroying canceled.");
  return;
 }
 VAR_6 = VAR_4;
 FUNC_4();
 FUNC_5(&VAR_6->sc_lock);
 FUNC_1((VAR_6->sc_flags & VAR_2) == 0,
     ("DESTROY flag set on %s.", VAR_6->sc_name));
 FUNC_1((VAR_6->sc_flags & VAR_3) != 0,
     ("DESTROYING flag not set on %s.", VAR_6->sc_name));
 FUNC_0(0, "Destroying %s (delayed).", VAR_6->sc_name);
 VAR_7 = FUNC_2(VAR_6, VAR_1);
 if (VAR_7 != 0) {
  FUNC_0(0, "Cannot destroy %s.", VAR_6->sc_name);
  FUNC_6(&VAR_6->sc_lock);
 }
 FUNC_3();
}
