
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct pcm_substream {int active; int lock; int * instance; } ;
struct TYPE_4__ {int instance; } ;
struct TYPE_3__ {int instance; } ;
struct pcm_runtime {int stream_mutex; int rate; TYPE_2__ capture; TYPE_1__ playback; scalar_t__ panic; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 struct pcm_runtime* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct pcm_substream* FUNC_6 (struct snd_pcm_substream*) ;
 int FUNC_7 (struct pcm_runtime*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_1)
{
 struct pcm_runtime *VAR_2 = FUNC_3(VAR_1);
 struct pcm_substream *VAR_3 = FUNC_6(VAR_1);
 unsigned long VAR_4;

 if (VAR_2->panic)
  return 0;

 FUNC_1(&VAR_2->stream_mutex);
 if (VAR_3) {

  FUNC_4(&VAR_3->lock, VAR_4);
  VAR_3->instance = ((void*)0);
  VAR_3->active = 0;
  FUNC_5(&VAR_3->lock, VAR_4);


  if (!VAR_2->playback.instance && !VAR_2->capture.instance) {
   FUNC_7(VAR_2);
   VAR_2->rate = FUNC_0(VAR_0);
  }
 }
 FUNC_2(&VAR_2->stream_mutex);
 return 0;
}
