
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ number; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct echoaudio {int dummy; } ;


 int FUNC_0 (struct snd_pcm_substream*,struct snd_pcm_hw_params*,scalar_t__,int ) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_2 (struct echoaudio*) ;
 struct echoaudio* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0,
       struct snd_pcm_hw_params *VAR_1)
{
 struct echoaudio *VAR_2 = FUNC_3(VAR_0);

 return FUNC_0(VAR_0, VAR_1, FUNC_2(VAR_2) +
   VAR_0->number, FUNC_1(VAR_1));
}
