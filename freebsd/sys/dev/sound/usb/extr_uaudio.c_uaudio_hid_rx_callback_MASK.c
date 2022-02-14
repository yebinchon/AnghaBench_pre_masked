
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint8_t ;
struct usb_xfer {int dummy; } ;
struct TYPE_2__ {int flags; int volume_down_loc; int volume_down_id; int volume_up_loc; int volume_up_id; int mute_loc; int mute_id; } ;
struct uaudio_softc {TYPE_1__ sc_hid; struct snd_mixer* sc_mixer_dev; } ;
struct snd_mixer {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (int const*,int,int *) ;
 int FUNC_3 (struct snd_mixer*) ;
 int FUNC_4 (struct snd_mixer*,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct usb_xfer*) ;
 int * FUNC_7 (struct usb_xfer*,int ) ;
 int FUNC_8 (struct usb_xfer*) ;
 int FUNC_9 (struct usb_xfer*,int ,int ) ;
 int FUNC_10 (struct usb_xfer*) ;
 struct uaudio_softc* FUNC_11 (struct usb_xfer*) ;
 int FUNC_12 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_13(struct usb_xfer *VAR_5, usb_error_t VAR_6)
{
 struct uaudio_softc *VAR_7 = FUNC_11(VAR_5);
 const uint8_t *VAR_8 = FUNC_7(VAR_5, 0);
 struct snd_mixer *VAR_9;
 uint8_t VAR_10;
 int VAR_11;

 FUNC_12(VAR_5, &VAR_11, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_1(VAR_5)) {
 case 128:
  FUNC_0("actlen=%d\n", VAR_11);

  if (VAR_11 != 0 &&
      (VAR_7->sc_hid.flags & VAR_0)) {
   VAR_10 = *VAR_8;
   VAR_8++;
   VAR_11--;
  } else {
   VAR_10 = 0;
  }

  VAR_9 = VAR_7->sc_mixer_dev;

  if ((VAR_7->sc_hid.flags & VAR_1) &&
      (VAR_7->sc_hid.mute_id == VAR_10) &&
      FUNC_2(VAR_8, VAR_11,
      &VAR_7->sc_hid.mute_loc)) {

   FUNC_0("Mute toggle\n");

   FUNC_3(VAR_9);
  }

  if ((VAR_7->sc_hid.flags & VAR_3) &&
      (VAR_7->sc_hid.volume_up_id == VAR_10) &&
      FUNC_2(VAR_8, VAR_11,
      &VAR_7->sc_hid.volume_up_loc)) {

   FUNC_0("Volume Up\n");

   FUNC_4(VAR_9, 1, 1);
  }

  if ((VAR_7->sc_hid.flags & VAR_2) &&
      (VAR_7->sc_hid.volume_down_id == VAR_10) &&
      FUNC_2(VAR_8, VAR_11,
      &VAR_7->sc_hid.volume_down_loc)) {

   FUNC_0("Volume Down\n");

   FUNC_4(VAR_9, -1, -1);
  }

 case 129:
tr_setup:

  FUNC_9(VAR_5, 0, FUNC_8(VAR_5));
  FUNC_6(VAR_5);
  break;

 default:

  FUNC_0("error=%s\n", FUNC_5(VAR_6));

  if (VAR_6 != VAR_4) {

   FUNC_10(VAR_5);
   goto tr_setup;
  }
  break;
 }
}
