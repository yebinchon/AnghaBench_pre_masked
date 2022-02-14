
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otus_softc {int * sc_cmd; int sc_cmd_inactive; int sc_cmd_waiting; int sc_cmd_pending; int sc_cmd_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct otus_softc*,int *,int,int ) ;

__attribute__((used)) static int
FUNC_3(struct otus_softc *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_2(VAR_3, VAR_3->sc_cmd, VAR_0,
     VAR_1);
 if (VAR_4 != 0)
  return (VAR_4);

 FUNC_0(&VAR_3->sc_cmd_active);
 FUNC_0(&VAR_3->sc_cmd_inactive);
 FUNC_0(&VAR_3->sc_cmd_pending);
 FUNC_0(&VAR_3->sc_cmd_waiting);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_1(&VAR_3->sc_cmd_inactive, &VAR_3->sc_cmd[VAR_5],
      VAR_2);

 return (0);
}
