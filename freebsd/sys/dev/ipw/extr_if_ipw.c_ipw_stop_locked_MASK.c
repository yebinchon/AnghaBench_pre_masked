
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_softc {int flags; scalar_t__ sc_tx_timer; int * stbd_list; int sc_wdtimer; } ;


 int FUNC_0 (struct ipw_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ipw_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ipw_softc*,int *) ;
 int FUNC_4 (struct ipw_softc*) ;

__attribute__((used)) static void
FUNC_5(struct ipw_softc *VAR_4)
{
 int VAR_5;

 FUNC_1(VAR_4);

 FUNC_2(&VAR_4->sc_wdtimer);
 FUNC_4(VAR_4);

 FUNC_0(VAR_4, VAR_0, VAR_3);




 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  FUNC_3(VAR_4, &VAR_4->stbd_list[VAR_5]);

 VAR_4->sc_tx_timer = 0;
 VAR_4->flags &= ~VAR_1;
}
