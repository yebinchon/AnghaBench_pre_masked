
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_wss {scalar_t__ hardware; int dma1; int dma2; struct snd_pcm* pcm; scalar_t__ single_dma; int card; } ;
struct snd_pcm {int name; int info_flags; struct snd_wss* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_2 (int ,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_3 (struct snd_pcm*,int ,int *) ;
 int VAR_6 ;
 int FUNC_4 (struct snd_wss*) ;
 int VAR_7 ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(struct snd_wss *VAR_8, int VAR_9, struct snd_pcm **VAR_10)
{
 struct snd_pcm *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_2(VAR_8->card, "WSS", VAR_9, 1, 1, &VAR_11);
 if (VAR_12 < 0)
  return VAR_12;

 FUNC_3(VAR_11, VAR_4, &VAR_7);
 FUNC_3(VAR_11, VAR_3, &VAR_6);


 VAR_11->private_data = VAR_8;
 VAR_11->info_flags = 0;
 if (VAR_8->single_dma)
  VAR_11->info_flags |= VAR_1;
 if (VAR_8->hardware != VAR_5)
  VAR_11->info_flags |= VAR_2;
 FUNC_5(VAR_11->name, FUNC_4(VAR_8));

 FUNC_1(VAR_11, VAR_0,
           FUNC_0(),
           64*1024, VAR_8->dma1 > 3 || VAR_8->dma2 > 3 ? 128*1024 : 64*1024);

 VAR_8->pcm = VAR_11;
 if (VAR_10)
  *VAR_10 = VAR_11;
 return 0;
}
