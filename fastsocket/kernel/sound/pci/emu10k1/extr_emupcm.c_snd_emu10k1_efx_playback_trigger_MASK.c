
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_emu10k1_pcm* private_data; } ;
struct snd_emu10k1_pcm {int running; int extra; int * voices; } ;
struct snd_emu10k1 {int reg_lock; int * efx_pcm_mixer; } ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (struct snd_emu10k1*,int,int ) ;
 int FUNC_1 (struct snd_emu10k1*,int ,int,int,int *) ;
 int FUNC_2 (struct snd_emu10k1*,int ) ;
 int FUNC_3 (struct snd_emu10k1*,int ,int,int) ;
 struct snd_emu10k1* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_2,
            int VAR_3)
{
 struct snd_emu10k1 *VAR_4 = FUNC_4(VAR_2);
 struct snd_pcm_runtime *VAR_5 = VAR_2->runtime;
 struct snd_emu10k1_pcm *VAR_6 = VAR_5->private_data;
 int VAR_7;
 int VAR_8 = 0;

 FUNC_5(&VAR_4->reg_lock);
 switch (VAR_3) {
 case 130:

  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
   FUNC_0(VAR_4, 0, VAR_6->voices[VAR_7]);
  }
  FUNC_0(VAR_4, 1, VAR_6->extra);


 case 132:
 case 131:
  FUNC_1(VAR_4, VAR_6->extra, 1, 1, ((void*)0));
  FUNC_1(VAR_4, VAR_6->voices[0], 0, 0,
         &VAR_4->efx_pcm_mixer[0]);
  for (VAR_7 = 1; VAR_7 < VAR_1; VAR_7++)
   FUNC_1(VAR_4, VAR_6->voices[VAR_7], 0, 0,
          &VAR_4->efx_pcm_mixer[VAR_7]);
  FUNC_3(VAR_4, VAR_6->voices[0], 0, 0);
  FUNC_3(VAR_4, VAR_6->extra, 1, 1);
  for (VAR_7 = 1; VAR_7 < VAR_1; VAR_7++)
   FUNC_3(VAR_4, VAR_6->voices[VAR_7], 0, 0);
  VAR_6->running = 1;
  break;
 case 128:
 case 129:
 case 133:
  VAR_6->running = 0;
  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
   FUNC_2(VAR_4, VAR_6->voices[VAR_7]);
  }
  FUNC_2(VAR_4, VAR_6->extra);
  break;
 default:
  VAR_8 = -VAR_0;
  break;
 }
 FUNC_6(&VAR_4->reg_lock);
 return VAR_8;
}
