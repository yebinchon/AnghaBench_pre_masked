
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct usb_attach_arg {int device; } ;
struct umidi_sub_chan {int fifo; } ;
struct umidi_chan {int single_command; scalar_t__ max_emb_jack; int mtx; int ** xfer; int iface_index; struct umidi_sub_chan* sub; int iface_alt_index; } ;
struct uaudio_softc {int sc_udev; int sc_mixer_iface_index; struct umidi_chan sc_midi_chan; } ;
typedef int device_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 struct usb_attach_arg* FUNC_1 (int ) ;
 struct uaudio_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int ,struct umidi_chan*,int *,int *,int *,int,size_t,int ,int ,int ,int) ;
 scalar_t__ FUNC_8 (struct usb_attach_arg*,int ) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int *,int **,int ,int ,struct umidi_chan*,int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_10)
{
 struct uaudio_softc *VAR_11 = FUNC_2(VAR_10);
 struct usb_attach_arg *VAR_12 = FUNC_1(VAR_10);
 struct umidi_chan *VAR_13 = &VAR_11->sc_midi_chan;
 struct umidi_sub_chan *VAR_14;
 int VAR_15 = FUNC_3(VAR_10);
 int VAR_16;
 uint32_t VAR_17;

 if (FUNC_8(VAR_12, VAR_7))
  VAR_13->single_command = 1;

 if (FUNC_10(VAR_11->sc_udev, VAR_13->iface_index,
     VAR_13->iface_alt_index)) {
  FUNC_0("setting of alternate index failed!\n");
  goto detach;
 }
 FUNC_11(VAR_11->sc_udev, VAR_13->iface_index,
     VAR_11->sc_mixer_iface_index);

 VAR_16 = FUNC_12(VAR_12->device, &VAR_13->iface_index,
     VAR_13->xfer, VAR_8, VAR_4,
     VAR_13, &VAR_13->mtx);
 if (VAR_16) {
  FUNC_0("error=%s\n", FUNC_9(VAR_16));
  goto detach;
 }
 if (VAR_13->xfer[VAR_6] == ((void*)0) &&
     VAR_13->xfer[VAR_5] == ((void*)0)) {
  FUNC_0("no BULK or INTERRUPT MIDI endpoint(s) found\n");
  goto detach;
 }
 if (VAR_13->xfer[VAR_6] != ((void*)0) &&
     FUNC_14(VAR_13->xfer[VAR_6]))
  VAR_13->single_command = 1;

 if (VAR_13->single_command != 0)
  FUNC_4(VAR_10, "Single command MIDI quirk enabled\n");

 if ((VAR_13->max_emb_jack == 0) ||
     (VAR_13->max_emb_jack > VAR_3)) {
  VAR_13->max_emb_jack = VAR_3;
 }

 for (VAR_17 = 0; VAR_17 < VAR_13->max_emb_jack; VAR_17++) {

  VAR_14 = &VAR_13->sub[VAR_17];

  VAR_16 = FUNC_7(VAR_11->sc_udev, VAR_13, &VAR_13->mtx,
      &VAR_9, &VAR_14->fifo, VAR_15, VAR_17,
      VAR_13->iface_index,
      VAR_2, VAR_1, 0644);
  if (VAR_16) {
   goto detach;
  }
 }

 FUNC_5(&VAR_13->mtx);







 FUNC_13(VAR_13->xfer[VAR_5]);

 FUNC_6(&VAR_13->mtx);

 return (0);

detach:
 return (VAR_0);
}
