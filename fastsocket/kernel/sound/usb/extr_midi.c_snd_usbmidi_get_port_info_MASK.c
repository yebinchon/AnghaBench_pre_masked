
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_midi {int dummy; } ;
struct snd_seq_port_info {int midi_voices; int type; } ;
struct snd_rawmidi {struct snd_usb_midi* private_data; } ;
struct port_info {int voices; int seq_flags; } ;


 struct port_info* FUNC_0 (struct snd_usb_midi*,int) ;

__attribute__((used)) static void FUNC_1(struct snd_rawmidi *VAR_0, int VAR_1,
          struct snd_seq_port_info *VAR_2)
{
 struct snd_usb_midi *VAR_3 = VAR_0->private_data;
 struct port_info *VAR_4;


 VAR_4 = FUNC_0(VAR_3, VAR_1);
 if (VAR_4) {
  VAR_2->type = VAR_4->seq_flags;
  VAR_2->midi_voices = VAR_4->voices;
 }
}
