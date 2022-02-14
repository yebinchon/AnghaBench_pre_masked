
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct avr32dci_td {int ep_no; int pc; } ;
struct avr32dci_softc {int sc_dv_addr; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 struct avr32dci_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct avr32dci_softc*,int ) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (struct avr32dci_softc*,int) ;

__attribute__((used)) static uint8_t
FUNC_6(struct avr32dci_td *VAR_1)
{
 struct avr32dci_softc *VAR_2;
 uint32_t VAR_3;


 VAR_2 = FUNC_2(VAR_1->pc);


 VAR_3 = FUNC_3(VAR_2, FUNC_0(VAR_1->ep_no));

 FUNC_4(5, "EPTSTA(%u)=0x%08x\n", VAR_1->ep_no, VAR_3);

 if (VAR_3 & VAR_0) {
  FUNC_4(5, "faking complete\n");

  return (0);
 }




 if (FUNC_1(VAR_3) != 0) {

  goto not_complete;
 }
 if (VAR_2->sc_dv_addr != 0xFF) {

  FUNC_5(VAR_2, VAR_2->sc_dv_addr);
 }
 return (0);

not_complete:
 return (1);
}
