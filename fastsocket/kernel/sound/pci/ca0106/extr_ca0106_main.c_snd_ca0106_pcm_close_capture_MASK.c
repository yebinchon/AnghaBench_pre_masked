
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_ca0106_pcm* private_data; } ;
struct snd_ca0106_pcm {size_t channel_id; } ;
struct snd_ca0106 {TYPE_1__* capture_channels; } ;
struct TYPE_2__ {scalar_t__ use; } ;


 struct snd_ca0106* FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct snd_ca0106 *VAR_1 = FUNC_0(VAR_0);
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
        struct snd_ca0106_pcm *VAR_3 = VAR_2->private_data;
 VAR_1->capture_channels[VAR_3->channel_id].use = 0;

 return 0;
}
