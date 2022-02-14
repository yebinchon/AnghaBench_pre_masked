
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int usb_error_t ;
typedef union ccb {int dummy; } ccb ;
typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct TYPE_7__ {int (* callback ) (struct umass_softc*,union ccb*,scalar_t__,int) ;union ccb* ccb; scalar_t__ actlen; scalar_t__ data_len; } ;
struct TYPE_6__ {int value; int type; } ;
struct TYPE_5__ {int ascq; int asc; } ;
struct TYPE_8__ {TYPE_2__ common; TYPE_1__ ufi; } ;
struct umass_softc {int sc_proto; TYPE_3__ sc_transfer; void* sc_last_xfer_index; TYPE_4__ sbl; } ;


 int FUNC_0 (struct umass_softc*,int ,char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (struct umass_softc*,union ccb*,scalar_t__,int) ;
 int FUNC_3 (struct umass_softc*,union ccb*,scalar_t__,int) ;
 int FUNC_4 (struct usb_xfer*,int ) ;
 int FUNC_5 (struct usb_page_cache*,int ,TYPE_4__*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_8 (struct usb_xfer*,int ) ;
 int FUNC_9 (struct usb_xfer*) ;
 int FUNC_10 (struct usb_xfer*,int ,int ) ;
 struct umass_softc* FUNC_11 (struct usb_xfer*) ;
 int FUNC_12 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_13(struct usb_xfer *VAR_11, usb_error_t VAR_12)
{
 struct umass_softc *VAR_13 = FUNC_11(VAR_11);
 union ccb *VAR_14 = VAR_13->sc_transfer.ccb;
 struct usb_page_cache *VAR_15;
 uint32_t VAR_16;
 uint8_t VAR_17;
 int VAR_18;

 FUNC_12(VAR_11, &VAR_18, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_1(VAR_11)) {
 case 128:

  if (VAR_18 < (int)sizeof(VAR_13->sbl)) {
   goto tr_setup;
  }
  VAR_15 = FUNC_8(VAR_11, 0);
  FUNC_5(VAR_15, 0, &VAR_13->sbl, sizeof(VAR_13->sbl));

  VAR_16 = (VAR_13->sc_transfer.data_len -
      VAR_13->sc_transfer.actlen);



  if (VAR_13->sc_proto & VAR_9) {







   FUNC_0(VAR_13, VAR_8, "UFI CCI, ASC = 0x%02x, "
       "ASCQ = 0x%02x\n", VAR_13->sbl.ufi.asc,
       VAR_13->sbl.ufi.ascq);

   VAR_17 = (((VAR_13->sbl.ufi.asc == 0) &&
       (VAR_13->sbl.ufi.ascq == 0)) ?
       VAR_6 : VAR_5);

   VAR_13->sc_transfer.ccb = ((void*)0);

   VAR_13->sc_last_xfer_index = VAR_10;

   (VAR_13->sc_transfer.callback)
       (VAR_13, VAR_14, VAR_16, VAR_17);

   break;

  } else {



   FUNC_0(VAR_13, VAR_8, "type=0x%02x, value=0x%02x\n",
       VAR_13->sbl.common.type, VAR_13->sbl.common.value);

   if (VAR_13->sbl.common.type == VAR_0) {

    VAR_17 = (VAR_13->sbl.common.value & VAR_4);

    VAR_17 = ((VAR_17 == VAR_2) ? VAR_6 :
        (VAR_17 == VAR_1) ? VAR_5 :
        (VAR_17 == VAR_3) ? VAR_5 :
        VAR_7);

    VAR_13->sc_transfer.ccb = ((void*)0);

    VAR_13->sc_last_xfer_index = VAR_10;

    (VAR_13->sc_transfer.callback)
        (VAR_13, VAR_14, VAR_16, VAR_17);

    break;
   }
  }



 case 129:
tr_setup:
  FUNC_10(VAR_11, 0, FUNC_9(VAR_11));
  FUNC_7(VAR_11);
  break;

 default:
  FUNC_0(VAR_13, VAR_8, "Failed to read CSW: %s\n",
      FUNC_6(VAR_12));
  FUNC_4(VAR_11, VAR_12);
  break;
 }
}
