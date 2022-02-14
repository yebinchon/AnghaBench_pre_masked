
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int rx_chan; } ;
struct atmel_ac97c {TYPE_1__ dma; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 struct atmel_ac97c* FUNC_2 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1)
{
 struct atmel_ac97c *VAR_2 = FUNC_2(VAR_1);
 if (FUNC_3(VAR_0, &VAR_2->flags))
  FUNC_0(VAR_2->dma.rx_chan);
 return FUNC_1(VAR_1);
}
