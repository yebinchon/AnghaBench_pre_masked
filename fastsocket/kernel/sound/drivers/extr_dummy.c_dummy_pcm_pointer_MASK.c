
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct snd_dummy {TYPE_1__* timer_ops; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {int (* pointer ) (struct snd_pcm_substream*) ;} ;


 struct snd_dummy* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_dummy *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->timer_ops->pointer(VAR_0);
}
