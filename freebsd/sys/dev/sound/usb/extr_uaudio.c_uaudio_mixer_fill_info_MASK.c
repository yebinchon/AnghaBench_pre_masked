
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct usb_device {int dummy; } ;
struct usb_descriptor {scalar_t__ bLength; scalar_t__ bDescriptorSubtype; } ;
struct usb_config_descriptor {int dummy; } ;
struct usb_audio_unit {size_t bUnitId; } ;
struct usb_audio_control_descriptor {int bLength; scalar_t__ bDescriptorType; scalar_t__ bDescriptorSubtype; int bcdADC; int wTotalLength; } ;
struct TYPE_6__ {struct usb_descriptor* desc; } ;
struct TYPE_7__ {int id_max; } ;
struct uaudio_terminal_node {TYPE_1__ u; struct uaudio_terminal_node* root; TYPE_2__ usr; } ;
struct TYPE_8__ {int is_input; scalar_t__ recurse_level; } ;
struct uaudio_softc {int sc_audio_rev; TYPE_5__ sc_mixer_clocks; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,char*,int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct uaudio_terminal_node*,int ) ;
 struct uaudio_terminal_node* FUNC_4 (int,int ,int) ;
 int FUNC_5 (struct uaudio_softc*,struct uaudio_terminal_node*,int) ;
 int FUNC_6 (struct uaudio_softc*,struct uaudio_terminal_node*,int) ;
 int FUNC_7 (struct uaudio_softc*,struct uaudio_terminal_node*,int) ;
 int FUNC_8 (struct uaudio_terminal_node*,int*,int,TYPE_5__*) ;
 int FUNC_9 (struct uaudio_terminal_node*,int*,int,TYPE_2__*) ;
 struct usb_audio_unit* FUNC_10 (struct usb_descriptor const*,int ) ;
 int FUNC_11 (struct uaudio_softc*,struct uaudio_terminal_node*,int) ;
 int FUNC_12 (struct uaudio_softc*,struct uaudio_terminal_node*,int) ;
 int FUNC_13 (struct uaudio_softc*,struct uaudio_terminal_node*,int) ;
 int FUNC_14 (struct uaudio_softc*,struct uaudio_terminal_node*,int) ;
 int FUNC_15 (struct uaudio_softc*,struct uaudio_terminal_node*,int) ;
 int FUNC_16 (struct uaudio_terminal_node*,int*,int,TYPE_2__*) ;
 int FUNC_17 (struct uaudio_terminal_node*,int,int,TYPE_2__*) ;
 struct usb_audio_unit* FUNC_18 (struct usb_descriptor const*,int ) ;
 void* FUNC_19 (struct usb_config_descriptor*,void*) ;
 struct usb_config_descriptor* FUNC_20 (struct usb_device*) ;

__attribute__((used)) static void
FUNC_21(struct uaudio_softc *VAR_6,
    struct usb_device *VAR_7, void *VAR_8)
{
 const struct usb_audio_control_descriptor *VAR_9;
 struct usb_config_descriptor *VAR_10 = FUNC_20(VAR_7);
 const struct usb_descriptor *VAR_11;
 const struct usb_audio_unit *VAR_12;
 struct uaudio_terminal_node *VAR_13 = ((void*)0);
 uint16_t VAR_14;
 uint8_t VAR_15 = 0;
 uint8_t VAR_16;

 VAR_8 = FUNC_19(VAR_10, VAR_8);

 if (VAR_8 == ((void*)0)) {
  FUNC_0("no Audio Control header\n");
  goto done;
 }
 VAR_9 = VAR_8;

 if ((VAR_9->bLength < sizeof(*VAR_9)) ||
     (VAR_9->bDescriptorType != VAR_5) ||
     (VAR_9->bDescriptorSubtype != 135)) {
  FUNC_0("invalid Audio Control header\n");
  goto done;
 }

 VAR_14 = FUNC_2(VAR_9->wTotalLength) - VAR_9->bLength;


 VAR_6->sc_audio_rev = FUNC_2(VAR_9->bcdADC);

 FUNC_1(3, "found AC header, vers=%03x, len=%d\n",
     VAR_6->sc_audio_rev, VAR_14);

