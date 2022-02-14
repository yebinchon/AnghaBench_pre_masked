
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct cfumass_softc {int sc_current_stalled; int sc_current_status; TYPE_1__* sc_csw; int sc_current_residue; int sc_current_tag; int * sc_ctl_io; } ;
struct TYPE_2__ {int bCSWStatus; int dCSWDataResidue; int dCSWTag; int dCSWSignature; } ;


 int FUNC_0 (struct cfumass_softc*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int FUNC_2 (struct usb_xfer*) ;


 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct cfumass_softc*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct usb_xfer*) ;
 int FUNC_7 (struct usb_xfer*,int ,int) ;
 int FUNC_8 (struct usb_xfer*) ;
 struct cfumass_softc* FUNC_9 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_10(struct usb_xfer *VAR_3, usb_error_t VAR_4)
{
 struct cfumass_softc *VAR_5;

 VAR_5 = FUNC_9(VAR_3);

 FUNC_1(VAR_5->sc_ctl_io == ((void*)0),
     ("sc_ctl_io is %p, should be NULL", VAR_5->sc_ctl_io));

 switch (FUNC_2(VAR_3)) {
 case 128:
  FUNC_0(VAR_5, "USB_ST_TRANSFERRED");

  FUNC_4(VAR_5, VAR_0);
  break;

 case 129:
tr_setup:
  FUNC_0(VAR_5, "USB_ST_SETUP");

  if (VAR_5->sc_current_residue > 0 && !VAR_5->sc_current_stalled) {
   FUNC_0(VAR_5, "non-zero residue, stalling");
   FUNC_8(VAR_3);
   VAR_5->sc_current_stalled = 1;
  }

  FUNC_3(VAR_5->sc_csw->dCSWSignature, VAR_1);
  FUNC_3(VAR_5->sc_csw->dCSWTag, VAR_5->sc_current_tag);
  FUNC_3(VAR_5->sc_csw->dCSWDataResidue, VAR_5->sc_current_residue);
  VAR_5->sc_csw->bCSWStatus = VAR_5->sc_current_status;

  FUNC_7(VAR_3, 0, sizeof(*VAR_5->sc_csw));
  FUNC_6(VAR_3);
  break;

 default:
  if (VAR_4 == VAR_2) {
   FUNC_0(VAR_5, "USB_ERR_CANCELLED");
   break;
  }

  FUNC_0(VAR_5, "USB_ST_ERROR: %s",
      FUNC_5(VAR_4));

  goto tr_setup;
 }
}
