
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int format; int rate; } ;
struct atmel_ac97c {int flags; TYPE_1__* pdev; int ac97; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ,int ) ;
 unsigned long FUNC_1 (int ) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
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


 unsigned long FUNC_2 (struct atmel_ac97c*,int ) ;
 int FUNC_3 (struct atmel_ac97c*,int ,unsigned long) ;
 int FUNC_4 (struct atmel_ac97c*,struct snd_pcm_substream*,int ) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int ,int ,int) ;
 struct atmel_ac97c* FUNC_7 (struct snd_pcm_substream*) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_18)
{
 struct atmel_ac97c *VAR_19 = FUNC_7(VAR_18);
 struct snd_pcm_runtime *VAR_20 = VAR_18->runtime;
 unsigned long VAR_21 = FUNC_2(VAR_19, VAR_12);
 int VAR_22;

 VAR_21 &= ~(FUNC_1(VAR_16) | FUNC_1(VAR_17));


 switch (VAR_20->channels) {
 case 1:
  VAR_21 |= FUNC_0(VAR_16, VAR_0);
  break;
 case 2:
  VAR_21 |= FUNC_0(VAR_16, VAR_0)
   | FUNC_0(VAR_17, VAR_0);
  break;
 default:

  return -VAR_11;
 }
 FUNC_3(VAR_19, VAR_12, VAR_21);


 VAR_21 = VAR_2 | VAR_3;

 switch (VAR_20->format) {
 case 128:
  VAR_21 |= VAR_1;
  break;
 case 129:
  VAR_21 &= ~(VAR_1);
  break;
 default:
  VAR_21 = FUNC_2(VAR_19, VAR_12);
  VAR_21 &= ~(FUNC_1(VAR_16) | FUNC_1(VAR_17));
  FUNC_3(VAR_19, VAR_12, VAR_21);
  return -VAR_11;
 }


 VAR_21 |= VAR_4;

 FUNC_3(VAR_19, VAR_8, VAR_21);


 VAR_21 = FUNC_2(VAR_19, VAR_14);
 VAR_21 |= VAR_6;
 FUNC_3(VAR_19, VAR_13, VAR_21);


 if (VAR_20->rate != 48000) {
  VAR_21 = FUNC_2(VAR_19, VAR_15);
  VAR_21 |= VAR_5;
  FUNC_3(VAR_19, VAR_15, VAR_21);
 } else {
  VAR_21 = FUNC_2(VAR_19, VAR_15);
  VAR_21 &= ~(VAR_5);
  FUNC_3(VAR_19, VAR_15, VAR_21);
 }

 VAR_22 = FUNC_6(VAR_19->ac97, VAR_7,
   VAR_20->rate);
 if (VAR_22)
  FUNC_5(&VAR_19->pdev->dev, "could not set rate %d Hz\n",
    VAR_20->rate);

 if (!FUNC_8(VAR_10, &VAR_19->flags))
  VAR_22 = FUNC_4(VAR_19, VAR_18,
    VAR_9);

 return VAR_22;
}
