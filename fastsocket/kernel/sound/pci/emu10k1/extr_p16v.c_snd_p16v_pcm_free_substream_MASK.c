
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_runtime {struct snd_emu10k1_pcm* private_data; } ;
struct snd_emu10k1_pcm {int dummy; } ;


 int FUNC_0 (struct snd_emu10k1_pcm*) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_runtime *VAR_0)
{
 struct snd_emu10k1_pcm *VAR_1 = VAR_0->private_data;

 if (VAR_1) {

  FUNC_0(VAR_1);
 }
}
