
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct snd_dummy {TYPE_1__* timer_ops; } ;
struct TYPE_2__ {int (* free ) (struct snd_pcm_substream*) ;} ;


 struct snd_dummy* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_dummy *VAR_1 = FUNC_0(VAR_0);
 VAR_1->timer_ops->free(VAR_0);
 return 0;
}
