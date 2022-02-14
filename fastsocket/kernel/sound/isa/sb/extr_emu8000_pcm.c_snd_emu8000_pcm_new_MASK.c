
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm {int private_free; struct snd_emu8000* private_data; } ;
struct snd_emu8000 {struct snd_pcm* pcm; } ;
struct snd_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_card*,struct snd_pcm*) ;
 int VAR_2 ;
 int FUNC_1 (struct snd_card*,char*,int,int,int ,struct snd_pcm**) ;
 int FUNC_2 (struct snd_pcm*,int ,int *) ;

int FUNC_3(struct snd_card *VAR_3, struct snd_emu8000 *VAR_4, int VAR_5)
{
 struct snd_pcm *VAR_6;
 int VAR_7;

 if ((VAR_7 = FUNC_1(VAR_3, "Emu8000 PCM", VAR_5, 1, 0, &VAR_6)) < 0)
  return VAR_7;
 VAR_6->private_data = VAR_4;
 VAR_6->private_free = VAR_2;
 FUNC_2(VAR_6, VAR_0, &VAR_1);
 VAR_4->pcm = VAR_6;

 FUNC_0(VAR_3, VAR_6);

 return 0;
}
