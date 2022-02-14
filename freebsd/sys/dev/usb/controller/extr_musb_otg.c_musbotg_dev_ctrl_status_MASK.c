
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct musbotg_td {int pc; } ;
struct musbotg_softc {int sc_ep0_cmd; int sc_dv_addr; scalar_t__ sc_ep0_busy; } ;


 int FUNC_0 (int,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct musbotg_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct musbotg_softc*,int ,int) ;
 struct musbotg_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct musbotg_softc*,struct musbotg_td*) ;
 int FUNC_5 (struct musbotg_softc*,int) ;

__attribute__((used)) static uint8_t
FUNC_6(struct musbotg_td *VAR_3)
{
 struct musbotg_softc *VAR_4;
 uint8_t VAR_5;


 VAR_4 = FUNC_3(VAR_3->pc);


 FUNC_2(VAR_4, VAR_1, 0);

 if (VAR_4->sc_ep0_busy) {
  VAR_4->sc_ep0_busy = 0;
  VAR_4->sc_ep0_cmd |= VAR_0;
  FUNC_2(VAR_4, VAR_2, VAR_4->sc_ep0_cmd);
  VAR_4->sc_ep0_cmd = 0;
 }

 VAR_5 = FUNC_1(VAR_4, VAR_2);

 FUNC_0(4, "csr=0x%02x\n", VAR_5);

 if (VAR_5 & VAR_0) {

  return (1);
 }
 if (VAR_4->sc_dv_addr != 0xFF) {

  FUNC_5(VAR_4, VAR_4->sc_dv_addr);
 }

 FUNC_4(VAR_4, VAR_3);
 return (0);
}
