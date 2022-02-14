
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_ca0106_pcm* private_data; } ;
struct snd_ca0106_pcm {size_t channel_id; } ;
struct snd_ca0106 {int * spi_dac_reg; TYPE_2__* details; TYPE_1__* playback_channels; } ;
struct TYPE_4__ {scalar_t__ spi_dac; } ;
struct TYPE_3__ {scalar_t__ use; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct snd_ca0106*,size_t) ;
 int FUNC_1 (struct snd_ca0106*,int ) ;
 struct snd_ca0106* FUNC_2 (struct snd_pcm_substream*) ;
 int * VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_3)
{
 struct snd_ca0106 *VAR_4 = FUNC_2(VAR_3);
 struct snd_pcm_runtime *VAR_5 = VAR_3->runtime;
        struct snd_ca0106_pcm *VAR_6 = VAR_5->private_data;
 VAR_4->playback_channels[VAR_6->channel_id].use = 0;

 FUNC_0(VAR_4, VAR_6->channel_id);

 if (VAR_4->details->spi_dac && VAR_6->channel_id != VAR_0) {
  const int VAR_7 = VAR_2[VAR_6->channel_id];


  VAR_4->spi_dac_reg[VAR_7] |= VAR_1[VAR_6->channel_id];
  FUNC_1(VAR_4, VAR_4->spi_dac_reg[VAR_7]);
 }

 return 0;
}
