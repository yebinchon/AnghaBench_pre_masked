
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int uint16_t ;
struct usb_ether {void** ue_eaddr; } ;
struct axe_softc {int sc_pwrcfg; struct usb_ether sc_ue; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int VAR_5 ;
 int FUNC_1 (struct axe_softc*) ;
 int FUNC_2 (struct axe_softc*,int ,int ,scalar_t__,int*) ;
 int VAR_6 ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct axe_softc *VAR_7)
{
 struct usb_ether *VAR_8;
 uint16_t VAR_9;
 uint8_t *VAR_10;
 int VAR_11;

 VAR_8 = &VAR_7->sc_ue;

 FUNC_0(VAR_4, VAR_6 / 32);




 FUNC_2(VAR_7, VAR_1, 0, VAR_3, &VAR_9);
 VAR_7->sc_pwrcfg = FUNC_3(VAR_9) & 0xFF00;






 VAR_10 = VAR_8->ue_eaddr;
 for (VAR_11 = 0; VAR_11 < VAR_5 / 2; VAR_11++) {
  FUNC_2(VAR_7, VAR_1, 0, VAR_2 + VAR_11,
      &VAR_9);
  VAR_9 = FUNC_3(VAR_9);
  *VAR_10++ = (uint8_t)(VAR_9 & 0xFF);
  *VAR_10++ = (uint8_t)((VAR_9 >> 8) & 0xFF);
 }

 FUNC_1(VAR_7);

 FUNC_2(VAR_7, VAR_0, 0, 0, ((void*)0));
}
