
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; } ;
struct TYPE_3__ {int (* open ) (struct snd_ice1712*,struct snd_pcm_substream*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct snd_ice1712 {TYPE_2__ spdif; struct snd_pcm_substream* playback_pro_substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ,int ,int *) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int,int) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 struct snd_ice1712* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_ice1712*,struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_3)
{
 struct snd_pcm_runtime *VAR_4 = VAR_3->runtime;
 struct snd_ice1712 *VAR_5 = FUNC_3(VAR_3);

 VAR_5->playback_pro_substream = VAR_3;
 VAR_4->hw = VAR_2;
 FUNC_2(VAR_3);
 FUNC_1(VAR_4, 0, 32, 24);
 FUNC_0(VAR_4, 0, VAR_0, &VAR_1);

 if (VAR_5->spdif.ops.open)
  VAR_5->spdif.ops.open(VAR_5, VAR_3);

 return 0;
}
