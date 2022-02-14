
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atp_softc {int sc_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void
FUNC_1(struct atp_softc *VAR_3)
{
 VAR_3->sc_state &= ~(VAR_0 | VAR_2);
 FUNC_0(VAR_1, "disabled atp\n");
}
