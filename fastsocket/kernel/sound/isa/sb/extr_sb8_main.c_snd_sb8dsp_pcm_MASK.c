
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {int version; struct snd_card* card; } ;
struct snd_pcm {struct snd_sb* private_data; int info_flags; int name; } ;
struct snd_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_2 (struct snd_card*,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_3 (struct snd_pcm*,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,char*,int,int) ;

int FUNC_5(struct snd_sb *VAR_6, int VAR_7, struct snd_pcm ** VAR_8)
{
 struct snd_card *VAR_9 = VAR_6->card;
 struct snd_pcm *VAR_10;
 int VAR_11;

 if (VAR_8)
  *VAR_8 = ((void*)0);
 if ((VAR_11 = FUNC_2(VAR_9, "SB8 DSP", VAR_7, 1, 1, &VAR_10)) < 0)
  return VAR_11;
 FUNC_4(VAR_10->name, "DSP v%i.%i", VAR_6->version >> 8, VAR_6->version & 0xff);
 VAR_10->info_flags = VAR_1;
 VAR_10->private_data = VAR_6;

 FUNC_3(VAR_10, VAR_3, &VAR_5);
 FUNC_3(VAR_10, VAR_2, &VAR_4);

 FUNC_1(VAR_10, VAR_0,
           FUNC_0(),
           64*1024, 64*1024);

 if (VAR_8)
  *VAR_8 = VAR_10;
 return 0;
}
