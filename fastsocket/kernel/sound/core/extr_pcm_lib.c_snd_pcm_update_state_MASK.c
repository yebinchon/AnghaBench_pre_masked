
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_runtime2 {scalar_t__ twake; } ;
struct snd_pcm_runtime {scalar_t__ avail_max; scalar_t__ buffer_size; scalar_t__ stop_threshold; int sleep; TYPE_2__* control; int tsleep; TYPE_1__* status; } ;
typedef scalar_t__ snd_pcm_uframes_t ;
struct TYPE_4__ {scalar_t__ avail_min; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct snd_pcm_runtime*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_2 (struct snd_pcm_runtime*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct snd_pcm_substream*) ;

int FUNC_5(struct snd_pcm_substream *VAR_3,
    struct snd_pcm_runtime *VAR_4)
{
 snd_pcm_uframes_t VAR_5;

 if (VAR_3->stream == VAR_2)
  VAR_5 = FUNC_2(VAR_4);
 else
  VAR_5 = FUNC_0(VAR_4);
 if (VAR_5 > VAR_4->avail_max)
  VAR_4->avail_max = VAR_5;
 if (VAR_4->status->state == VAR_1) {
  if (VAR_5 >= VAR_4->buffer_size) {
   FUNC_1(VAR_3);
   return -VAR_0;
  }
 } else {
  if (VAR_5 >= VAR_4->stop_threshold) {
   FUNC_4(VAR_3);
   return -VAR_0;
  }
 }
 if (((struct snd_pcm_runtime2 *)VAR_4)->twake) {
  if (VAR_5 >= ((struct snd_pcm_runtime2 *)VAR_4)->twake)
   FUNC_3(&VAR_4->tsleep);
 } else if (VAR_5 >= VAR_4->control->avail_min)
  FUNC_3(&VAR_4->sleep);
 return 0;
}
