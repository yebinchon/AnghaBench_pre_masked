
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct axe_softc {scalar_t__ sc_phyno; struct usb_ether sc_ue; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct axe_softc*,int ,int ,int,int *) ;
 int VAR_10 ;
 int FUNC_1 (struct usb_ether*,int) ;

__attribute__((used)) static void
FUNC_2(struct axe_softc *VAR_11)
{
 struct usb_ether *VAR_12;

 VAR_12 = &VAR_11->sc_ue;
 if (VAR_11->sc_phyno == VAR_0) {

  FUNC_0(VAR_11, VAR_1, 0, VAR_5 |
      VAR_3 | VAR_6,
      ((void*)0));
  FUNC_1(&VAR_11->sc_ue, VAR_10 / 32);
 } else {




  FUNC_0(VAR_11, VAR_1, 0, VAR_5 |
      VAR_4 | VAR_6, ((void*)0));
  FUNC_1(&VAR_11->sc_ue, VAR_10 / 32);
 }

 FUNC_0(VAR_11, VAR_2, 0, VAR_8 |
     VAR_9, ((void*)0));
 FUNC_1(&VAR_11->sc_ue, VAR_10 / 4);
 FUNC_0(VAR_11, VAR_2, 0, VAR_9, ((void*)0));
 FUNC_1(&VAR_11->sc_ue, VAR_10);
 FUNC_0(VAR_11, VAR_2, 0, VAR_7, ((void*)0));
 FUNC_1(&VAR_11->sc_ue, VAR_10 / 32);
 FUNC_0(VAR_11, VAR_2, 0, VAR_9, ((void*)0));
 FUNC_1(&VAR_11->sc_ue, VAR_10 / 32);
}
