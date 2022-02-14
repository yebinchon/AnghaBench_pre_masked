
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_softc {int sc_flags; int sc_generation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwm_softc*) ;
 int FUNC_1 (struct iwm_softc*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void
FUNC_3(struct iwm_softc *VAR_2)
{
 int VAR_3;

 if (VAR_2->sc_flags & VAR_0) {
  return;
 }
 VAR_2->sc_generation++;
 VAR_2->sc_flags &= ~VAR_1;

 if ((VAR_3 = FUNC_0(VAR_2)) != 0) {
  FUNC_2("iwm_init_hw failed %d\n", VAR_3);
  FUNC_1(VAR_2);
  return;
 }




 VAR_2->sc_flags |= VAR_0;
}
