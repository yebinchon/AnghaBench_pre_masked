
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct atmegadci_td {int ep_no; int pc; } ;
struct atmegadci_softc {int sc_dv_addr; } ;


 struct atmegadci_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct atmegadci_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct atmegadci_softc*,int ,int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (struct atmegadci_softc*,int) ;

__attribute__((used)) static uint8_t
FUNC_5(struct atmegadci_td *VAR_7)
{
 struct atmegadci_softc *VAR_8;
 uint8_t VAR_9;


 VAR_8 = FUNC_0(VAR_7->pc);


 FUNC_2(VAR_8, VAR_5, VAR_7->ep_no);


 VAR_9 = FUNC_1(VAR_8, VAR_3);

 FUNC_3(5, "temp=0x%02x\n", VAR_9);

 if (VAR_9 & VAR_4) {
  FUNC_3(5, "faking complete\n");

  return (0);
 }




 VAR_9 = FUNC_1(VAR_8, VAR_6);
 if (VAR_9 & 3) {

  goto not_complete;
 }
 if (VAR_8->sc_dv_addr != 0xFF) {

  FUNC_4(VAR_8, VAR_8->sc_dv_addr);
 }
 return (0);

not_complete:

 FUNC_2(VAR_8, VAR_0,
     VAR_1 | VAR_2);
 return (1);
}
