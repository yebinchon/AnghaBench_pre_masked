
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_softc {int sc_wantresp; } ;
struct iwm_host_cmd {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int*) ;

void
FUNC_2(struct iwm_softc *VAR_2, struct iwm_host_cmd *VAR_3)
{
 FUNC_0(VAR_2->sc_wantresp != -1, ("already freed"));
 FUNC_0((VAR_3->flags & (VAR_1|VAR_0))
     == (VAR_1|VAR_0), ("invalid flags"));
 VAR_2->sc_wantresp = -1;
 FUNC_1(&VAR_2->sc_wantresp);
}
