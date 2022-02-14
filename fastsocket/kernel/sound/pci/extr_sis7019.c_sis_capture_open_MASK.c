
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct voice {int flags; struct snd_pcm_substream* substream; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_4__ {int rates; } ;
struct snd_pcm_runtime {TYPE_2__ hw; struct voice* private_data; } ;
struct sis7019 {TYPE_1__** ac97; int voice_lock; struct voice capture_voice; } ;
struct TYPE_3__ {int * rates; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ,int,int) ;
 int FUNC_1 (struct snd_pcm_runtime*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 struct sis7019* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_6)
{
 struct sis7019 *VAR_7 = FUNC_3(VAR_6);
 struct snd_pcm_runtime *VAR_8 = VAR_6->runtime;
 struct voice *VAR_9 = &VAR_7->capture_voice;
 unsigned long VAR_10;




 FUNC_4(&VAR_7->voice_lock, VAR_10);
 if (VAR_9->flags & VAR_4)
  VAR_9 = ((void*)0);
 else
  VAR_9->flags |= VAR_4;
 FUNC_5(&VAR_7->voice_lock, VAR_10);

 if (!VAR_9)
  return -VAR_1;

 VAR_9->substream = VAR_6;
 VAR_8->private_data = VAR_9;
 VAR_8->hw = VAR_5;
 VAR_8->hw.rates = VAR_7->ac97[0]->rates[VAR_0];
 FUNC_1(VAR_8);
 FUNC_0(VAR_8, VAR_3,
      9, 0xfff9);
 FUNC_0(VAR_8, VAR_2,
      9, 0xfff9);
 FUNC_2(VAR_6);
 return 0;
}
