
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_indirect {scalar_t__ hw_ready; int hw_queue_size; } ;
struct rme32 {int running; int lock; struct snd_pcm_indirect capture_pcm; struct snd_pcm_indirect playback_pcm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_pcm_substream*,struct snd_pcm_indirect*,int ) ;
 struct rme32* FUNC_1 (struct snd_pcm_substream*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_3)
{
 struct rme32 *VAR_4 = FUNC_1(VAR_3);
 struct snd_pcm_indirect *VAR_5, *VAR_6;

 VAR_5 = &VAR_4->playback_pcm;
 VAR_6 = &VAR_4->capture_pcm;
 FUNC_2(&VAR_4->lock);
 VAR_5->hw_queue_size = VAR_0;
 if (VAR_4->running & (1 << VAR_1))
  VAR_5->hw_queue_size -= VAR_6->hw_ready;
 FUNC_3(&VAR_4->lock);
 FUNC_0(VAR_3, VAR_5,
        VAR_2);
 return 0;
}
