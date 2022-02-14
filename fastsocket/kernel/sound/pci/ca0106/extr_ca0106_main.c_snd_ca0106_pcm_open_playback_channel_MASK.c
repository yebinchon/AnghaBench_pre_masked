
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; int private_free; struct snd_ca0106_pcm* private_data; } ;
struct snd_ca0106_pcm {int channel_id; struct snd_pcm_substream* substream; struct snd_ca0106* emu; } ;
struct snd_ca0106_channel {int number; int use; struct snd_ca0106_pcm* epcm; struct snd_ca0106* emu; } ;
struct snd_ca0106 {int * spi_dac_reg; TYPE_1__* details; struct snd_ca0106_channel* playback_channels; } ;
struct TYPE_2__ {scalar_t__ spi_dac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct snd_ca0106_pcm* FUNC_0 (int,int ) ;
 int FUNC_1 (struct snd_ca0106*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct snd_ca0106*,int ) ;
 int FUNC_3 (struct snd_pcm_runtime*,int ) ;
 int FUNC_4 (struct snd_pcm_runtime*,int ,int ,int) ;
 int FUNC_5 (struct snd_pcm_substream*) ;
 struct snd_ca0106* FUNC_6 (struct snd_pcm_substream*) ;
 int * VAR_7 ;
 int* VAR_8 ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_9,
      int VAR_10)
{
 struct snd_ca0106 *VAR_11 = FUNC_6(VAR_9);
        struct snd_ca0106_channel *VAR_12 = &(VAR_11->playback_channels[VAR_10]);
 struct snd_ca0106_pcm *VAR_13;
 struct snd_pcm_runtime *VAR_14 = VAR_9->runtime;
 int VAR_15;

 VAR_13 = FUNC_0(sizeof(*VAR_13), VAR_1);

 if (VAR_13 == ((void*)0))
  return -VAR_0;
 VAR_13->emu = VAR_11;
 VAR_13->substream = VAR_9;
        VAR_13->channel_id=VAR_10;

 VAR_14->private_data = VAR_13;
 VAR_14->private_free = VAR_5;

 VAR_14->hw = VAR_6;

        VAR_12->emu = VAR_11;
        VAR_12->number = VAR_10;

 VAR_12->use = 1;





 VAR_12->epcm = VAR_13;
 if ((VAR_15 = FUNC_3(VAR_14, VAR_3)) < 0)
                return VAR_15;
 if ((VAR_15 = FUNC_4(VAR_14, 0, VAR_4, 64)) < 0)
                return VAR_15;
 FUNC_5(VAR_9);

 if (VAR_11->details->spi_dac && VAR_10 != VAR_2) {
  const int VAR_16 = VAR_8[VAR_10];


  VAR_11->spi_dac_reg[VAR_16] &= ~VAR_7[VAR_10];
  VAR_15 = FUNC_2(VAR_11, VAR_11->spi_dac_reg[VAR_16]);
  if (VAR_15 < 0)
   return VAR_15;
 }

 FUNC_1(VAR_11, VAR_10);

 return 0;
}
