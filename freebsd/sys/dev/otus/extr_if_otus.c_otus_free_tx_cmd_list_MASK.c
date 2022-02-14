
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otus_softc {int sc_cmd; int sc_cmd_waiting; int sc_cmd_pending; int sc_cmd_inactive; int sc_cmd_active; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct otus_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct otus_softc *VAR_1)
{





 FUNC_0(&VAR_1->sc_cmd_active);
 FUNC_0(&VAR_1->sc_cmd_inactive);
 FUNC_0(&VAR_1->sc_cmd_pending);
 FUNC_0(&VAR_1->sc_cmd_waiting);

 FUNC_1(VAR_1, VAR_1->sc_cmd, VAR_0);
}
