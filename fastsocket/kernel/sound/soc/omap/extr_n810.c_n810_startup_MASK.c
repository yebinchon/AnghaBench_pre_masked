
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_2__* socdev; } ;
struct snd_soc_codec {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dummy; } ;
struct TYPE_4__ {TYPE_1__* card; } ;
struct TYPE_3__ {struct snd_soc_codec* codec; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_codec*) ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_2->runtime;
 struct snd_soc_pcm_runtime *VAR_4 = VAR_2->private_data;
 struct snd_soc_codec *VAR_5 = VAR_4->socdev->card->codec;

 FUNC_2(VAR_3,
         VAR_0, 2, 2);

 FUNC_1(VAR_5);
 return FUNC_0(VAR_1);
}
