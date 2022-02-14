
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_sw_params {scalar_t__ tstamp_mode; scalar_t__ avail_min; scalar_t__ silence_size; scalar_t__ silence_threshold; scalar_t__ boundary; int stop_threshold; int start_threshold; int period_step; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ boundary; scalar_t__ buffer_size; scalar_t__ tstamp_mode; scalar_t__ silence_threshold; scalar_t__ silence_size; int stop_threshold; int start_threshold; TYPE_2__* control; int period_step; TYPE_1__* status; } ;
struct TYPE_4__ {scalar_t__ avail_min; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct snd_pcm_substream*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct snd_pcm_substream*,int ) ;
 scalar_t__ FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (struct snd_pcm_substream*,struct snd_pcm_runtime*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_7,
        struct snd_pcm_sw_params *VAR_8)
{
 struct snd_pcm_runtime *VAR_9;
 int VAR_10;

 if (FUNC_0(VAR_7))
  return -VAR_2;
 VAR_9 = VAR_7->runtime;
 FUNC_3(VAR_7);
 if (VAR_9->status->state == VAR_3) {
  FUNC_4(VAR_7);
  return -VAR_0;
 }
 FUNC_4(VAR_7);

 if (VAR_8->tstamp_mode > VAR_5)
  return -VAR_1;
 if (VAR_8->avail_min == 0)
  return -VAR_1;
 if (VAR_8->silence_size >= VAR_9->boundary) {
  if (VAR_8->silence_threshold != 0)
   return -VAR_1;
 } else {
  if (VAR_8->silence_size > VAR_8->silence_threshold)
   return -VAR_1;
  if (VAR_8->silence_threshold > VAR_9->buffer_size)
   return -VAR_1;
 }
 VAR_10 = 0;
 FUNC_3(VAR_7);
 VAR_9->tstamp_mode = VAR_8->tstamp_mode;
 VAR_9->period_step = VAR_8->period_step;
 VAR_9->control->avail_min = VAR_8->avail_min;
 VAR_9->start_threshold = VAR_8->start_threshold;
 VAR_9->stop_threshold = VAR_8->stop_threshold;
 VAR_9->silence_threshold = VAR_8->silence_threshold;
 VAR_9->silence_size = VAR_8->silence_size;
        VAR_8->boundary = VAR_9->boundary;
 if (FUNC_2(VAR_7)) {
  if (VAR_7->stream == VAR_4 &&
      VAR_9->silence_size > 0)
   FUNC_1(VAR_7, VAR_6);
  VAR_10 = FUNC_5(VAR_7, VAR_9);
 }
 FUNC_4(VAR_7);
 return VAR_10;
}
