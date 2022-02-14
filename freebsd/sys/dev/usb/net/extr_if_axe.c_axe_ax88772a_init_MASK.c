
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct axe_softc {struct usb_ether sc_ue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct axe_softc*) ;
 int FUNC_2 (struct axe_softc*,int ,int ,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct axe_softc *VAR_3)
{
 struct usb_ether *VAR_4;

 VAR_4 = &VAR_3->sc_ue;

 FUNC_0(VAR_1, VAR_2 / 32);
 FUNC_1(VAR_3);

 FUNC_2(VAR_3, VAR_0, 0, 0, ((void*)0));
}
