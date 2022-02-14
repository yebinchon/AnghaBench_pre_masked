
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usbmix_ctl_map {scalar_t__ id; int ignore_ctl_error; int selector_map; int map; } ;
struct usb_mixer_interface {scalar_t__ protocol; TYPE_2__* hostif; int ignore_ctl_error; TYPE_1__* chip; } ;
struct uac2_output_terminal_descriptor {int bLength; int bCSourceID; int bSourceID; int iTerminal; int wTerminalType; int bTerminalID; } ;
struct uac1_output_terminal_descriptor {int bLength; int bSourceID; int iTerminal; int wTerminalType; int bTerminalID; } ;
struct TYPE_6__ {int name; void* type; int id; } ;
struct mixer_build {TYPE_3__ oterm; int unitbitmap; int selector_map; int map; TYPE_1__* chip; int buflen; int buffer; struct usb_mixer_interface* mixer; } ;
typedef int state ;
struct TYPE_5__ {int extralen; int extra; } ;
struct TYPE_4__ {scalar_t__ usb_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct mixer_build*,int ,int) ;
 int FUNC_2 (struct mixer_build*,int ) ;
 int FUNC_3 (int ,int ) ;
 void* FUNC_4 (int ,int ,void*,int ) ;
 struct usbmix_ctl_map* VAR_2 ;

__attribute__((used)) static int FUNC_5(struct usb_mixer_interface *VAR_3)
{
 struct mixer_build VAR_4;
 int VAR_5;
 const struct usbmix_ctl_map *VAR_6;
 void *VAR_7;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.chip = VAR_3->chip;
 VAR_4.mixer = VAR_3;
 VAR_4.buffer = VAR_3->hostif->extra;
 VAR_4.buflen = VAR_3->hostif->extralen;


 for (VAR_6 = VAR_2; VAR_6->id; VAR_6++) {
  if (VAR_6->id == VAR_4.chip->usb_id) {
   VAR_4.map = VAR_6->map;
   VAR_4.selector_map = VAR_6->selector_map;
   VAR_3->ignore_ctl_error = VAR_6->ignore_ctl_error;
   break;
  }
 }

 VAR_7 = ((void*)0);
 while ((VAR_7 = FUNC_4(VAR_3->hostif->extra, VAR_3->hostif->extralen,
         VAR_7, VAR_0)) != ((void*)0)) {
  if (VAR_3->protocol == VAR_1) {
   struct uac1_output_terminal_descriptor *VAR_8 = VAR_7;

   if (VAR_8->bLength < sizeof(*VAR_8))
    continue;
   FUNC_3(VAR_8->bTerminalID, VAR_4.unitbitmap);
   VAR_4.oterm.id = VAR_8->bTerminalID;
   VAR_4.oterm.type = FUNC_0(VAR_8->wTerminalType);
   VAR_4.oterm.name = VAR_8->iTerminal;
   VAR_5 = FUNC_2(&VAR_4, VAR_8->bSourceID);
   if (VAR_5 < 0)
    return VAR_5;
  } else {
   struct uac2_output_terminal_descriptor *VAR_9 = VAR_7;

   if (VAR_9->bLength < sizeof(*VAR_9))
    continue;
   FUNC_3(VAR_9->bTerminalID, VAR_4.unitbitmap);
   VAR_4.oterm.id = VAR_9->bTerminalID;
   VAR_4.oterm.type = FUNC_0(VAR_9->wTerminalType);
   VAR_4.oterm.name = VAR_9->iTerminal;
   VAR_5 = FUNC_2(&VAR_4, VAR_9->bSourceID);
   if (VAR_5 < 0)
    return VAR_5;


   VAR_5 = FUNC_2(&VAR_4, VAR_9->bCSourceID);
   if (VAR_5 < 0)
    return VAR_5;
  }
 }

 return 0;
}
