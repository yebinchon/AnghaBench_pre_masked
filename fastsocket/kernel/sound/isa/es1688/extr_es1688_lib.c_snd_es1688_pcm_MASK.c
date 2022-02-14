
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm {int name; int info_flags; struct snd_es1688* private_data; } ;
struct snd_es1688 {struct snd_pcm* pcm; int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 char* FUNC_1 (struct snd_es1688*) ;
 int VAR_5 ;
 int FUNC_2 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_3 (int ,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_4 (struct snd_pcm*,int ,int *) ;
 int FUNC_5 (int ,char*) ;

int FUNC_6(struct snd_es1688 * VAR_6, int VAR_7, struct snd_pcm ** VAR_8)
{
 struct snd_pcm *VAR_9;
 int VAR_10;

 if ((VAR_10 = FUNC_3(VAR_6->card, "ESx688", VAR_7, 1, 1, &VAR_9)) < 0)
  return VAR_10;

 FUNC_4(VAR_9, VAR_3, &VAR_5);
 FUNC_4(VAR_9, VAR_2, &VAR_4);

 VAR_9->private_data = VAR_6;
 VAR_9->info_flags = VAR_1;
 FUNC_5(VAR_9->name, FUNC_1(VAR_6));
 VAR_6->pcm = VAR_9;

 FUNC_2(VAR_9, VAR_0,
           FUNC_0(),
           64*1024, 64*1024);

 if (VAR_8)
  *VAR_8 = VAR_9;
 return 0;
}
