
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int info; int rates; scalar_t__ buffer_bytes_max; int period_bytes_min; scalar_t__ periods_max; int periods_min; scalar_t__ period_bytes_max; scalar_t__ rate_max; int rate_min; scalar_t__ channels_max; int channels_min; int formats; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ dma_bytes; struct snd_pcm_substream hw; } ;
struct snd_pcm_hardware {int info; int rates; scalar_t__ buffer_bytes_max; int period_bytes_min; scalar_t__ periods_max; int periods_min; scalar_t__ period_bytes_max; scalar_t__ rate_max; int rate_min; scalar_t__ channels_max; int channels_min; int formats; struct snd_pcm_runtime* runtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int) ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int ) ;
 int FUNC_3 (struct snd_pcm_runtime*,int ,int ,scalar_t__) ;
 int FUNC_4 (struct snd_pcm_runtime*,int ,int ,int ,struct snd_pcm_substream*,int ,int) ;
 int VAR_22 ;
 int VAR_23 ;

int FUNC_5(struct snd_pcm_substream *VAR_24)
{
 struct snd_pcm_runtime *VAR_25 = VAR_24->runtime;
 struct snd_pcm_hardware *VAR_26 = &VAR_25->hw;
 int VAR_27;
 unsigned int VAR_28 = 0;

        if (VAR_26->info & VAR_16)
  VAR_28 |= 1 << VAR_4;
        if (VAR_26->info & VAR_18)
  VAR_28 |= 1 << VAR_5;
 if (VAR_26->info & VAR_17) {
  if (VAR_26->info & VAR_16)
   VAR_28 |= 1 << VAR_2;
  if (VAR_26->info & VAR_18)
   VAR_28 |= 1 << VAR_3;
  if (VAR_26->info & VAR_15)
   VAR_28 |= 1 << VAR_1;
 }
 VAR_27 = FUNC_1(VAR_25, VAR_6, VAR_28);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_27 = FUNC_2(VAR_25, VAR_9, VAR_26->formats);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_27 = FUNC_1(VAR_25, VAR_14, 1 << VAR_21);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_27 = FUNC_3(VAR_25, VAR_8,
        VAR_26->channels_min, VAR_26->channels_max);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_27 = FUNC_3(VAR_25, VAR_13,
        VAR_26->rate_min, VAR_26->rate_max);
  if (VAR_27 < 0)
   return VAR_27;

 VAR_27 = FUNC_3(VAR_25, VAR_11,
        VAR_26->period_bytes_min, VAR_26->period_bytes_max);
  if (VAR_27 < 0)
   return VAR_27;

 VAR_27 = FUNC_3(VAR_25, VAR_10,
        VAR_26->periods_min, VAR_26->periods_max);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_27 = FUNC_3(VAR_25, VAR_7,
        VAR_26->period_bytes_min, VAR_26->buffer_bytes_max);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_27 = FUNC_4(VAR_25, 0, VAR_7,
      VAR_22, VAR_24,
      VAR_7, -1);
 if (VAR_27 < 0)
  return VAR_27;


 if (VAR_25->dma_bytes) {
  VAR_27 = FUNC_3(VAR_25, VAR_7, 0, VAR_25->dma_bytes);
  if (VAR_27 < 0)
   return -VAR_0;
 }

 if (!(VAR_26->rates & (VAR_20 | VAR_19))) {
  VAR_27 = FUNC_4(VAR_25, 0, VAR_13,
       VAR_23, VAR_26,
       VAR_13, -1);
  if (VAR_27 < 0)
   return VAR_27;
 }


 FUNC_0(VAR_25, VAR_12);

 return 0;
}
