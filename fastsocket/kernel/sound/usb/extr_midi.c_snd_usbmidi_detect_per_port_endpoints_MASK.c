
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_midi_endpoint_info {int out_cables; int in_cables; scalar_t__ in_ep; scalar_t__ out_ep; } ;
struct snd_usb_midi {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_usb_midi*,struct snd_usb_midi_endpoint_info*,int) ;

__attribute__((used)) static int FUNC_1(struct snd_usb_midi* VAR_1,
       struct snd_usb_midi_endpoint_info* VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_0);
 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  if (VAR_2[VAR_4].out_ep)
   VAR_2[VAR_4].out_cables = 0x0001;
  if (VAR_2[VAR_4].in_ep)
   VAR_2[VAR_4].in_cables = 0x0001;
 }
 return VAR_3;
}
