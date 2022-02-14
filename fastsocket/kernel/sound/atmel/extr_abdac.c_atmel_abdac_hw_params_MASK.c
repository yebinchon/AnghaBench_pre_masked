
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {int chan; } ;
struct atmel_abdac {TYPE_1__ dma; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_substream*,int ) ;
 struct atmel_abdac* FUNC_3 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_1,
  struct snd_pcm_hw_params *VAR_2)
{
 struct atmel_abdac *VAR_3 = FUNC_3(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1,
   FUNC_1(VAR_2));
 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_4 == 1)
  if (FUNC_4(VAR_0, &VAR_3->flags))
   FUNC_0(VAR_3->dma.chan);

 return VAR_4;
}
