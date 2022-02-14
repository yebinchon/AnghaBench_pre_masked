
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_trb {scalar_t__ qwTrb0; int dwTrb3; int dwTrb2; } ;
struct xhci_softc {scalar_t__ sc_cmd_addr; int sc_cmd_cv; int * sc_cmd_result; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct xhci_softc *VAR_0, struct xhci_trb *VAR_1)
{
 if (VAR_0->sc_cmd_addr == VAR_1->qwTrb0) {
  FUNC_0("Received command event\n");
  VAR_0->sc_cmd_result[0] = VAR_1->dwTrb2;
  VAR_0->sc_cmd_result[1] = VAR_1->dwTrb3;
  FUNC_1(&VAR_0->sc_cmd_cv);
  return (1);
 }
 return (0);
}
