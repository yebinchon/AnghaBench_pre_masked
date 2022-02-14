
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct xhci_softc {int* sc_hub_idata; int sc_noport; int sc_bus; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct xhci_softc*,int ,int ) ;
 int FUNC_4 (int*,int ,int) ;
 int VAR_8 ;
 int FUNC_5 (int *,int*,int) ;

__attribute__((used)) static void
FUNC_6(struct xhci_softc *VAR_9)
{
 uint16_t VAR_10;

 FUNC_1(&VAR_9->sc_bus, VAR_0);


 FUNC_4(VAR_9->sc_hub_idata, 0, sizeof(VAR_9->sc_hub_idata));

 for (VAR_10 = 1; VAR_10 <= VAR_9->sc_noport; VAR_10++) {

  if (FUNC_3(VAR_9, VAR_8, FUNC_2(VAR_10)) & (
      VAR_2 | VAR_4 |
      VAR_3 | VAR_7 |
      VAR_6 | VAR_5 |
      VAR_1)) {
   VAR_9->sc_hub_idata[VAR_10 / 8] |= 1 << (VAR_10 % 8);
   FUNC_0("port %d changed\n", VAR_10);
  }
 }
 FUNC_5(&VAR_9->sc_bus, VAR_9->sc_hub_idata,
     sizeof(VAR_9->sc_hub_idata));
}
