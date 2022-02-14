
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uss820dci_softc {scalar_t__ sc_xfer_complete; int sc_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (struct uss820dci_softc*,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct uss820dci_softc*) ;
 int FUNC_4 (struct uss820dci_softc*,int ,int,int ) ;

int
FUNC_5(void *VAR_4)
{
 struct uss820dci_softc *VAR_5 = VAR_4;
 int VAR_6 = VAR_0;
 uint8_t VAR_7;

 FUNC_0(&VAR_5->sc_bus);

 VAR_7 = FUNC_2(VAR_5, VAR_3);
 FUNC_4(VAR_5, VAR_3, VAR_2, 0);

 if (VAR_7 & VAR_2)
  VAR_6 = VAR_1;


 FUNC_3(VAR_5);

 if (VAR_5->sc_xfer_complete != 0)
  VAR_6 = VAR_1;

 FUNC_1(&VAR_5->sc_bus);

 return (VAR_6);
}
