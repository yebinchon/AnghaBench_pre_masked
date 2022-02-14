
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1_midi {int tx_enable; int rx_enable; unsigned int ipr_rx; int midi_mode; unsigned int ipr_tx; int output_lock; scalar_t__ substream_output; int input_lock; scalar_t__ substream_input; int * rmidi; } ;
struct snd_emu10k1 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_emu10k1*,struct snd_emu10k1_midi*) ;
 scalar_t__ FUNC_1 (struct snd_emu10k1*,struct snd_emu10k1_midi*) ;
 scalar_t__ FUNC_2 (struct snd_emu10k1*,struct snd_emu10k1_midi*) ;
 unsigned char FUNC_3 (struct snd_emu10k1*,struct snd_emu10k1_midi*) ;
 int FUNC_4 (struct snd_emu10k1*,struct snd_emu10k1_midi*,unsigned char) ;
 int FUNC_5 (struct snd_emu10k1*,int) ;
 int FUNC_6 (scalar_t__,unsigned char*,int) ;
 int FUNC_7 (scalar_t__,unsigned char*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct snd_emu10k1 *VAR_1, struct snd_emu10k1_midi *VAR_2, unsigned int VAR_3)
{
 unsigned char VAR_4;

 if (VAR_2->rmidi == ((void*)0)) {
  FUNC_5(VAR_1, VAR_2->tx_enable | VAR_2->rx_enable);
  return;
 }

 FUNC_8(&VAR_2->input_lock);
 if ((VAR_3 & VAR_2->ipr_rx) && FUNC_1(VAR_1, VAR_2)) {
  if (!(VAR_2->midi_mode & VAR_0)) {
   FUNC_0(VAR_1, VAR_2);
  } else {
   VAR_4 = FUNC_3(VAR_1, VAR_2);
   if (VAR_2->substream_input)
    FUNC_6(VAR_2->substream_input, &VAR_4, 1);
  }
 }
 FUNC_9(&VAR_2->input_lock);

 FUNC_8(&VAR_2->output_lock);
 if ((VAR_3 & VAR_2->ipr_tx) && FUNC_2(VAR_1, VAR_2)) {
  if (VAR_2->substream_output &&
      FUNC_7(VAR_2->substream_output, &VAR_4, 1) == 1) {
   FUNC_4(VAR_1, VAR_2, VAR_4);
  } else {
   FUNC_5(VAR_1, VAR_2->tx_enable);
  }
 }
 FUNC_9(&VAR_2->output_lock);
}
