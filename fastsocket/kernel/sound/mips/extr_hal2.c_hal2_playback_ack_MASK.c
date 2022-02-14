
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int hw_queue_size; } ;
struct hal2_codec {TYPE_1__ pcm_indirect; } ;
struct snd_hal2 {struct hal2_codec dac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_pcm_substream*,TYPE_1__*,int ) ;
 struct snd_hal2* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_2)
{
 struct snd_hal2 *VAR_3 = FUNC_1(VAR_2);
 struct hal2_codec *VAR_4 = &VAR_3->dac;

 VAR_4->pcm_indirect.hw_queue_size = VAR_0 / 2;
 FUNC_0(VAR_2,
        &VAR_4->pcm_indirect,
        VAR_1);
 return 0;
}
