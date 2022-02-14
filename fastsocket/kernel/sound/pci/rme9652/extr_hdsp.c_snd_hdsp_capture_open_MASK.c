
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_3__ {int rate_max; int rates; int channels_max; int channels_min; } ;
struct snd_pcm_runtime {TYPE_1__ hw; int dma_bytes; int dma_area; } ;
struct hdsp {scalar_t__ io_type; int ss_in_channels; int qs_in_channels; int lock; struct snd_pcm_substream* capture_substream; int capture_pid; int capture_buffer; } ;
struct TYPE_4__ {int pid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 scalar_t__ FUNC_0 (struct hdsp*,int) ;
 scalar_t__ FUNC_1 (struct hdsp*) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int ,int *) ;
 int FUNC_3 (struct snd_pcm_runtime*,int ,int,int) ;
 int FUNC_4 (struct snd_pcm_runtime*,int ,int ,int ,struct hdsp*,int ,int) ;
 int FUNC_5 (struct snd_pcm_substream*) ;
 struct hdsp* FUNC_6 (struct snd_pcm_substream*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_14)
{
 struct hdsp *VAR_15 = FUNC_6(VAR_14);
 struct snd_pcm_runtime *VAR_16 = VAR_14->runtime;

 if (FUNC_1 (VAR_15))
  return -VAR_0;

 if (FUNC_0(VAR_15, 1))
  return -VAR_0;

 FUNC_7(&VAR_15->lock);

 FUNC_5(VAR_14);

 VAR_16->hw = VAR_10;
 VAR_16->dma_area = VAR_15->capture_buffer;
 VAR_16->dma_bytes = VAR_2;

 VAR_15->capture_pid = VAR_7->pid;
 VAR_15->capture_substream = VAR_14;

 FUNC_8(&VAR_15->lock);

 FUNC_3(VAR_16, 0, 32, 24);
 FUNC_2(VAR_16, 0, VAR_4, &VAR_9);
 if (VAR_15->io_type == VAR_1) {
  VAR_16->hw.channels_min = VAR_15->qs_in_channels;
  VAR_16->hw.channels_max = VAR_15->ss_in_channels;
  VAR_16->hw.rate_max = 192000;
  VAR_16->hw.rates = VAR_6;
  FUNC_2(VAR_16, 0, VAR_5, &VAR_8);
 }
 FUNC_4(VAR_16, 0, VAR_3,
        VAR_11, VAR_15,
        VAR_3, -1);
 FUNC_4(VAR_16, 0, VAR_3,
        VAR_12, VAR_15,
        VAR_5, -1);
 FUNC_4(VAR_16, 0, VAR_5,
        VAR_13, VAR_15,
        VAR_3, -1);
 return 0;
}
