
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_emu10k1_pcm* private_data; } ;
struct snd_emu10k1_pcm {scalar_t__ start_addr; int * memblk; int ** voices; int emu; int * extra; } ;
struct snd_emu10k1 {int dummy; } ;


 int FUNC_0 (struct snd_emu10k1*,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 struct snd_emu10k1* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct snd_emu10k1 *VAR_1 = FUNC_3(VAR_0);
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 struct snd_emu10k1_pcm *VAR_3;

 if (VAR_2->private_data == ((void*)0))
  return 0;
 VAR_3 = VAR_2->private_data;
 if (VAR_3->extra) {
  FUNC_1(VAR_3->emu, VAR_3->extra);
  VAR_3->extra = ((void*)0);
 }
 if (VAR_3->voices[1]) {
  FUNC_1(VAR_3->emu, VAR_3->voices[1]);
  VAR_3->voices[1] = ((void*)0);
 }
 if (VAR_3->voices[0]) {
  FUNC_1(VAR_3->emu, VAR_3->voices[0]);
  VAR_3->voices[0] = ((void*)0);
 }
 if (VAR_3->memblk) {
  FUNC_0(VAR_1, VAR_3->memblk);
  VAR_3->memblk = ((void*)0);
  VAR_3->start_addr = 0;
 }
 FUNC_2(VAR_0);
 return 0;
}
