
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_audio_term {int id; int type; int name; void* chconfig; int channels; } ;
struct uac_selector_unit_descriptor {int* baSourceID; int bDescriptorSubtype; } ;
struct uac_processing_unit_descriptor {int* baSourceID; int bDescriptorSubtype; int bNrInPins; } ;
struct uac_mixer_unit_descriptor {int bDescriptorSubtype; } ;
struct uac_input_terminal_descriptor {int iTerminal; int wChannelConfig; int bNrChannels; int wTerminalType; } ;
struct uac_feature_unit_descriptor {int bSourceID; } ;
struct uac_clock_source_descriptor {int bDescriptorSubtype; int iClockSource; } ;
struct uac2_input_terminal_descriptor {int bCSourceID; int iTerminal; int bmChannelConfig; int bNrChannels; int wTerminalType; } ;
struct mixer_build {TYPE_1__* mixer; } ;
struct TYPE_2__ {int protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct mixer_build*,int) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct usb_audio_term*,int ,int) ;
 int FUNC_4 (struct uac_mixer_unit_descriptor*) ;
 int FUNC_5 (struct uac_mixer_unit_descriptor*) ;
 void* FUNC_6 (struct uac_mixer_unit_descriptor*,int ) ;
 int FUNC_7 (struct uac_processing_unit_descriptor*) ;
 int FUNC_8 (struct uac_processing_unit_descriptor*,int ) ;
 void* FUNC_9 (struct uac_processing_unit_descriptor*,int ) ;
 int FUNC_10 (struct uac_selector_unit_descriptor*) ;

__attribute__((used)) static int FUNC_11(struct mixer_build *VAR_2, int VAR_3, struct usb_audio_term *VAR_4)
{
 int VAR_5;
 void *VAR_6;

 FUNC_3(VAR_4, 0, sizeof(*VAR_4));
 while ((VAR_6 = FUNC_0(VAR_2, VAR_3)) != ((void*)0)) {
  unsigned char *VAR_7 = VAR_6;
  VAR_4->id = VAR_3;
  switch (VAR_7[2]) {
  case 130:
   if (VAR_2->mixer->protocol == VAR_1) {
    struct uac_input_terminal_descriptor *VAR_8 = VAR_6;
    VAR_4->type = FUNC_1(VAR_8->wTerminalType);
    VAR_4->channels = VAR_8->bNrChannels;
    VAR_4->chconfig = FUNC_1(VAR_8->wChannelConfig);
    VAR_4->name = VAR_8->iTerminal;
   } else {
    struct uac2_input_terminal_descriptor *VAR_9 = VAR_6;
    VAR_4->type = FUNC_1(VAR_9->wTerminalType);
    VAR_4->channels = VAR_9->bNrChannels;
    VAR_4->chconfig = FUNC_2(VAR_9->bmChannelConfig);
    VAR_4->name = VAR_9->iTerminal;


    VAR_5 = FUNC_11(VAR_2, VAR_9->bCSourceID, VAR_4);
    if (VAR_5 < 0)
     return VAR_5;
   }
   return 0;
  case 131: {

   struct uac_feature_unit_descriptor *VAR_10 = VAR_6;
   VAR_3 = VAR_10->bSourceID;
   break;
  }
  case 129: {
   struct uac_mixer_unit_descriptor *VAR_11 = VAR_6;
   VAR_4->type = VAR_11->bDescriptorSubtype << 16;
   VAR_4->channels = FUNC_4(VAR_11);
   VAR_4->chconfig = FUNC_6(VAR_11, VAR_2->mixer->protocol);
   VAR_4->name = FUNC_5(VAR_11);
   return 0;
  }
  case 128:
  case 133: {
   struct uac_selector_unit_descriptor *VAR_12 = VAR_6;

   if (FUNC_11(VAR_2, VAR_12->baSourceID[0], VAR_4) < 0)
    return -VAR_0;
   VAR_4->type = VAR_12->bDescriptorSubtype << 16;
   VAR_4->id = VAR_3;
   VAR_4->name = FUNC_10(VAR_12);
   return 0;
  }
  case 134:
  case 135: {
   struct uac_processing_unit_descriptor *VAR_13 = VAR_6;
   if (VAR_13->bNrInPins) {
    VAR_3 = VAR_13->baSourceID[0];
    break;
   }
   VAR_4->type = VAR_13->bDescriptorSubtype << 16;
   VAR_4->channels = FUNC_7(VAR_13);
   VAR_4->chconfig = FUNC_9(VAR_13, VAR_2->mixer->protocol);
   VAR_4->name = FUNC_8(VAR_13, VAR_2->mixer->protocol);
   return 0;
  }
  case 132: {
   struct uac_clock_source_descriptor *VAR_14 = VAR_6;
   VAR_4->type = VAR_14->bDescriptorSubtype << 16;
   VAR_4->id = VAR_3;
   VAR_4->name = VAR_14->iClockSource;
   return 0;
  }
  default:
   return -VAR_0;
  }
 }
 return -VAR_0;
}
