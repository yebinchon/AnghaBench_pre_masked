
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usbmidi_out_port {int state; struct snd_rawmidi_substream* substream; } ;
struct snd_usb_midi {int iface; TYPE_3__* endpoints; } ;
struct snd_rawmidi_substream {TYPE_4__* runtime; TYPE_1__* rmidi; } ;
struct TYPE_8__ {struct usbmidi_out_port* private_data; } ;
struct TYPE_7__ {TYPE_2__* out; } ;
struct TYPE_6__ {struct usbmidi_out_port* ports; } ;
struct TYPE_5__ {struct snd_usb_midi* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct snd_rawmidi_substream*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_rawmidi_substream *VAR_4)
{
 struct snd_usb_midi* VAR_5 = VAR_4->rmidi->private_data;
 struct usbmidi_out_port* VAR_6 = ((void*)0);
 int VAR_7, VAR_8;
 int VAR_9;

 for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7)
  if (VAR_5->endpoints[VAR_7].out)
   for (VAR_8 = 0; VAR_8 < 0x10; ++VAR_8)
    if (VAR_5->endpoints[VAR_7].out->ports[VAR_8].substream == VAR_4) {
     VAR_6 = &VAR_5->endpoints[VAR_7].out->ports[VAR_8];
     break;
    }
 if (!VAR_6) {
  FUNC_0();
  return -VAR_1;
 }
 VAR_9 = FUNC_2(VAR_5->iface);
 if (VAR_9 < 0)
  return -VAR_0;
 VAR_4->runtime->private_data = VAR_6;
 VAR_6->state = VAR_3;
 FUNC_1(VAR_4, 1);
 return 0;
}
