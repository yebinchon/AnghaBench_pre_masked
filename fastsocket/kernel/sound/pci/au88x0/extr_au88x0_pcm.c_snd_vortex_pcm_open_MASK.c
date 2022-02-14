
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int spdif_sr; } ;
typedef TYPE_1__ vortex_t ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; int pcm; } ;
struct TYPE_8__ {int rates; } ;
struct snd_pcm_runtime {int * private_data; TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct snd_pcm_runtime*,int ) ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int ) ;
 TYPE_1__* FUNC_3 (struct snd_pcm_substream*) ;
 TYPE_2__ VAR_10 ;
 TYPE_2__ VAR_11 ;
 TYPE_2__ VAR_12 ;
 TYPE_2__ VAR_13 ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_14)
{
 vortex_t *VAR_15 = FUNC_3(VAR_14);
 struct snd_pcm_runtime *VAR_16 = VAR_14->runtime;
 int VAR_17;


 if ((VAR_17 =
      FUNC_1(VAR_16,
        VAR_0)) < 0)
  return VAR_17;

 if ((VAR_17 =
      FUNC_2(VAR_16, 0,
     VAR_1)) < 0)
  return VAR_17;

 if (FUNC_0(VAR_14->pcm) != VAR_9) {

  if (FUNC_0(VAR_14->pcm) == VAR_5) {
   VAR_16->hw = VAR_10;
  }

  if (FUNC_0(VAR_14->pcm) == VAR_8) {
   VAR_16->hw = VAR_12;
   switch (VAR_15->spdif_sr) {
   case 32000:
    VAR_16->hw.rates = VAR_2;
    break;
   case 44100:
    VAR_16->hw.rates = VAR_3;
    break;
   case 48000:
    VAR_16->hw.rates = VAR_4;
    break;
   }
  }
  if (FUNC_0(VAR_14->pcm) == VAR_6
      || FUNC_0(VAR_14->pcm) == VAR_7)
   VAR_16->hw = VAR_11;
  VAR_14->runtime->private_data = ((void*)0);
 }

 else {
  VAR_16->hw = VAR_13;
  VAR_14->runtime->private_data = ((void*)0);
 }

 return 0;
}
