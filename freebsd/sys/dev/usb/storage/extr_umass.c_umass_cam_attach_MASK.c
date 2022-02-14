
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umass_softc {char* sc_name; int sc_unit; int sc_sim; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int,int,int) ;

__attribute__((used)) static void
FUNC_2(struct umass_softc *VAR_1)
{

 if (VAR_0)

  FUNC_1("%s:%d:%d: Attached to scbus%d\n",
      VAR_1->sc_name, FUNC_0(VAR_1->sc_sim),
      VAR_1->sc_unit, FUNC_0(VAR_1->sc_sim));
}
