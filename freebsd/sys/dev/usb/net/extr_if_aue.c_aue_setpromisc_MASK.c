
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct ifnet {int if_flags; } ;
struct aue_softc {int dummy; } ;


 int FUNC_0 (struct aue_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct aue_softc*,int ) ;
 int FUNC_2 (struct aue_softc*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct ifnet* FUNC_3 (struct usb_ether*) ;
 struct aue_softc* FUNC_4 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_5(struct usb_ether *VAR_4)
{
 struct aue_softc *VAR_5 = FUNC_4(VAR_4);
 struct ifnet *VAR_6 = FUNC_3(VAR_4);

 FUNC_1(VAR_5, VAR_3);


 if (VAR_6->if_flags & VAR_2)
  FUNC_2(VAR_5, VAR_0, VAR_1);
 else
  FUNC_0(VAR_5, VAR_0, VAR_1);
}
