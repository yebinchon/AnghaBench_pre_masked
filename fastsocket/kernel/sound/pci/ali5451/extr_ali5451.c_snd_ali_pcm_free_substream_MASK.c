
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_runtime {struct snd_ali_voice* private_data; } ;
struct snd_ali_voice {struct snd_ali* codec; } ;
struct snd_ali {int dummy; } ;


 int FUNC_0 (struct snd_ali*,struct snd_ali_voice*) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_runtime *VAR_0)
{
 struct snd_ali_voice *VAR_1 = VAR_0->private_data;
 struct snd_ali *VAR_2;

 if (VAR_1) {
  VAR_2 = VAR_1->codec;
  FUNC_0(VAR_1->codec, VAR_1);
 }
}
