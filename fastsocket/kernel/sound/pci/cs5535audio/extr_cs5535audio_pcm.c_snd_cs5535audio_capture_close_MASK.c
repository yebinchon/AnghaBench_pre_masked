
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct cs5535audio {int ac97; } ;


 int FUNC_0 (int ) ;
 struct cs5535audio* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct cs5535audio *VAR_1 = FUNC_1(VAR_0);
 FUNC_0(VAR_1->ac97);
 return 0;
}
