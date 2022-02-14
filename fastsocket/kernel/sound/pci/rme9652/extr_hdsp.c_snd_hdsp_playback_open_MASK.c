
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_7__ {int rate_min; int rate_max; int channels_max; int channels_min; int rates; } ;
struct snd_pcm_runtime {TYPE_3__ hw; int dma_bytes; int dma_area; } ;
struct hdsp {int system_sample_rate; scalar_t__ io_type; TYPE_2__* spdif_ctl; int card; int creg_spdif; int creg_spdif_stream; int ss_out_channels; int qs_out_channels; scalar_t__ clock_source_locked; int lock; struct snd_pcm_substream* playback_substream; int playback_pid; int playback_buffer; } ;
struct TYPE_8__ {int pid; } ;
struct TYPE_6__ {int id; TYPE_1__* vd; } ;
struct TYPE_5__ {int access; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_4__* VAR_10 ;
 scalar_t__ FUNC_0 (struct hdsp*,int) ;
 scalar_t__ FUNC_1 (struct hdsp*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,int,int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_3__ VAR_16 ;
 int FUNC_3 (struct snd_pcm_runtime*,int ,int ,int *) ;
 int FUNC_4 (struct snd_pcm_runtime*,int ,int,int) ;
 int FUNC_5 (struct snd_pcm_runtime*,int ,int ,int ,struct hdsp*,int ,int) ;
 int FUNC_6 (struct snd_pcm_substream*) ;
 struct hdsp* FUNC_7 (struct snd_pcm_substream*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_17)
{
 struct hdsp *VAR_18 = FUNC_7(VAR_17);
 struct snd_pcm_runtime *VAR_19 = VAR_17->runtime;

 if (FUNC_1 (VAR_18))
  return -VAR_0;

 if (FUNC_0(VAR_18, 1))
  return -VAR_0;

 FUNC_8(&VAR_18->lock);

 FUNC_6(VAR_17);

        VAR_19->hw = VAR_16;
 VAR_19->dma_area = VAR_18->playback_buffer;
 VAR_19->dma_bytes = VAR_2;

 VAR_18->playback_pid = VAR_10->pid;
 VAR_18->playback_substream = VAR_17;

 FUNC_9(&VAR_18->lock);

 FUNC_4(VAR_19, 0, 32, 24);
 FUNC_3(VAR_19, 0, VAR_7, &VAR_12);
 if (VAR_18->clock_source_locked) {
  VAR_19->hw.rate_min = VAR_19->hw.rate_max = VAR_18->system_sample_rate;
 } else if (VAR_18->io_type == VAR_1) {
  VAR_19->hw.rate_max = 192000;
  VAR_19->hw.rates = VAR_9;
  FUNC_3(VAR_19, 0, VAR_8, &VAR_11);
 }
 if (VAR_18->io_type == VAR_1) {
  VAR_19->hw.channels_min = VAR_18->qs_out_channels;
  VAR_19->hw.channels_max = VAR_18->ss_out_channels;
 }

 FUNC_5(VAR_19, 0, VAR_6,
        VAR_13, VAR_18,
        VAR_6, -1);
 FUNC_5(VAR_19, 0, VAR_6,
        VAR_14, VAR_18,
        VAR_8, -1);
 FUNC_5(VAR_19, 0, VAR_8,
        VAR_15, VAR_18,
        VAR_6, -1);

 VAR_18->creg_spdif_stream = VAR_18->creg_spdif;
 VAR_18->spdif_ctl->vd[0].access &= ~VAR_3;
 FUNC_2(VAR_18->card, VAR_5 |
         VAR_4, &VAR_18->spdif_ctl->id);
 return 0;
}
