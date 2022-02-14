
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urtw_softc {int * sc_rx; int sc_rx_inactive; int sc_rx_active; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct urtw_softc*,int *,int,int ,int *) ;

__attribute__((used)) static int
FUNC_3(struct urtw_softc *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_2(VAR_3,
     VAR_3->sc_rx, VAR_1,
     VAR_0, ((void*)0) );
 if (VAR_4 != 0)
  return (VAR_4);

 FUNC_0(&VAR_3->sc_rx_active);
 FUNC_0(&VAR_3->sc_rx_inactive);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  FUNC_1(&VAR_3->sc_rx_inactive, &VAR_3->sc_rx[VAR_5], VAR_2);

 return (0);
}
