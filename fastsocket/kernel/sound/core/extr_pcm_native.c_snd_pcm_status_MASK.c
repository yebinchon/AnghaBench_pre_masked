
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_status {scalar_t__ state; scalar_t__ overrange; scalar_t__ avail_max; scalar_t__ delay; scalar_t__ avail; int hw_ptr; int appl_ptr; int tstamp; int trigger_tstamp; int suspended_state; } ;
struct snd_pcm_runtime {scalar_t__ tstamp_mode; scalar_t__ overrange; scalar_t__ avail_max; scalar_t__ delay; TYPE_2__* status; scalar_t__ buffer_size; TYPE_1__* control; int trigger_tstamp; } ;
struct TYPE_4__ {scalar_t__ state; int hw_ptr; int tstamp; int suspended_state; } ;
struct TYPE_3__ {int appl_ptr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct snd_pcm_runtime*) ;
 int FUNC_1 (struct snd_pcm_runtime*,int *) ;
 scalar_t__ FUNC_2 (struct snd_pcm_runtime*) ;
 scalar_t__ FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (struct snd_pcm_substream*) ;

int FUNC_7(struct snd_pcm_substream *VAR_5,
     struct snd_pcm_status *VAR_6)
{
 struct snd_pcm_runtime *VAR_7 = VAR_5->runtime;

 FUNC_4(VAR_5);
 VAR_6->state = VAR_7->status->state;
 VAR_6->suspended_state = VAR_7->status->suspended_state;
 if (VAR_6->state == VAR_1)
  goto _end;
 VAR_6->trigger_tstamp = VAR_7->trigger_tstamp;
 if (FUNC_3(VAR_5)) {
  FUNC_6(VAR_5);
  if (VAR_7->tstamp_mode == VAR_4) {
   VAR_6->tstamp = VAR_7->status->tstamp;
   goto _tstamp_end;
  }
 }
 FUNC_1(VAR_7, &VAR_6->tstamp);
 _tstamp_end:
 VAR_6->appl_ptr = VAR_7->control->appl_ptr;
 VAR_6->hw_ptr = VAR_7->status->hw_ptr;
 if (VAR_5->stream == VAR_3) {
  VAR_6->avail = FUNC_2(VAR_7);
  if (VAR_7->status->state == VAR_2 ||
      VAR_7->status->state == VAR_0) {
   VAR_6->delay = VAR_7->buffer_size - VAR_6->avail;
   VAR_6->delay += VAR_7->delay;
  } else
   VAR_6->delay = 0;
 } else {
  VAR_6->avail = FUNC_0(VAR_7);
  if (VAR_7->status->state == VAR_2)
   VAR_6->delay = VAR_6->avail + VAR_7->delay;
  else
   VAR_6->delay = 0;
 }
 VAR_6->avail_max = VAR_7->avail_max;
 VAR_6->overrange = VAR_7->overrange;
 VAR_7->avail_max = 0;
 VAR_7->overrange = 0;
 _end:
  FUNC_5(VAR_5);
 return 0;
}
