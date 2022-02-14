
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; } ;
struct snd_korg1212 {size_t cardState; int lock; scalar_t__ errorcnt; int channels; int periodsize; int playback_pid; struct snd_pcm_substream* playback_substream; int dma_play; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct snd_korg1212*) ;
 int VAR_5 ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int ,int ) ;
 int FUNC_3 (struct snd_pcm_substream*,int *) ;
 struct snd_korg1212* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int * VAR_6 ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_7)
{
        unsigned long VAR_8;
        struct snd_korg1212 *VAR_9 = FUNC_4(VAR_7);
        struct snd_pcm_runtime *VAR_10 = VAR_7->runtime;

 FUNC_0("K1212_DEBUG: snd_korg1212_playback_open [%s]\n",
      VAR_6[VAR_9->cardState]);

 FUNC_1(VAR_9);

        VAR_10->hw = VAR_5;
 FUNC_3(VAR_7, &VAR_9->dma_play);

        FUNC_5(&VAR_9->lock, VAR_8);

        VAR_9->playback_substream = VAR_7;
 VAR_9->playback_pid = VAR_3->pid;
        VAR_9->periodsize = VAR_1;
 VAR_9->channels = VAR_0;
 VAR_9->errorcnt = 0;

        FUNC_6(&VAR_9->lock, VAR_8);

        FUNC_2(VAR_10, VAR_2, VAR_4, VAR_4);
        return 0;
}
