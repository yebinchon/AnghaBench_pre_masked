
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {size_t number; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_emu10k1_pcm* private_data; } ;
struct snd_emu10k1_pcm_mixer {int dummy; } ;
struct snd_emu10k1_pcm {int running; int extra; int * voices; } ;
struct snd_emu10k1 {int reg_lock; struct snd_emu10k1_pcm_mixer* pcm_mixer; } ;


 int VAR_0 ;






 int FUNC_0 (struct snd_emu10k1*,int,int ) ;
 int FUNC_1 (struct snd_emu10k1*,int ,int,int,struct snd_emu10k1_pcm_mixer*) ;
 int FUNC_2 (struct snd_emu10k1*,int ) ;
 int FUNC_3 (struct snd_emu10k1*,int ,int,int) ;
 struct snd_emu10k1* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_1,
            int VAR_2)
{
 struct snd_emu10k1 *VAR_3 = FUNC_4(VAR_1);
 struct snd_pcm_runtime *VAR_4 = VAR_1->runtime;
 struct snd_emu10k1_pcm *VAR_5 = VAR_4->private_data;
 struct snd_emu10k1_pcm_mixer *VAR_6;
 int VAR_7 = 0;





 FUNC_5(&VAR_3->reg_lock);
 switch (VAR_2) {
 case 130:
  FUNC_0(VAR_3, 1, VAR_5->extra);
  FUNC_0(VAR_3, 0, VAR_5->voices[0]);

 case 132:
 case 131:
  VAR_6 = &VAR_3->pcm_mixer[VAR_1->number];
  FUNC_1(VAR_3, VAR_5->voices[0], 1, 0, VAR_6);
  FUNC_1(VAR_3, VAR_5->voices[1], 0, 0, VAR_6);
  FUNC_1(VAR_3, VAR_5->extra, 1, 1, ((void*)0));
  FUNC_3(VAR_3, VAR_5->voices[0], 1, 0);
  FUNC_3(VAR_3, VAR_5->voices[1], 0, 0);
  FUNC_3(VAR_3, VAR_5->extra, 1, 1);
  VAR_5->running = 1;
  break;
 case 129:
 case 133:
 case 128:
  VAR_5->running = 0;
  FUNC_2(VAR_3, VAR_5->voices[0]);
  FUNC_2(VAR_3, VAR_5->voices[1]);
  FUNC_2(VAR_3, VAR_5->extra);
  break;
 default:
  VAR_7 = -VAR_0;
  break;
 }
 FUNC_6(&VAR_3->reg_lock);
 return VAR_7;
}
