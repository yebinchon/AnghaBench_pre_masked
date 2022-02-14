
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct usb_descriptor {int bDescriptorSubtype; } ;
struct usb_audio_cluster {int iChannelNames; int * wChannelConfig; int bNrChannels; } ;
struct TYPE_16__ {TYPE_7__* eu_v1; TYPE_6__* pu_v1; TYPE_5__* fu_v1; TYPE_4__* su_v1; TYPE_3__* mu_v1; TYPE_2__* ot_v1; TYPE_1__* it_v1; struct usb_descriptor* desc; } ;
struct uaudio_terminal_node {TYPE_8__ u; } ;
typedef int r ;
struct TYPE_15__ {size_t bNrInPins; int * baSourceId; } ;
struct TYPE_14__ {size_t bNrInPins; int * baSourceId; } ;
struct TYPE_13__ {scalar_t__ bSourceId; } ;
struct TYPE_12__ {scalar_t__* baSourceId; int bNrInPins; } ;
struct TYPE_11__ {size_t bNrInPins; int * baSourceId; } ;
struct TYPE_10__ {scalar_t__ bSourceId; } ;
struct TYPE_9__ {int iChannelNames; int * wChannelConfig; int bNrChannels; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;







 int FUNC_1 (struct usb_audio_cluster*,int ,int) ;

__attribute__((used)) static struct usb_audio_cluster
FUNC_2(uint8_t VAR_1, const struct uaudio_terminal_node *VAR_2)
{
 struct usb_audio_cluster VAR_3;
 const struct usb_descriptor *VAR_4;
 uint8_t VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = VAR_2[VAR_1].u.desc;
  if (VAR_4 == ((void*)0)) {
   goto error;
  }
  switch (VAR_4->bDescriptorSubtype) {
  case 132:
   VAR_3.bNrChannels = VAR_2[VAR_1].u.it_v1->bNrChannels;
   VAR_3.wChannelConfig[0] = VAR_2[VAR_1].u.it_v1->wChannelConfig[0];
   VAR_3.wChannelConfig[1] = VAR_2[VAR_1].u.it_v1->wChannelConfig[1];
   VAR_3.iChannelNames = VAR_2[VAR_1].u.it_v1->iChannelNames;
   goto done;

  case 130:
   VAR_1 = VAR_2[VAR_1].u.ot_v1->bSourceId;
   break;

  case 131:
   VAR_3 = *(const struct usb_audio_cluster *)
       &VAR_2[VAR_1].u.mu_v1->baSourceId[
       VAR_2[VAR_1].u.mu_v1->bNrInPins];
   goto done;

  case 128:
   if (VAR_2[VAR_1].u.su_v1->bNrInPins > 0) {

    VAR_1 = VAR_2[VAR_1].u.su_v1->baSourceId[0];
   }
   break;

  case 133:
   VAR_1 = VAR_2[VAR_1].u.fu_v1->bSourceId;
   break;

  case 129:
   VAR_3 = *((const struct usb_audio_cluster *)
       &VAR_2[VAR_1].u.pu_v1->baSourceId[
       VAR_2[VAR_1].u.pu_v1->bNrInPins]);
   goto done;

  case 134:
   VAR_3 = *((const struct usb_audio_cluster *)
       &VAR_2[VAR_1].u.eu_v1->baSourceId[
       VAR_2[VAR_1].u.eu_v1->bNrInPins]);
   goto done;

  default:
   goto error;
  }
 }
error:
 FUNC_0("bad data\n");
 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
done:
 return (VAR_3);
}
