
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wi_softc {int sc_portnum; int sc_enabled; } ;


 int FUNC_0 (struct wi_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct wi_softc*,int,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct wi_softc *VAR_3)
{

 FUNC_0(VAR_3, VAR_2, VAR_1);


 FUNC_1(VAR_3, VAR_0 | VAR_3->sc_portnum, 0, 0, 0);
 VAR_3->sc_enabled = 1;
}
