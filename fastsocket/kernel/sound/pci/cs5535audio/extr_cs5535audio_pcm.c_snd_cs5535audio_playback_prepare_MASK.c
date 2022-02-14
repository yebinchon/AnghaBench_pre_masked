
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct cs5535audio {int ac97; } ;
struct TYPE_2__ {int rate; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 struct cs5535audio* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct cs5535audio *VAR_2 = FUNC_1(VAR_1);
 return FUNC_0(VAR_2->ac97, VAR_0,
     VAR_1->runtime->rate);
}
