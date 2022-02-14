
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atp_softc {int sc_state; int sc_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct atp_softc*) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct atp_softc *VAR_2)
{
 if (VAR_2->sc_state & VAR_0)
  return (0);


 FUNC_2(&VAR_2->sc_status, 0, sizeof(VAR_2->sc_status));

 FUNC_1(VAR_2);

 VAR_2->sc_state |= VAR_0;

 FUNC_0(VAR_1, "enabled atp\n");
 return (0);
}
