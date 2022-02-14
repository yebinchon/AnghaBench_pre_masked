
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {scalar_t__ status; struct snd_usb_caiaqdev* context; } ;
struct snd_usb_caiaqdev {int midi_out_substream; scalar_t__ midi_out_active; } ;


 int FUNC_0 (struct snd_usb_caiaqdev*,int ) ;

void FUNC_1(struct urb* VAR_0)
{
 struct snd_usb_caiaqdev *VAR_1 = VAR_0->context;

 VAR_1->midi_out_active = 0;
 if (VAR_0->status != 0)
  return;

 if (!VAR_1->midi_out_substream)
  return;

 FUNC_0(VAR_1, VAR_1->midi_out_substream);
}
