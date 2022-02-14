
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_m3 {int reg_lock; } ;
struct m3_dma {int dummy; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {struct m3_dma* private_data; } ;


 int FUNC_0 (TYPE_1__*,unsigned int) ;
 scalar_t__ FUNC_1 (int) ;
 unsigned int FUNC_2 (struct snd_m3*,struct m3_dma*,struct snd_pcm_substream*) ;
 struct snd_m3* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_6(struct snd_pcm_substream *VAR_0)
{
 struct snd_m3 *VAR_1 = FUNC_3(VAR_0);
 unsigned int VAR_2;
 struct m3_dma *VAR_3 = VAR_0->runtime->private_data;

 if (FUNC_1(!VAR_3))
  return 0;

 FUNC_4(&VAR_1->reg_lock);
 VAR_2 = FUNC_2(VAR_1, VAR_3, VAR_0);
 FUNC_5(&VAR_1->reg_lock);
 return FUNC_0(VAR_0->runtime, VAR_2);
}
