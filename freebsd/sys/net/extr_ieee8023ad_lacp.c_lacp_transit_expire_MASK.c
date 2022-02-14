
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lacp_softc {int lsc_suppress_distributing; TYPE_2__* lsc_softc; } ;
struct TYPE_4__ {TYPE_1__* sc_ifp; } ;
struct TYPE_3__ {int if_vnet; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct lacp_softc*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct lacp_softc *VAR_2 = VAR_1;

 FUNC_2(VAR_2);

 FUNC_1(VAR_2->lsc_softc->sc_ifp->if_vnet);
 FUNC_3(((void*)0));
 FUNC_0();

 VAR_2->lsc_suppress_distributing = VAR_0;
}
