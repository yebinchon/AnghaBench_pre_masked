
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct ifnet {int if_drv_flags; } ;
struct cue_softc {int * sc_xfer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cue_softc*,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int* FUNC_1 (struct ifnet*) ;
 int VAR_15 ;
 int FUNC_2 (struct cue_softc*,scalar_t__,int) ;
 int FUNC_3 (struct cue_softc*) ;
 int FUNC_4 (struct usb_ether*) ;
 int FUNC_5 (struct usb_ether*) ;
 int FUNC_6 (struct usb_ether*) ;
 struct ifnet* FUNC_7 (struct usb_ether*) ;
 struct cue_softc* FUNC_8 (struct usb_ether*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct usb_ether *VAR_16)
{
 struct cue_softc *VAR_17 = FUNC_8(VAR_16);
 struct ifnet *VAR_18 = FUNC_7(VAR_16);
 int VAR_19;

 FUNC_0(VAR_17, VAR_15);




 FUNC_6(VAR_16);




 for (VAR_19 = 0; VAR_19 < VAR_13; VAR_19++)
  FUNC_2(VAR_17, VAR_8 - VAR_19, FUNC_1(VAR_18)[VAR_19]);


 FUNC_2(VAR_17, VAR_3, VAR_5 | VAR_4);


 FUNC_4(VAR_16);





 FUNC_2(VAR_17, VAR_9, VAR_10);
 FUNC_2(VAR_17, VAR_11, VAR_12);


 FUNC_2(VAR_17, VAR_0,
     VAR_1 | 0x01);


 FUNC_2(VAR_17, VAR_6, VAR_7);

 FUNC_9(VAR_17->sc_xfer[VAR_2]);

 VAR_18->if_drv_flags |= VAR_14;
 FUNC_5(VAR_16);
}
