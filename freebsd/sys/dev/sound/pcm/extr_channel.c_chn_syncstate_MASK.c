
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct snddev_info {int flags; int eqpreamp; TYPE_1__* mixer_dev; } ;
struct snd_mixer {int dummy; } ;
struct pcm_feeder {int dummy; } ;
struct pcm_channel {int feederflags; scalar_t__ direction; int dev; struct snddev_info* parentsnddev; } ;
struct TYPE_2__ {struct snd_mixer* si_drv1; } ;


 int FUNC_0 (struct pcm_channel*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct pcm_feeder*,int ,int) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 struct pcm_feeder* FUNC_2 (struct pcm_channel*,int) ;
 int FUNC_3 (struct pcm_channel*,int ,int,int,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct snd_mixer*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct snd_mixer*,scalar_t__) ;

void
FUNC_7(struct pcm_channel *VAR_18)
{
 struct snddev_info *VAR_19;
 struct snd_mixer *VAR_20;

 VAR_19 = (VAR_18 != ((void*)0)) ? VAR_18->parentsnddev : ((void*)0);
 VAR_20 = (VAR_19 != ((void*)0) && VAR_19->mixer_dev != ((void*)0)) ? VAR_19->mixer_dev->si_drv1 :
     ((void*)0);

 if (VAR_19 == ((void*)0) || VAR_20 == ((void*)0))
  return;

 FUNC_0(VAR_18);

 if (VAR_18->feederflags & (1 << VAR_8)) {
  uint32_t VAR_21;
  int VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;

  if (VAR_18->direction == VAR_9 &&
      (VAR_19->flags & VAR_12)) {

   VAR_22 = FUNC_5(VAR_20, VAR_16);
   VAR_21 = FUNC_6(VAR_20, VAR_16);
   if (VAR_21 != VAR_15)
    VAR_23 = FUNC_5(VAR_20, VAR_21);
   else
    VAR_23 = 100 | (100 << 8);

  } else {
   VAR_22 = 100 | (100 << 8);
   VAR_23 = VAR_22;
  }

  if (VAR_22 == -1) {
   FUNC_4(VAR_18->dev,
       "Soft PCM Volume: Failed to read pcm "
       "default value\n");
   VAR_22 = 100 | (100 << 8);
  }

  if (VAR_23 == -1) {
   FUNC_4(VAR_18->dev,
       "Soft PCM Volume: Failed to read parent "
       "default value\n");
   VAR_23 = 100 | (100 << 8);
  }

  VAR_24 = ((VAR_22 & 0x7f) * (VAR_23 & 0x7f)) / 100;
  VAR_25 = (((VAR_22 >> 8) & 0x7f) * ((VAR_23 >> 8) & 0x7f)) / 100;
  VAR_26 = (VAR_24 + VAR_25) >> 1;

  FUNC_3(VAR_18, VAR_13, VAR_24, VAR_25, VAR_26);
 }

 if (VAR_18->feederflags & (1 << VAR_7)) {
  struct pcm_feeder *VAR_27;
  int VAR_28, VAR_29, VAR_30;


  VAR_28 = FUNC_5(VAR_20, VAR_17);
  VAR_29 = FUNC_5(VAR_20, VAR_14);


  if (VAR_28 == -1)
   VAR_28 = 50;
  else
   VAR_28 = ((VAR_28 & 0x7f) +
       ((VAR_28 >> 8) & 0x7f)) >> 1;

  if (VAR_29 == -1)
   VAR_29 = 50;
  else
   VAR_29 = ((VAR_29 & 0x7f) + ((VAR_29 >> 8) & 0x7f)) >> 1;

  VAR_27 = FUNC_2(VAR_18, VAR_7);
  if (VAR_27 != ((void*)0)) {
   if (FUNC_1(VAR_27, VAR_6, VAR_28) != 0)
    FUNC_4(VAR_18->dev,
        "EQ: Failed to set treble -- %d\n",
        VAR_28);
   if (FUNC_1(VAR_27, VAR_0, VAR_29) != 0)
    FUNC_4(VAR_18->dev,
        "EQ: Failed to set bass -- %d\n",
        VAR_29);
   if (FUNC_1(VAR_27, VAR_4, VAR_19->eqpreamp) != 0)
    FUNC_4(VAR_18->dev,
        "EQ: Failed to set preamp -- %d\n",
        VAR_19->eqpreamp);
   if (VAR_19->flags & VAR_10)
    VAR_30 = VAR_1;
   else if (VAR_19->flags & VAR_11)
    VAR_30 = VAR_3;
   else
    VAR_30 = VAR_2;
   if (FUNC_1(VAR_27, VAR_5, VAR_30) != 0)
    FUNC_4(VAR_18->dev,
        "EQ: Failed to set state -- %d\n", VAR_30);
  }
 }
}