 VAR_13 = FUNC_4(sizeof(struct uaudio_terminal_node) * 256, VAR_0,
     VAR_1 | VAR_2);

 if (VAR_13 == ((void*)0)) {
  FUNC_0("no memory!\n");
  goto done;
 }
 while ((VAR_8 = FUNC_19(VAR_10, VAR_8))) {

  VAR_11 = VAR_8;

  if (VAR_11->bLength > VAR_14) {
   break;
  } else {
   VAR_14 -= VAR_11->bLength;
  }

  if (VAR_6->sc_audio_rev >= VAR_4)
   VAR_12 = ((void*)0);
  else if (VAR_6->sc_audio_rev >= VAR_3)
   VAR_12 = FUNC_10(VAR_11, 0);
  else
   VAR_12 = FUNC_18(VAR_11, 0);

  if (VAR_12) {
   VAR_13[VAR_12->bUnitId].u.desc = (const void *)VAR_12;
   if (VAR_12->bUnitId > VAR_15)
    VAR_15 = VAR_12->bUnitId;
  }
 }

 FUNC_0("Maximum ID=%d\n", VAR_15);





 VAR_16 = VAR_15;
 do {
  if (VAR_6->sc_audio_rev >= VAR_4) {

  } else if (VAR_6->sc_audio_rev >= VAR_3) {
   FUNC_9(VAR_13,
       &VAR_16, 1, &((VAR_13 + VAR_16)->usr));

   VAR_6->sc_mixer_clocks.is_input = 255;
   VAR_6->sc_mixer_clocks.recurse_level = 0;

   FUNC_8(VAR_13,
       &VAR_16, 1, &VAR_6->sc_mixer_clocks);
  } else {
   FUNC_16(VAR_13,
       &VAR_16, 1, &((VAR_13 + VAR_16)->usr));
  }
 } while (VAR_16--);





 VAR_16 = VAR_15;
 do {
  FUNC_17(VAR_13,
      VAR_16, VAR_15, &((VAR_13 + VAR_16)->usr));
 } while (VAR_16--);



 VAR_16 = VAR_15;
 do {
  (VAR_13 + VAR_16)->usr.id_max = VAR_15;
  (VAR_13 + VAR_16)->root = VAR_13;
 } while (VAR_16--);





 VAR_16 = VAR_15;
 do {
  VAR_11 = VAR_13[VAR_16].u.desc;

  if (VAR_11 == ((void*)0))
   continue;

  FUNC_1(11, "id=%d subtype=%d\n",
      VAR_16, VAR_11->bDescriptorSubtype);

  if (VAR_6->sc_audio_rev >= VAR_4) {
   continue;
  } else if (VAR_6->sc_audio_rev >= VAR_3) {

   switch (VAR_11->bDescriptorSubtype) {
   case 135:
    FUNC_0("unexpected AC header\n");
    break;

   case 134:
   case 132:
   case 130:
   case 137:
   case 139:
   case 140:
   case 141:
   case 142:
   case 129:
    break;

   case 133:
    FUNC_6(VAR_6, VAR_13, VAR_16);
    break;

   case 128:
    FUNC_7(VAR_6, VAR_13, VAR_16);
    break;

   case 136:
    FUNC_5(VAR_6, VAR_13, VAR_16);
    break;

   default:
    FUNC_0("bad AC desc subtype=0x%02x\n",
        VAR_11->bDescriptorSubtype);
    break;
   }
   continue;
  }

  switch (VAR_11->bDescriptorSubtype) {
  case 135:
   FUNC_0("unexpected AC header\n");
   break;

  case 134:
  case 132:
   break;

  case 133:
   FUNC_13(VAR_6, VAR_13, VAR_16);
   break;

  case 128:
   FUNC_15(VAR_6, VAR_13, VAR_16);
   break;

  case 136:
   FUNC_12(VAR_6, VAR_13, VAR_16);
   break;

  case 131:
   FUNC_14(VAR_6, VAR_13, VAR_16);
   break;

  case 138:
   FUNC_11(VAR_6, VAR_13, VAR_16);
   break;

  default:
   FUNC_0("bad AC desc subtype=0x%02x\n",
       VAR_11->bDescriptorSubtype);
   break;
  }

 } while (VAR_16--);

done:
 FUNC_3(VAR_13, VAR_0);
}
