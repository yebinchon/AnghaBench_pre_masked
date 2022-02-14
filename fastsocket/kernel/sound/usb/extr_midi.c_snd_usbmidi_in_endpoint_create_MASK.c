
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct snd_usb_midi_in_endpoint {TYPE_1__** urbs; struct snd_usb_midi* umidi; } ;
struct snd_usb_midi_endpoint_info {int in_interval; int in_ep; } ;
struct snd_usb_midi_endpoint {struct snd_usb_midi_in_endpoint* in; } ;
struct snd_usb_midi {int dev; } ;
struct TYPE_4__ {int transfer_flags; int transfer_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 struct snd_usb_midi_in_endpoint* FUNC_0 (int,int ) ;
 int FUNC_1 (struct snd_usb_midi_in_endpoint*) ;
 int VAR_4 ;
 TYPE_1__* FUNC_2 (int ,int ) ;
 void* FUNC_3 (int ,int,int ,int *) ;
 int FUNC_4 (TYPE_1__*,int ,unsigned int,void*,int,int ,struct snd_usb_midi_in_endpoint*) ;
 int FUNC_5 (TYPE_1__*,int ,unsigned int,void*,int,int ,struct snd_usb_midi_in_endpoint*,int ) ;
 int FUNC_6 (int ,unsigned int,int ) ;
 unsigned int FUNC_7 (int ,int ) ;
 unsigned int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct snd_usb_midi* VAR_5,
       struct snd_usb_midi_endpoint_info* VAR_6,
       struct snd_usb_midi_endpoint* VAR_7)
{
 struct snd_usb_midi_in_endpoint* VAR_8;
 void* VAR_9;
 unsigned int VAR_10;
 int VAR_11;
 unsigned int VAR_12;

 VAR_7->in = ((void*)0);
 VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;
 VAR_8->umidi = VAR_5;

 for (VAR_12 = 0; VAR_12 < VAR_2; ++VAR_12) {
  VAR_8->urbs[VAR_12] = FUNC_2(0, VAR_1);
  if (!VAR_8->urbs[VAR_12]) {
   FUNC_1(VAR_8);
   return -VAR_0;
  }
 }
 if (VAR_6->in_interval)
  VAR_10 = FUNC_8(VAR_5->dev, VAR_6->in_ep);
 else
  VAR_10 = FUNC_7(VAR_5->dev, VAR_6->in_ep);
 VAR_11 = FUNC_6(VAR_5->dev, VAR_10, 0);
 for (VAR_12 = 0; VAR_12 < VAR_2; ++VAR_12) {
  VAR_9 = FUNC_3(VAR_5->dev, VAR_11, VAR_1,
       &VAR_8->urbs[VAR_12]->transfer_dma);
  if (!VAR_9) {
   FUNC_1(VAR_8);
   return -VAR_0;
  }
  if (VAR_6->in_interval)
   FUNC_5(VAR_8->urbs[VAR_12], VAR_5->dev,
      VAR_10, VAR_9, VAR_11,
      VAR_4,
      VAR_8, VAR_6->in_interval);
  else
   FUNC_4(VAR_8->urbs[VAR_12], VAR_5->dev,
       VAR_10, VAR_9, VAR_11,
       VAR_4, VAR_8);
  VAR_8->urbs[VAR_12]->transfer_flags = VAR_3;
 }

 VAR_7->in = VAR_8;
 return 0;
}
