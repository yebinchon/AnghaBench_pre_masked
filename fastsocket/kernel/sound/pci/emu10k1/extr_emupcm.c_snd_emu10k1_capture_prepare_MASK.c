
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int rate; int dma_addr; struct snd_emu10k1_pcm* private_data; } ;
struct snd_emu10k1_pcm {int type; scalar_t__ capture_bufsize; int capture_bs_val; int capture_cr_val; int capture_ba_reg; int capture_bs_reg; } ;
struct snd_emu10k1 {scalar_t__ audigy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 scalar_t__* VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct snd_emu10k1*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct snd_pcm_substream*) ;
 struct snd_emu10k1* FUNC_5 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_9)
{
 struct snd_emu10k1 *VAR_10 = FUNC_5(VAR_9);
 struct snd_pcm_runtime *VAR_11 = VAR_9->runtime;
 struct snd_emu10k1_pcm *VAR_12 = VAR_11->private_data;
 int VAR_13;


 FUNC_3(VAR_10, VAR_12->capture_bs_reg, 0, 0);
 switch (VAR_12->type) {
 case 129:
  FUNC_3(VAR_10, VAR_0, 0, 0);
  break;
 case 128:
  if (VAR_10->audigy) {
   FUNC_3(VAR_10, VAR_5, 0, 0);
   FUNC_3(VAR_10, VAR_6, 0, 0);
  } else
   FUNC_3(VAR_10, VAR_7, 0, 0);
  break;
 default:
  break;
 }
 FUNC_3(VAR_10, VAR_12->capture_ba_reg, 0, VAR_11->dma_addr);
 VAR_12->capture_bufsize = FUNC_4(VAR_9);
 VAR_12->capture_bs_val = 0;
 for (VAR_13 = 0; VAR_13 < 31; VAR_13++) {
  if (VAR_8[VAR_13] == VAR_12->capture_bufsize) {
   VAR_12->capture_bs_val = VAR_13 + 1;
   break;
  }
 }
 if (VAR_12->capture_bs_val == 0) {
  FUNC_0();
  VAR_12->capture_bs_val++;
 }
 if (VAR_12->type == 129) {
  VAR_12->capture_cr_val = VAR_10->audigy ? VAR_3 : VAR_1;
  if (VAR_11->channels > 1)
   VAR_12->capture_cr_val |= VAR_10->audigy ? VAR_4 : VAR_2;
  VAR_12->capture_cr_val |= VAR_10->audigy ?
   FUNC_1(VAR_11->rate) :
   FUNC_2(VAR_11->rate);
 }
 return 0;
}
