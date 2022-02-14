
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {int tx_chan; } ;
struct atmel_ac97c {int cur_format; int cur_rate; TYPE_1__ dma; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (struct snd_pcm_substream*,int ) ;
 struct atmel_ac97c* FUNC_7 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_2,
  struct snd_pcm_hw_params *VAR_3)
{
 struct atmel_ac97c *VAR_4 = FUNC_7(VAR_2);
 int VAR_5;

 VAR_5 = FUNC_6(VAR_2,
     FUNC_3(VAR_3));
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_5 == 1)
  if (FUNC_8(VAR_0, &VAR_4->flags))
   FUNC_0(VAR_4->dma.tx_chan);


 FUNC_1(&VAR_1);
 VAR_4->cur_rate = FUNC_5(VAR_3);
 VAR_4->cur_format = FUNC_4(VAR_3);
 FUNC_2(&VAR_1);

 return VAR_5;
}
