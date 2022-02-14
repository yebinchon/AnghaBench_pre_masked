
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct snd_cs46xx_pcm {scalar_t__ substream; } ;
struct TYPE_6__ {scalar_t__ substream; } ;
struct snd_cs46xx {int midcr; int reg_lock; int midi_output; int midi_input; scalar_t__ rmidi; TYPE_3__ capt; scalar_t__ pcm; TYPE_2__* playback_pcm; struct dsp_spos_instance* dsp_spos_instance; } ;
struct dsp_spos_instance {TYPE_1__* pcm_channels; } ;
typedef int irqreturn_t ;
struct TYPE_5__ {scalar_t__ substream; } ;
struct TYPE_4__ {struct snd_cs46xx_pcm* private_data; int unlinked; scalar_t__ active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct snd_cs46xx*,int ) ;
 int FUNC_1 (struct snd_cs46xx*,int ,unsigned char) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,unsigned char*,int) ;
 int FUNC_4 (int ,unsigned char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_20, void *VAR_21)
{
 struct snd_cs46xx *VAR_22 = VAR_21;
 u32 VAR_23;
 VAR_23 = FUNC_0(VAR_22, VAR_1);
 if ((VAR_23 & 0x7fffffff) == 0) {
  FUNC_1(VAR_22, VAR_0, VAR_9 | VAR_10);
  return VAR_15;
 }
 if ((VAR_23 & VAR_12) && VAR_22->playback_pcm) {
  if (VAR_22->playback_pcm->substream)
   FUNC_2(VAR_22->playback_pcm->substream);
 }
 if ((VAR_23 & VAR_13) && VAR_22->pcm) {
  if (VAR_22->capt.substream)
   FUNC_2(VAR_22->capt.substream);
 }


 if ((VAR_23 & VAR_11) && VAR_22->rmidi) {
  unsigned char VAR_24;

  FUNC_5(&VAR_22->reg_lock);
  while ((FUNC_0(VAR_22, VAR_5) & VAR_18) == 0) {
   VAR_24 = FUNC_0(VAR_22, VAR_4);
   if ((VAR_22->midcr & VAR_16) == 0)
    continue;
   FUNC_3(VAR_22->midi_input, &VAR_24, 1);
  }
  while ((FUNC_0(VAR_22, VAR_5) & VAR_19) == 0) {
   if ((VAR_22->midcr & VAR_17) == 0)
    break;
   if (FUNC_4(VAR_22->midi_output, &VAR_24, 1) != 1) {
    VAR_22->midcr &= ~VAR_17;
    FUNC_1(VAR_22, VAR_3, VAR_22->midcr);
    break;
   }
   FUNC_1(VAR_22, VAR_6, VAR_24);
  }
  FUNC_6(&VAR_22->reg_lock);
 }



 FUNC_1(VAR_22, VAR_0, VAR_9 | VAR_10);

 return VAR_14;
}
