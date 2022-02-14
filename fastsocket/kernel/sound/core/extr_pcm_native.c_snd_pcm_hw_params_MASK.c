
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int oss; } ;
struct snd_pcm_substream2 {TYPE_2__ oss; } ;
struct snd_pcm_substream {TYPE_4__* ops; int latency_id; int mmap_count; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned int channels; int buffer_size; unsigned int sample_bits; unsigned int frame_bits; unsigned int byte_align; int min_align; int period_step; int start_threshold; int stop_threshold; int boundary; scalar_t__ silence_size; scalar_t__ silence_threshold; int period_size; TYPE_3__* control; int tstamp_mode; int format; int rate_den; int rate_num; int info; int periods; int rate; int subformat; int access; TYPE_1__* status; } ;
struct snd_pcm_hw_params {unsigned int rmask; int rate_den; int rate_num; int info; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_8__ {int (* hw_params ) (struct snd_pcm_substream*,struct snd_pcm_hw_params*) ;int (* hw_free ) (struct snd_pcm_substream*) ;} ;
struct TYPE_7__ {int avail_min; } ;
struct TYPE_5__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct snd_pcm_substream*) ;
 int VAR_3 ;



 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (struct snd_pcm_hw_params*) ;
 int FUNC_7 (struct snd_pcm_hw_params*) ;
 int FUNC_8 (struct snd_pcm_hw_params*) ;
 int FUNC_9 (struct snd_pcm_hw_params*) ;
 int FUNC_10 (struct snd_pcm_runtime*) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int ) ;
 unsigned int FUNC_13 (int ) ;
 int FUNC_14 (struct snd_pcm_substream*,struct snd_pcm_hw_params*) ;
 int FUNC_15 (struct snd_pcm_substream*,struct snd_pcm_hw_params*) ;
 int FUNC_16 (struct snd_pcm_substream*,int const) ;
 int FUNC_17 (struct snd_pcm_substream*) ;
 int FUNC_18 (struct snd_pcm_substream*) ;
 int FUNC_19 (struct snd_pcm_substream*) ;
 int FUNC_20 (struct snd_pcm_substream*,struct snd_pcm_hw_params*) ;
 int FUNC_21 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_22(struct snd_pcm_substream *VAR_5,
        struct snd_pcm_hw_params *VAR_6)
{
 struct snd_pcm_runtime *VAR_7;
 int VAR_8, VAR_9;
 unsigned int VAR_10;
 snd_pcm_uframes_t VAR_11;

 if (FUNC_0(VAR_5))
  return -VAR_1;
 VAR_7 = VAR_5->runtime;
 FUNC_17(VAR_5);
 switch (VAR_7->status->state) {
 case 130:
 case 128:
 case 129:
  break;
 default:
  FUNC_18(VAR_5);
  return -VAR_0;
 }
 FUNC_18(VAR_5);



  if (FUNC_1(&VAR_5->mmap_count))
   return -VAR_0;

 VAR_6->rmask = ~0U;
 VAR_8 = FUNC_15(VAR_5, VAR_6);
 if (VAR_8 < 0)
  goto _error;

 VAR_8 = FUNC_14(VAR_5, VAR_6);
 if (VAR_8 < 0)
  goto _error;

 if (VAR_5->ops->hw_params != ((void*)0)) {
  VAR_8 = VAR_5->ops->hw_params(VAR_5, VAR_6);
  if (VAR_8 < 0)
   goto _error;
 }

 VAR_7->access = FUNC_2(VAR_6);
 VAR_7->format = FUNC_5(VAR_6);
 VAR_7->subformat = FUNC_9(VAR_6);
 VAR_7->channels = FUNC_4(VAR_6);
 VAR_7->rate = FUNC_8(VAR_6);
 VAR_7->period_size = FUNC_6(VAR_6);
 VAR_7->periods = FUNC_7(VAR_6);
 VAR_7->buffer_size = FUNC_3(VAR_6);
 VAR_7->info = VAR_6->info;
 VAR_7->rate_num = VAR_6->rate_num;
 VAR_7->rate_den = VAR_6->rate_den;

 VAR_10 = FUNC_13(VAR_7->format);
 VAR_7->sample_bits = VAR_10;
 VAR_10 *= VAR_7->channels;
 VAR_7->frame_bits = VAR_10;
 VAR_11 = 1;
 while (VAR_10 % 8 != 0) {
  VAR_10 *= 2;
  VAR_11 *= 2;
 }
 VAR_7->byte_align = VAR_10 / 8;
 VAR_7->min_align = VAR_11;


 VAR_7->tstamp_mode = VAR_4;
 VAR_7->period_step = 1;
 VAR_7->control->avail_min = VAR_7->period_size;
 VAR_7->start_threshold = 1;
 VAR_7->stop_threshold = VAR_7->buffer_size;
 VAR_7->silence_threshold = 0;
 VAR_7->silence_size = 0;
 VAR_7->boundary = VAR_7->buffer_size;
 while (VAR_7->boundary * 2 <= VAR_2 - VAR_7->buffer_size)
  VAR_7->boundary *= 2;

 FUNC_19(VAR_5);
 FUNC_16(VAR_5, 128);

 FUNC_12(VAR_3,
    VAR_5->latency_id);
 if ((VAR_9 = FUNC_10(VAR_7)) >= 0)
  FUNC_11(VAR_3,
     VAR_5->latency_id, VAR_9);
 return 0;
 _error:



 FUNC_16(VAR_5, 130);
 if (VAR_5->ops->hw_free != ((void*)0))
  VAR_5->ops->hw_free(VAR_5);
 return VAR_8;
}
