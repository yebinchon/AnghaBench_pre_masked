
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usbmidi_out_port {int active; TYPE_3__* ep; } ;
struct snd_rawmidi_substream {TYPE_1__* runtime; } ;
struct TYPE_6__ {int tasklet; TYPE_2__* umidi; } ;
struct TYPE_5__ {scalar_t__ disconnected; } ;
struct TYPE_4__ {scalar_t__ private_data; } ;


 int FUNC_0 (struct snd_rawmidi_substream*,int) ;
 int FUNC_1 (struct snd_rawmidi_substream*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct snd_rawmidi_substream *VAR_0, int VAR_1)
{
 struct usbmidi_out_port* VAR_2 = (struct usbmidi_out_port*)VAR_0->runtime->private_data;

 VAR_2->active = VAR_1;
 if (VAR_1) {
  if (VAR_2->ep->umidi->disconnected) {


   while (!FUNC_1(VAR_0))
    FUNC_0(VAR_0, 1);
   return;
  }
  FUNC_2(&VAR_2->ep->tasklet);
 }
}
