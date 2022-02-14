
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct rue_softc {int dummy; } ;
struct ifnet {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rue_softc*,int ,int ) ;
 int FUNC_1 (struct rue_softc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct rue_softc*,int ,int ) ;
 struct ifnet* FUNC_3 (struct usb_ether*) ;
 struct rue_softc* FUNC_4 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_5(struct usb_ether *VAR_4)
{
 struct rue_softc *VAR_5 = FUNC_4(VAR_4);
 struct ifnet *VAR_6 = FUNC_3(VAR_4);

 FUNC_1(VAR_5, VAR_1);


 if (VAR_6->if_flags & VAR_0)
  FUNC_2(VAR_5, VAR_2, VAR_3);
 else
  FUNC_0(VAR_5, VAR_2, VAR_3);
}
