
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_device {struct snd_emux* driver_data; int card; } ;
struct snd_emux {int max_voices; int num_ports; int pitch_shift; int midi_ports; int midi_devidx; int hwdep_idx; scalar_t__ linear_panning; int memhdr; struct snd_emu10k1* hw; } ;
struct snd_emu10k1_synth_arg {int seq_ports; int max_voices; int index; struct snd_emu10k1* hwptr; } ;
struct snd_emu10k1 {int voice_lock; int get_synth_voice; struct snd_emux* synth; scalar_t__ audigy; int memhdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_emu10k1_synth_arg* FUNC_0 (struct snd_seq_device*) ;
 int FUNC_1 (struct snd_emux*) ;
 int VAR_2 ;
 int FUNC_2 (struct snd_emux*) ;
 scalar_t__ FUNC_3 (struct snd_emux**) ;
 scalar_t__ FUNC_4 (struct snd_emux*,int ,int ,char*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct snd_seq_device *VAR_3)
{
 struct snd_emux *VAR_4;
 struct snd_emu10k1 *VAR_5;
 struct snd_emu10k1_synth_arg *VAR_6;
 unsigned long VAR_7;

 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 if (VAR_6->seq_ports <= 0)
  return 0;
 if (VAR_6->max_voices < 1)
  VAR_6->max_voices = 1;
 else if (VAR_6->max_voices > 64)
  VAR_6->max_voices = 64;

 if (FUNC_3(&VAR_4) < 0)
  return -VAR_1;

 FUNC_1(VAR_4);
 VAR_5 = VAR_6->hwptr;
 VAR_4->hw = VAR_5;
 VAR_4->max_voices = VAR_6->max_voices;
 VAR_4->num_ports = VAR_6->seq_ports;
 VAR_4->pitch_shift = -501;
 VAR_4->memhdr = VAR_5->memhdr;

 VAR_4->midi_ports = VAR_6->seq_ports < 2 ? VAR_6->seq_ports : 2;

 VAR_4->midi_devidx = VAR_5->audigy ? 2 : 1;
 VAR_4->linear_panning = 0;
 VAR_4->hwdep_idx = 2;

 if (FUNC_4(VAR_4, VAR_3->card, VAR_6->index, "Emu10k1") < 0) {
  FUNC_2(VAR_4);
  return -VAR_1;
 }

 FUNC_5(&VAR_5->voice_lock, VAR_7);
 VAR_5->synth = VAR_4;
 VAR_5->get_synth_voice = VAR_2;
 FUNC_6(&VAR_5->voice_lock, VAR_7);

 VAR_3->driver_data = VAR_4;

 return 0;
}
