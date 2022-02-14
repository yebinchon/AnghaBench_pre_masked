
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


struct TYPE_22__ {int bEndpointAddress; int bmAttributes; } ;
typedef TYPE_8__ usb_endpoint_descriptor_audio_t ;
union uaudio_sed {int * v1; void* v2; int * member_0; } ;
union uaudio_asid {TYPE_6__* v1; TYPE_3__* v2; int * member_0; } ;
union uaudio_asf1d {TYPE_11__* v1; TYPE_4__* v2; int * member_0; } ;
typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct usb_midi_streaming_endpoint_descriptor {int bLength; scalar_t__ bDescriptorType; scalar_t__ bDescriptorSubtype; scalar_t__ bNumEmbMIDIJack; } ;
struct usb_interface_descriptor {scalar_t__ bInterfaceNumber; scalar_t__ bInterfaceClass; scalar_t__ bInterfaceSubClass; scalar_t__ bInterfaceProtocol; } ;
struct usb_device {int dummy; } ;
struct usb_descriptor {scalar_t__ bDescriptorType; int bLength; scalar_t__ bDescriptorSubtype; } ;
struct usb_config_descriptor {int dummy; } ;
struct usb_audio_control_descriptor {int bcdADC; } ;
struct TYPE_21__ {int* fmtlist; int minspeed; int maxspeed; } ;
struct uaudio_chan {int num_alt; int cur_alt; int* pcm_format; TYPE_7__ pcm_cap; struct uaudio_chan_alt* usb_alt; scalar_t__ set_alt; } ;
struct TYPE_19__ {int* bit_output; int* bit_input; } ;
struct TYPE_16__ {int valid; scalar_t__ max_emb_jack; scalar_t__ iface_alt_index; scalar_t__ iface_index; } ;
struct TYPE_15__ {int flags; scalar_t__ iface_index; } ;
struct uaudio_softc {scalar_t__ sc_uq_au_vendor_class; scalar_t__ sc_mixer_iface_index; int sc_pcm_bitperfect; scalar_t__ sc_sndstat_valid; int sc_sndstat; struct uaudio_chan sc_play_chan; struct uaudio_chan sc_rec_chan; int sc_mixer_iface_no; TYPE_5__ sc_mixer_clocks; TYPE_2__ sc_midi_chan; int sc_udev; TYPE_1__ sc_hid; } ;
struct uaudio_format {int wFormat; scalar_t__ bPrecision; int freebsd_fmt; int description; } ;
struct uaudio_chan_alt {int sample_rate; int sample_size; int channels; struct uaudio_format const* p_fmt; int usb_cfg; scalar_t__ iface_alt_index; scalar_t__ iface_index; union uaudio_sed p_sed; TYPE_8__* p_ed1; union uaudio_asf1d p_asf1d; } ;
struct TYPE_20__ {int wFormatTag; } ;
struct TYPE_18__ {int bSubslotSize; } ;
struct TYPE_17__ {scalar_t__ bNrChannels; int bmFormats; } ;
struct TYPE_14__ {scalar_t__ bFormatType; int bSamFreqType; scalar_t__ bNrChannels; int bSubFrameSize; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (TYPE_11__*,scalar_t__) ;
 int FUNC_5 (TYPE_11__*) ;
 int FUNC_6 (TYPE_11__*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ VAR_17 ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *,char*,scalar_t__,scalar_t__,char*,scalar_t__,int,int ,int) ;
 struct uaudio_format* VAR_24 ;
 scalar_t__ FUNC_13 (struct usb_device*,int ,scalar_t__,int) ;
 struct uaudio_format* VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_14 (TYPE_8__*) ;
 int FUNC_15 (TYPE_8__*,int,int) ;
 struct usb_descriptor* FUNC_16 (struct usb_config_descriptor*,struct usb_descriptor*) ;
 struct usb_config_descriptor* FUNC_17 (struct usb_device*) ;
 int * FUNC_18 (struct usb_device*,scalar_t__) ;
 scalar_t__ FUNC_19 (struct usb_device*) ;
 int FUNC_20 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_21(struct uaudio_softc *VAR_28, struct usb_device *VAR_29,
    uint32_t VAR_30, uint8_t VAR_31, uint8_t VAR_32)
{
 struct usb_descriptor *VAR_33 = ((void*)0);
 union uaudio_asid VAR_34 = { ((void*)0) };
 union uaudio_asf1d VAR_35 = { ((void*)0) };
 union uaudio_sed VAR_36 = { ((void*)0) };
 struct usb_midi_streaming_endpoint_descriptor *VAR_37 = ((void*)0);
 usb_endpoint_descriptor_audio_t *VAR_38 = ((void*)0);
 const struct usb_audio_control_descriptor *VAR_39 = ((void*)0);
 struct usb_config_descriptor *VAR_40 = FUNC_17(VAR_29);
 struct usb_interface_descriptor *VAR_41;
 const struct uaudio_format *VAR_42 = ((void*)0);
 struct uaudio_chan *VAR_43;
 struct uaudio_chan_alt *VAR_44;
 uint32_t VAR_45;
 uint16_t VAR_46 = 0xFFFF;
 uint16_t VAR_47 = 0xFFFF;
 uint16_t VAR_48 = 0;
 uint16_t VAR_49 = 0;
 uint16_t VAR_50;
 uint8_t VAR_51;
 uint8_t VAR_52;
 uint8_t VAR_53;
 uint8_t VAR_54 = 0;
 uint8_t VAR_55 = 0;
 uint8_t VAR_56;

 while ((VAR_33 = FUNC_16(VAR_40, VAR_33))) {

  if ((VAR_33->bDescriptorType == VAR_13) &&
      (VAR_33->bLength >= sizeof(*VAR_41))) {

   VAR_41 = (void *)VAR_33;

   if (VAR_41->bInterfaceNumber != VAR_47) {
    VAR_47 = VAR_41->bInterfaceNumber;
    VAR_46++;
    VAR_48 = 0;

   } else {
    VAR_48++;
   }

   if ((!(VAR_28->sc_hid.flags & VAR_5)) &&
       (VAR_41->bInterfaceClass == VAR_19) &&
       (VAR_41->bInterfaceSubClass == 0) &&
       (VAR_41->bInterfaceProtocol == 0) &&
       (VAR_48 == 0) &&
       FUNC_18(VAR_29, VAR_46) != ((void*)0)) {
    FUNC_0("Found HID interface at %d\n",
        VAR_46);
    VAR_28->sc_hid.flags |= VAR_5;
    VAR_28->sc_hid.iface_index = VAR_46;
   }

   VAR_56 =
       ((VAR_41->bInterfaceClass == VAR_18) ||
       ((VAR_41->bInterfaceClass == VAR_20) &&
       (VAR_28->sc_uq_au_vendor_class != 0)));

   if ((VAR_56 != 0) &&
       (VAR_41->bInterfaceSubClass == VAR_21)) {
    VAR_54 = 1;
   } else {
    VAR_54 = 0;
   }

   if ((VAR_56 != 0) &&
       (VAR_41->bInterfaceSubClass == VAR_22)) {




    VAR_55 = 1;

    if ((VAR_28->sc_midi_chan.valid == 0) &&
        (FUNC_18(VAR_29, VAR_46) != ((void*)0))) {
     VAR_28->sc_midi_chan.iface_index = VAR_46;
     VAR_28->sc_midi_chan.iface_alt_index = VAR_48;
     VAR_28->sc_midi_chan.valid = 1;
    }
   } else {
    VAR_55 = 0;
   }
   VAR_34.v1 = ((void*)0);
   VAR_35.v1 = ((void*)0);
   VAR_38 = ((void*)0);
   VAR_36.v1 = ((void*)0);







   if (VAR_48 == 0 && VAR_46 != VAR_28->sc_mixer_iface_index &&
       (VAR_41->bInterfaceClass == VAR_18 || VAR_54 != 0 ||
       VAR_55 != 0)) {
    FUNC_20(VAR_28->sc_udev, VAR_46,
        VAR_28->sc_mixer_iface_index);
   }
  }

  if (VAR_54 == 0) {
   if (VAR_55 == 0) {
    if ((VAR_39 == ((void*)0)) &&
        (VAR_33->bDescriptorType == VAR_11) &&
        (VAR_33->bDescriptorSubtype == VAR_9) &&
        (VAR_33->bLength >= sizeof(*VAR_39))) {
     VAR_39 = (void *)VAR_33;
     VAR_49 = FUNC_10(VAR_39->bcdADC);
    }
   } else {
    VAR_37 = (void *)VAR_33;


    if (VAR_37->bLength >= sizeof(*VAR_37) &&
        VAR_37->bDescriptorType == VAR_10 &&
        VAR_37->bDescriptorSubtype == VAR_4 &&
        VAR_37->bNumEmbMIDIJack > VAR_28->sc_midi_chan.max_emb_jack) {
     VAR_28->sc_midi_chan.max_emb_jack = VAR_37->bNumEmbMIDIJack;
    }
   }




   continue;
  }

  if ((VAR_39 != ((void*)0) || VAR_28->sc_uq_au_vendor_class != 0) &&
      (VAR_33->bDescriptorType == VAR_11) &&
      (VAR_33->bDescriptorSubtype == VAR_0) &&
      (VAR_34.v1 == ((void*)0))) {
   if (VAR_49 >= VAR_8) {

   } else if (VAR_49 >= VAR_7) {
    if (VAR_33->bLength >= sizeof(*VAR_34.v2)) {
     VAR_34.v2 = (void *)VAR_33;
    }
   } else {
    if (VAR_33->bLength >= sizeof(*VAR_34.v1)) {
     VAR_34.v1 = (void *)VAR_33;
    }
   }
  }
  if ((VAR_39 != ((void*)0) || VAR_28->sc_uq_au_vendor_class != 0) &&
      (VAR_33->bDescriptorType == VAR_11) &&
      (VAR_33->bDescriptorSubtype == VAR_2) &&
      (VAR_35.v1 == ((void*)0))) {
   if (VAR_49 >= VAR_8) {

   } else if (VAR_49 >= VAR_7) {
    if (VAR_33->bLength >= sizeof(*VAR_35.v2))
     VAR_35.v2 = (void *)VAR_33;
   } else {
    if (VAR_33->bLength >= sizeof(*VAR_35.v1)) {
     VAR_35.v1 = (void *)VAR_33;

     if (VAR_35.v1->bFormatType != VAR_3) {
      FUNC_1(11, "ignored bFormatType = %d\n",
          VAR_35.v1->bFormatType);
      VAR_35.v1 = ((void*)0);
      continue;
     }
     if (VAR_33->bLength < (sizeof(*VAR_35.v1) +
         ((VAR_35.v1->bSamFreqType == 0) ? 6 :
         (VAR_35.v1->bSamFreqType * 3)))) {
      FUNC_1(11, "invalid descriptor, "
          "too short\n");
      VAR_35.v1 = ((void*)0);
      continue;
     }
    }
   }
  }
  if ((VAR_33->bDescriptorType == VAR_12) &&
      (VAR_33->bLength >= VAR_14) &&
      (VAR_38 == ((void*)0))) {
   VAR_38 = (void *)VAR_33;
   if (FUNC_8(VAR_38->bmAttributes) != VAR_17) {
    VAR_38 = ((void*)0);
    continue;
   }
  }
  if ((VAR_39 != ((void*)0) || VAR_28->sc_uq_au_vendor_class != 0) &&
      (VAR_33->bDescriptorType == VAR_10) &&
      (VAR_33->bDescriptorSubtype == VAR_0) &&
      (VAR_36.v1 == ((void*)0))) {
   if (VAR_49 >= VAR_8) {

   } else if (VAR_49 >= VAR_7) {
    if (VAR_33->bLength >= sizeof(*VAR_36.v2))
     VAR_36.v2 = (void *)VAR_33;
   } else {
    if (VAR_33->bLength >= sizeof(*VAR_36.v1))
     VAR_36.v1 = (void *)VAR_33;
   }
  }
  if (VAR_34.v1 == ((void*)0) || VAR_35.v1 == ((void*)0) ||
      VAR_38 == ((void*)0) || VAR_36.v1 == ((void*)0)) {

   continue;
  }

  VAR_51 = FUNC_7(VAR_38->bEndpointAddress);



  if (VAR_49 >= VAR_8) {
   goto next_ep;
  } else if (VAR_49 >= VAR_7) {

   uint32_t VAR_57;

   VAR_57 = FUNC_9(VAR_34.v2->bmFormats);
   VAR_52 = VAR_34.v2->bNrChannels;
   VAR_53 = VAR_35.v2->bSubslotSize * 8;

   if ((VAR_52 != VAR_31) ||
       (VAR_53 != VAR_32)) {
    FUNC_0("Wrong number of channels\n");
    goto next_ep;
   }

   for (VAR_42 = VAR_25;
       VAR_42->wFormat != 0; VAR_42++) {
    if ((VAR_42->wFormat & VAR_57) &&
        (VAR_42->bPrecision == VAR_53))
     break;
   }

   if (VAR_42->wFormat == 0) {
    FUNC_0("Unsupported audio format\n");
    goto next_ep;
   }

   for (VAR_50 = 0; VAR_50 != 256; VAR_50++) {
    if (VAR_51 == VAR_16) {
     if (!(VAR_28->sc_mixer_clocks.bit_output[VAR_50 / 8] &
         (1 << (VAR_50 % 8)))) {
      continue;
     }
    } else {
     if (!(VAR_28->sc_mixer_clocks.bit_input[VAR_50 / 8] &
         (1 << (VAR_50 % 8)))) {
      continue;
     }
    }

    FUNC_0("Checking clock ID=%d\n", VAR_50);

    if (FUNC_13(VAR_29,
        VAR_28->sc_mixer_iface_no, VAR_50, VAR_30)) {
     FUNC_0("Unsupported sampling "
         "rate, id=%d\n", VAR_50);
     goto next_ep;
    }
   }
  } else {
   uint16_t VAR_58;

   VAR_58 = FUNC_10(VAR_34.v1->wFormatTag);
   VAR_52 = FUNC_3(VAR_35.v1->bNrChannels);
   VAR_53 = VAR_35.v1->bSubFrameSize * 8;

   if (VAR_35.v1->bSamFreqType == 0) {
    FUNC_1(16, "Sample rate: %d-%dHz\n",
        FUNC_6(VAR_35.v1),
        FUNC_5(VAR_35.v1));

    if ((VAR_30 >= FUNC_6(VAR_35.v1)) &&
        (VAR_30 <= FUNC_5(VAR_35.v1)))
     goto found_rate;
   } else {

    for (VAR_50 = 0; VAR_50 < VAR_35.v1->bSamFreqType; VAR_50++) {
     FUNC_1(16, "Sample rate = %dHz\n",
         FUNC_4(VAR_35.v1, VAR_50));

     if (VAR_30 == FUNC_4(VAR_35.v1, VAR_50))
      goto found_rate;
    }
   }
   goto next_ep;

 found_rate:
   for (VAR_42 = VAR_24;
       VAR_42->wFormat != 0; VAR_42++) {
    if ((VAR_42->wFormat == VAR_58) &&
        (VAR_42->bPrecision == VAR_53))
     break;
   }
   if (VAR_42->wFormat == 0) {
    FUNC_0("Unsupported audio format\n");
    goto next_ep;
   }

   if ((VAR_52 != VAR_31) ||
       (VAR_53 != VAR_32)) {
    FUNC_0("Wrong number of channels\n");
    goto next_ep;
   }
  }

  VAR_43 = (VAR_51 == VAR_15) ?
      &VAR_28->sc_rec_chan : &VAR_28->sc_play_chan;

  if (FUNC_18(VAR_29, VAR_46) == ((void*)0)) {
   FUNC_0("Interface is not valid\n");
   goto next_ep;
  }
  if (VAR_43->num_alt == VAR_1) {
   FUNC_0("Too many alternate settings\n");
   goto next_ep;
  }
  VAR_43->set_alt = 0;
  VAR_43->cur_alt = VAR_1;

  VAR_44 = &VAR_43->usb_alt[VAR_43->num_alt++];




  FUNC_0("Sample rate = %dHz, channels = %d, "
      "bits = %d, format = %s\n", VAR_30, VAR_31,
      VAR_32, VAR_42->description);

  VAR_44->sample_rate = VAR_30;
  VAR_44->p_asf1d = VAR_35;
  VAR_44->p_ed1 = VAR_38;
  VAR_44->p_fmt = VAR_42;
  VAR_44->p_sed = VAR_36;
  VAR_44->iface_index = VAR_46;
  VAR_44->iface_alt_index = VAR_48;

  if (VAR_51 == VAR_15)
   VAR_44->usb_cfg = VAR_27;
  else
   VAR_44->usb_cfg = VAR_26;

  VAR_44->sample_size = (FUNC_3(VAR_31) *
      VAR_42->bPrecision) / 8;
  VAR_44->channels = VAR_31;

  if (VAR_51 == VAR_15 &&
      FUNC_19(VAR_29) == VAR_23) {
   FUNC_15(VAR_38,
       VAR_44->sample_size * (VAR_30 / 1000),
       VAR_44->sample_size * (VAR_30 / 4000));
  }



  VAR_45 = VAR_44->p_fmt->freebsd_fmt;


  VAR_45 = FUNC_2(VAR_45, VAR_44->channels, 0);

  switch (VAR_44->channels) {
  uint32_t VAR_59;
  case 1:
  case 2:

   break;
  default:

   VAR_59 = FUNC_11(VAR_45);

   if (VAR_59 != 0)
    VAR_45 = VAR_59;
   break;
  }


  if (VAR_45 == 0) {
   FUNC_0("The selected audio format is not supported\n");
   VAR_43->num_alt--;
   goto next_ep;
  }
  if (VAR_43->num_alt > 1) {

   if (VAR_43->pcm_format[0] != VAR_45) {
    FUNC_0("Multiple formats is not supported\n");
    VAR_43->num_alt--;
    goto next_ep;
   }

   if (VAR_30 == VAR_43->usb_alt[VAR_43->num_alt - 2].sample_rate) {
    FUNC_0("Duplicate sample rate detected\n");
    VAR_43->num_alt--;
    goto next_ep;
   }
  }
  VAR_43->pcm_cap.fmtlist = VAR_43->pcm_format;
  VAR_43->pcm_cap.fmtlist[0] = VAR_45;


  if (VAR_44->channels > VAR_6)
   VAR_28->sc_pcm_bitperfect = 1;

  if (VAR_30 < VAR_43->pcm_cap.minspeed || VAR_43->pcm_cap.minspeed == 0)
   VAR_43->pcm_cap.minspeed = VAR_30;
  if (VAR_30 > VAR_43->pcm_cap.maxspeed || VAR_43->pcm_cap.maxspeed == 0)
   VAR_43->pcm_cap.maxspeed = VAR_30;

  if (VAR_28->sc_sndstat_valid != 0) {
   FUNC_12(&VAR_28->sc_sndstat, "\n\t"
       "mode %d.%d:(%s) %dch, %dbit, %s, %dHz",
       VAR_46, VAR_48,
       (VAR_51 == VAR_15) ? "input" : "output",
        VAR_31, VAR_42->bPrecision,
        VAR_42->description, VAR_30);
  }

 next_ep:
  VAR_36.v1 = ((void*)0);
  VAR_38 = ((void*)0);
 }
}
