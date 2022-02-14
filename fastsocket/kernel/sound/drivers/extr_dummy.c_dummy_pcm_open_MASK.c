
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; TYPE_1__* pcm; } ;
struct TYPE_7__ {int info; } ;
struct snd_pcm_runtime {TYPE_3__ hw; } ;
struct snd_dummy {TYPE_2__* timer_ops; } ;
struct TYPE_6__ {int (* create ) (struct snd_pcm_substream*) ;int (* free ) (struct snd_pcm_substream*) ;} ;
struct TYPE_5__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct snd_pcm_runtime*) ;
 int FUNC_1 (struct snd_pcm_runtime*) ;
 TYPE_2__ VAR_5 ;
 TYPE_3__ VAR_6 ;
 TYPE_2__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct snd_dummy* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_9)
{
 struct snd_dummy *VAR_10 = FUNC_2(VAR_9);
 struct snd_pcm_runtime *VAR_11 = VAR_9->runtime;
 int VAR_12;

 VAR_10->timer_ops = &VAR_7;





 VAR_12 = VAR_10->timer_ops->create(VAR_9);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_11->hw = VAR_6;
 if (VAR_9->pcm->device & 1) {
  VAR_11->hw.info &= ~VAR_0;
  VAR_11->hw.info |= VAR_3;
 }
 if (VAR_9->pcm->device & 2)
  VAR_11->hw.info &= ~(VAR_1 |
          VAR_2);

 if (VAR_9->stream == VAR_4)
  VAR_12 = FUNC_1(VAR_9->runtime);
 else
  VAR_12 = FUNC_0(VAR_9->runtime);
 if (VAR_12 < 0) {
  VAR_10->timer_ops->free(VAR_9);
  return VAR_12;
 }
 return 0;
}
