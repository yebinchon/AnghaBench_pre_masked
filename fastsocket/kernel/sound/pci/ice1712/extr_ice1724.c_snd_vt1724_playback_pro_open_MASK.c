
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int channels_max; } ;
struct snd_pcm_runtime {TYPE_1__ hw; void* private_data; } ;
struct snd_ice1712 {int num_total_dacs; int open_mutex; scalar_t__* pcm_reserved; struct snd_pcm_substream* playback_pro_substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_ice1712*,struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_pcm_runtime*,int ,int,int) ;
 int FUNC_4 (struct snd_pcm_runtime*,int ,int ,int) ;
 int FUNC_5 (struct snd_pcm_substream*) ;
 struct snd_ice1712* FUNC_6 (struct snd_pcm_substream*) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_6)
{
 struct snd_pcm_runtime *VAR_7 = VAR_6->runtime;
 struct snd_ice1712 *VAR_8 = FUNC_6(VAR_6);
 int VAR_9, VAR_10;

 VAR_7->private_data = (void *)&VAR_5;
 VAR_8->playback_pro_substream = VAR_6;
 VAR_7->hw = VAR_4;
 FUNC_5(VAR_6);
 FUNC_3(VAR_7, 0, 32, 24);
 FUNC_2(VAR_8, VAR_6);
 FUNC_0(&VAR_8->open_mutex);

 VAR_10 = VAR_8->num_total_dacs / 2 - 1;
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  if (VAR_8->pcm_reserved[VAR_9])
   break;
 }
 VAR_9 = (VAR_9 + 1) * 2;
 VAR_7->hw.channels_max = VAR_9;
 if (VAR_9 > 2)
  FUNC_4(VAR_7, 0, VAR_1, 2);
 FUNC_1(&VAR_8->open_mutex);
 FUNC_4(VAR_7, 0, VAR_2,
       VAR_3);
 FUNC_4(VAR_7, 0, VAR_0,
       VAR_3);
 return 0;
}
