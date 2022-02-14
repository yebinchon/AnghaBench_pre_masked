
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct usb_attach_arg {int device; } ;
struct TYPE_2__ {int flags; int xfer; int iface_index; int mute_id; int mute_loc; int volume_down_id; int volume_down_loc; int volume_up_id; int volume_up_loc; } ;
struct uaudio_softc {int * sc_mixer_lock; TYPE_1__ sc_hid; int sc_mixer_iface_index; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (void*,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (void*,int ,int ,int ,int ,int *,int*,int *) ;
 int FUNC_5 (void*,int ,int ,scalar_t__*) ;
 int VAR_10 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int *,void**,int *,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int *,int ,int ,int ,struct uaudio_softc*,int *) ;

__attribute__((used)) static int
FUNC_10(struct uaudio_softc *VAR_11,
    struct usb_attach_arg *VAR_12)
{
 void *VAR_13;
 uint32_t VAR_14;
 uint16_t VAR_15;
 uint8_t VAR_16;
 int VAR_17;

 if (!(VAR_11->sc_hid.flags & VAR_8))
  return (-1);

 if (VAR_11->sc_mixer_lock == ((void*)0))
  return (-1);


 VAR_17 = FUNC_7(VAR_12->device, ((void*)0), &VAR_13,
     &VAR_15, VAR_2, VAR_11->sc_hid.iface_index);

 if (VAR_17) {
  FUNC_0("error reading report description\n");
  return (-1);
 }


 FUNC_5(VAR_13, VAR_15, VAR_9, &VAR_16);

 if (VAR_16 != 0)
  VAR_11->sc_hid.flags |= VAR_3;

 if (FUNC_4(VAR_13, VAR_15,
     FUNC_2(VAR_1, 0xE9 ),
     VAR_9, 0, &VAR_11->sc_hid.volume_up_loc, &VAR_14,
     &VAR_11->sc_hid.volume_up_id)) {
  if (VAR_14 & VAR_0)
   VAR_11->sc_hid.flags |= VAR_6;
  FUNC_1(1, "Found Volume Up key\n");
 }

 if (FUNC_4(VAR_13, VAR_15,
     FUNC_2(VAR_1, 0xEA ),
     VAR_9, 0, &VAR_11->sc_hid.volume_down_loc, &VAR_14,
     &VAR_11->sc_hid.volume_down_id)) {
  if (VAR_14 & VAR_0)
   VAR_11->sc_hid.flags |= VAR_5;
  FUNC_1(1, "Found Volume Down key\n");
 }

 if (FUNC_4(VAR_13, VAR_15,
     FUNC_2(VAR_1, 0xE2 ),
     VAR_9, 0, &VAR_11->sc_hid.mute_loc, &VAR_14,
     &VAR_11->sc_hid.mute_id)) {
  if (VAR_14 & VAR_0)
   VAR_11->sc_hid.flags |= VAR_4;
  FUNC_1(1, "Found Mute key\n");
 }

 FUNC_3(VAR_13, VAR_2);

 if (!(VAR_11->sc_hid.flags & (VAR_6 |
     VAR_5 |
     VAR_4))) {
  FUNC_1(1, "Did not find any volume related keys\n");
  return (-1);
 }


 FUNC_8(VAR_12->device, VAR_11->sc_hid.iface_index,
     VAR_11->sc_mixer_iface_index);


 VAR_17 = FUNC_9(VAR_12->device, &VAR_11->sc_hid.iface_index,
     VAR_11->sc_hid.xfer, VAR_10, VAR_7,
     VAR_11, VAR_11->sc_mixer_lock);
 if (VAR_17) {
  FUNC_0("error=%s\n", FUNC_6(VAR_17));
  return (-1);
 }
 return (0);
}
