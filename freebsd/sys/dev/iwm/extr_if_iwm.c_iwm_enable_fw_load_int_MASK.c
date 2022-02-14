
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_softc {int sc_intmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwm_softc*,int ,char*) ;
 int FUNC_1 (struct iwm_softc*,int ,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct iwm_softc *VAR_3)
{
 FUNC_0(VAR_3, VAR_2, "Enabling FW load interrupt\n");
 VAR_3->sc_intmask = VAR_0;
 FUNC_1(VAR_3, VAR_1, VAR_3->sc_intmask);
}
