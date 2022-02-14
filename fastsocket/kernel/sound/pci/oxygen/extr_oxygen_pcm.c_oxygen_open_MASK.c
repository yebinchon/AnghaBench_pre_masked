
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_10__ {int rates; int rate_min; int channels_max; int formats; } ;
struct snd_pcm_runtime {TYPE_4__ hw; void* private_data; } ;
struct TYPE_7__ {int device_config; int dac_channels_pcm; int (* pcm_hardware_filter ) (unsigned int,TYPE_4__*) ;} ;
struct oxygen {int pcm_active; int mutex; TYPE_3__** controls; int card; int spdif_bits; int spdif_pcm_bits; struct snd_pcm_substream** streams; TYPE_1__ model; scalar_t__ has_ac97_1; } ;
struct TYPE_9__ {int id; TYPE_2__* vd; } ;
struct TYPE_8__ {int access; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;


 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_4__ VAR_13 ;
 TYPE_4__** VAR_14 ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (struct snd_pcm_runtime*,int ,int,int) ;
 int FUNC_4 (struct snd_pcm_runtime*,int ,int ,int) ;
 int FUNC_5 (struct snd_pcm_substream*) ;
 struct oxygen* FUNC_6 (struct snd_pcm_substream*) ;
 int FUNC_7 (unsigned int,TYPE_4__*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_15,
         unsigned int VAR_16)
{
 struct oxygen *VAR_17 = FUNC_6(VAR_15);
 struct snd_pcm_runtime *VAR_18 = VAR_15->runtime;
 int VAR_19;

 VAR_18->private_data = (void *)(uintptr_t)VAR_16;
 if (VAR_16 == VAR_2 && VAR_17->has_ac97_1 &&
     (VAR_17->model.device_config & VAR_0))
  VAR_18->hw = VAR_13;
 else
  VAR_18->hw = *VAR_14[VAR_16];
 switch (VAR_16) {
 case 129:
  VAR_18->hw.rates &= ~(VAR_11 |
           VAR_12);
  VAR_18->hw.rate_min = 44100;
  break;
 case 128:
  VAR_18->hw.channels_max = VAR_17->model.dac_channels_pcm;
  break;
 }
 if (VAR_17->model.pcm_hardware_filter)
  VAR_17->model.pcm_hardware_filter(VAR_16, &VAR_18->hw);
 VAR_19 = FUNC_4(VAR_18, 0,
      VAR_10, 32);
 if (VAR_19 < 0)
  return VAR_19;
 VAR_19 = FUNC_4(VAR_18, 0,
      VAR_8, 32);
 if (VAR_19 < 0)
  return VAR_19;
 if (VAR_18->hw.formats & VAR_7) {
  VAR_19 = FUNC_3(VAR_18, 0, 32, 24);
  if (VAR_19 < 0)
   return VAR_19;
 }
 if (VAR_18->hw.channels_max > 2) {
  VAR_19 = FUNC_4(VAR_18, 0,
       VAR_9,
       2);
  if (VAR_19 < 0)
   return VAR_19;
 }
 FUNC_5(VAR_15);
 VAR_17->streams[VAR_16] = VAR_15;

 FUNC_0(&VAR_17->mutex);
 VAR_17->pcm_active |= 1 << VAR_16;
 if (VAR_16 == VAR_3) {
  VAR_17->spdif_pcm_bits = VAR_17->spdif_bits;
  VAR_17->controls[VAR_1]->vd[0].access &=
   ~VAR_4;
  FUNC_2(VAR_17->card, VAR_6 |
          VAR_5,
          &VAR_17->controls[VAR_1]->id);
 }
 FUNC_1(&VAR_17->mutex);

 return 0;
}
