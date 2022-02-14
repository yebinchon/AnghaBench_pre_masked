
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct snd_ca_midi {int midi_mode; int open_lock; int enter_uart; int reset; struct snd_rawmidi_substream* substream_output; int dev_id; } ;
struct TYPE_2__ {struct snd_ca_midi* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_ca_midi*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_rawmidi_substream *VAR_3)
{
 struct snd_ca_midi *VAR_4 = VAR_3->rmidi->private_data;
 unsigned long VAR_5;

 if (FUNC_1(!VAR_4->dev_id))
  return -VAR_2;
 FUNC_2(&VAR_4->open_lock, VAR_5);
 VAR_4->midi_mode |= VAR_1;
 VAR_4->substream_output = VAR_3;
 if (!(VAR_4->midi_mode & VAR_0)) {
  FUNC_3(&VAR_4->open_lock, VAR_5);
  FUNC_0(VAR_4, VAR_4->reset, 1);
  FUNC_0(VAR_4, VAR_4->enter_uart, 1);
 } else {
  FUNC_3(&VAR_4->open_lock, VAR_5);
 }
 return 0;
}
