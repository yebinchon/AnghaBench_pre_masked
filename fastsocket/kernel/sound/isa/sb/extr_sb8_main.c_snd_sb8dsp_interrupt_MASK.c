
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {int mode; int capture_format; struct snd_pcm_substream* capture_substream; int playback_format; struct snd_pcm_substream* playback_substream; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*,int ) ;
 int FUNC_2 (struct snd_pcm_substream*,int ) ;
 int FUNC_3 (struct snd_sb*) ;

irqreturn_t FUNC_4(struct snd_sb *VAR_4)
{
 struct snd_pcm_substream *VAR_5;
 struct snd_pcm_runtime *VAR_6;

 FUNC_3(VAR_4);
 switch (VAR_4->mode) {
 case 128:
  VAR_5 = VAR_4->playback_substream;
  VAR_6 = VAR_5->runtime;
  if (VAR_4->playback_format == VAR_2)
       FUNC_2(VAR_5, VAR_3);
  FUNC_0(VAR_5);
  break;
 case 129:
  VAR_5 = VAR_4->capture_substream;
  VAR_6 = VAR_5->runtime;
  if (VAR_4->capture_format == VAR_1)
       FUNC_1(VAR_5, VAR_3);
  FUNC_0(VAR_5);
  break;
 }
 return VAR_0;
}
