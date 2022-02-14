
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct ifnet {int dummy; } ;
struct cue_softc {int dummy; } ;


 int FUNC_0 (struct cue_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct cue_softc*,int ) ;
 int FUNC_2 (struct ifnet*,int ,int) ;
 struct ifnet* FUNC_3 (struct usb_ether*) ;
 struct cue_softc* FUNC_4 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_5(struct usb_ether *VAR_7)
{
 struct cue_softc *VAR_8 = FUNC_4(VAR_7);
 struct ifnet *VAR_9 = FUNC_3(VAR_7);

 FUNC_0(VAR_8, VAR_6);

 FUNC_2(VAR_9, VAR_4, FUNC_1(VAR_8, VAR_3));
 FUNC_2(VAR_9, VAR_4, FUNC_1(VAR_8, VAR_2));
 FUNC_2(VAR_9, VAR_4, FUNC_1(VAR_8, VAR_1));

 if (FUNC_1(VAR_8, VAR_0))
  FUNC_2(VAR_9, VAR_5, 1);
}
