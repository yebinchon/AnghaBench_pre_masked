
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ ref_count; int (* pcm_release ) (struct snd_pcm_substream*) ;scalar_t__ hw_opened; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* close ) (struct snd_pcm_substream*) ;int (* hw_free ) (struct snd_pcm_substream*) ;} ;


 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_substream*) ;

void FUNC_5(struct snd_pcm_substream *VAR_0)
{
 VAR_0->ref_count--;
 if (VAR_0->ref_count > 0)
  return;

 FUNC_1(VAR_0);
 if (VAR_0->hw_opened) {
  if (VAR_0->ops->hw_free != ((void*)0))
   VAR_0->ops->hw_free(VAR_0);
  VAR_0->ops->close(VAR_0);
  VAR_0->hw_opened = 0;
 }
 if (VAR_0->pcm_release) {
  VAR_0->pcm_release(VAR_0);
  VAR_0->pcm_release = ((void*)0);
 }
 FUNC_0(VAR_0);
}
