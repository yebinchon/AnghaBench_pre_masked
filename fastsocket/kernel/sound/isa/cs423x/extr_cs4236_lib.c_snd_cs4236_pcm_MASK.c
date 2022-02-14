
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_wss {int dummy; } ;
struct snd_pcm {int info_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_wss*,int,struct snd_pcm**) ;

int FUNC_1(struct snd_wss *VAR_1, int VAR_2, struct snd_pcm **VAR_3)
{
 struct snd_pcm *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_4->info_flags &= ~VAR_0;
 if (VAR_3)
  *VAR_3 = VAR_4;
 return 0;
}
