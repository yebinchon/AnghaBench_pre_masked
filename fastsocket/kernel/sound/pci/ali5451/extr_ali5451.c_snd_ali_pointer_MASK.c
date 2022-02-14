
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_ali_voice* private_data; } ;
struct snd_ali_voice {int number; int running; } ;
struct snd_ali {int reg_lock; } ;
typedef unsigned int snd_pcm_uframes_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct snd_ali*,scalar_t__) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 struct snd_ali* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_7(struct snd_pcm_substream *VAR_2)
{
 struct snd_ali *VAR_3 = FUNC_3(VAR_2);
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;
 struct snd_ali_voice *VAR_5 = VAR_4->private_data;
 unsigned int VAR_6;

 FUNC_4(&VAR_3->reg_lock);
 if (!VAR_5->running) {
  FUNC_6(&VAR_3->reg_lock);
  return 0;
 }
 FUNC_2(VAR_5->number, FUNC_0(VAR_3, VAR_1));
 VAR_6 = FUNC_1(FUNC_0(VAR_3, VAR_0 + 2));
 FUNC_5(&VAR_3->reg_lock);

 return VAR_6;
}
