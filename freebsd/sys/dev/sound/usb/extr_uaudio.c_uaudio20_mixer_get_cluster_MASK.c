
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef scalar_t__ uint8_t ;
struct usb_descriptor {int bDescriptorSubtype; } ;
struct usb_audio20_cluster {int iChannelNames; int * bmChannelConfig; int bNrChannels; } ;
struct TYPE_11__ {TYPE_9__* eu_v2; TYPE_8__* pu_v2; TYPE_7__* fu_v2; TYPE_6__* ef_v2; TYPE_5__* ru_v2; TYPE_4__* su_v2; TYPE_3__* mu_v2; TYPE_2__* ot_v2; TYPE_1__* it_v2; struct usb_descriptor* desc; } ;
struct uaudio_terminal_node {TYPE_10__ u; } ;
typedef int r ;
struct TYPE_20__ {size_t bNrInPins; int * baSourceId; } ;
struct TYPE_19__ {size_t bNrInPins; int * baSourceId; } ;
struct TYPE_18__ {scalar_t__ bSourceId; } ;
struct TYPE_17__ {scalar_t__ bSourceId; } ;
struct TYPE_16__ {scalar_t__ bSourceId; } ;
struct TYPE_15__ {scalar_t__* baSourceId; int bNrInPins; } ;
struct TYPE_14__ {size_t bNrInPins; int * baSourceId; } ;
struct TYPE_13__ {scalar_t__ bSourceId; } ;
struct TYPE_12__ {int iTerminal; int * bmChannelConfig; int bNrChannels; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct usb_audio20_cluster*,int ,int) ;

__attribute__((used)) static struct usb_audio20_cluster
FUNC_2(uint8_t VAR_1, const struct uaudio_terminal_node *VAR_2)
{
 struct usb_audio20_cluster VAR_3;
 const struct usb_descriptor *VAR_4;
 uint8_t VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = VAR_2[VAR_1].u.desc;
  if (VAR_4 == ((void*)0))
   goto error;

  switch (VAR_4->bDescriptorSubtype) {
  case 133:
   VAR_3.bNrChannels = VAR_2[VAR_1].u.it_v2->bNrChannels;
   VAR_3.bmChannelConfig[0] = VAR_2[VAR_1].u.it_v2->bmChannelConfig[0];
   VAR_3.bmChannelConfig[1] = VAR_2[VAR_1].u.it_v2->bmChannelConfig[1];
   VAR_3.bmChannelConfig[2] = VAR_2[VAR_1].u.it_v2->bmChannelConfig[2];
   VAR_3.bmChannelConfig[3] = VAR_2[VAR_1].u.it_v2->bmChannelConfig[3];
   VAR_3.iChannelNames = VAR_2[VAR_1].u.it_v2->iTerminal;
   goto done;

  case 131:
   VAR_1 = VAR_2[VAR_1].u.ot_v2->bSourceId;
   break;

  case 132:
   VAR_3 = *(const struct usb_audio20_cluster *)
       &VAR_2[VAR_1].u.mu_v2->baSourceId[
       VAR_2[VAR_1].u.mu_v2->bNrInPins];
   goto done;

  case 128:
   if (VAR_2[VAR_1].u.su_v2->bNrInPins > 0) {

    VAR_1 = VAR_2[VAR_1].u.su_v2->baSourceId[0];
   }
   break;

  case 129:
   VAR_1 = VAR_2[VAR_1].u.ru_v2->bSourceId;
   break;

  case 136:
   VAR_1 = VAR_2[VAR_1].u.ef_v2->bSourceId;
   break;

  case 134:
   VAR_1 = VAR_2[VAR_1].u.fu_v2->bSourceId;
   break;

  case 130:
   VAR_3 = *((const struct usb_audio20_cluster *)
       &VAR_2[VAR_1].u.pu_v2->baSourceId[
       VAR_2[VAR_1].u.pu_v2->bNrInPins]);
   goto done;

  case 135:
   VAR_3 = *((const struct usb_audio20_cluster *)
       &VAR_2[VAR_1].u.eu_v2->baSourceId[
       VAR_2[VAR_1].u.eu_v2->bNrInPins]);
   goto done;

  default:
   goto error;
  }
 }
error:
 FUNC_0("Bad data!\n");
 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
done:
 return (VAR_3);
}
