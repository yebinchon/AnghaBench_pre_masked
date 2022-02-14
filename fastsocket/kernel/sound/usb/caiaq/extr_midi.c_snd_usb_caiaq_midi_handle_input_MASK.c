
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_caiaqdev {int midi_receive_substream; } ;


 int FUNC_0 (int ,char const*,int) ;

void FUNC_1(struct snd_usb_caiaqdev *VAR_0,
         int VAR_1, const char *VAR_2, int VAR_3)
{
 if (!VAR_0->midi_receive_substream)
  return;

 FUNC_0(VAR_0->midi_receive_substream, VAR_2, VAR_3);
}
