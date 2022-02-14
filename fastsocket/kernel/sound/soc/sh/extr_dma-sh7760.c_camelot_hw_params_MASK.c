
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_2__* dai; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct camelot_pcm {scalar_t__ tx_period; void* tx_period_size; scalar_t__ rx_period; void* rx_period_size; } ;
struct TYPE_4__ {TYPE_1__* cpu_dai; } ;
struct TYPE_3__ {size_t id; } ;


 scalar_t__ VAR_0 ;
 struct camelot_pcm* VAR_1 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 void* FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_substream*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2,
        struct snd_pcm_hw_params *VAR_3)
{
 struct snd_soc_pcm_runtime *VAR_4 = VAR_2->private_data;
 struct camelot_pcm *VAR_5 = &VAR_1[VAR_4->dai->cpu_dai->id];
 int VAR_6 = VAR_2->stream == VAR_0 ? 0:1;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_2,
           FUNC_0(VAR_3));
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_6) {
  VAR_5->rx_period_size = FUNC_1(VAR_3);
  VAR_5->rx_period = 0;
 } else {
  VAR_5->tx_period_size = FUNC_1(VAR_3);
  VAR_5->tx_period = 0;
 }
 return 0;
}
