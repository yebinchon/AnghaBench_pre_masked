
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_3__ {int rates; } ;
struct snd_pcm_runtime {int * private_data; TYPE_1__ hw; } ;
struct cs5535audio {TYPE_2__* ac97; int * dmas; struct snd_pcm_substream* capture_substream; } ;
struct TYPE_4__ {int * rates; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (struct snd_pcm_runtime*,int ) ;
 int FUNC_2 (struct snd_pcm_runtime*) ;
 struct cs5535audio* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_4)
{
 int VAR_5;
 struct cs5535audio *VAR_6 = FUNC_3(VAR_4);
 struct snd_pcm_runtime *VAR_7 = VAR_4->runtime;

 VAR_7->hw = VAR_3;
 VAR_7->hw.rates = VAR_6->ac97->rates[VAR_0];
 FUNC_2(VAR_7);
 VAR_6->capture_substream = VAR_4;
 VAR_7->private_data = &(VAR_6->dmas[VAR_1]);
 if ((VAR_5 = FUNC_1(VAR_7,
      VAR_2)) < 0)
  return VAR_5;
 FUNC_0(VAR_6->ac97);
 return 0;
}
