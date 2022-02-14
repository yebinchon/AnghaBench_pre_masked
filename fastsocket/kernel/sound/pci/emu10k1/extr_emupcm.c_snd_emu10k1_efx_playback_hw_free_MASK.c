
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_emu10k1_pcm* private_data; } ;
struct snd_emu10k1_pcm {scalar_t__ start_addr; int * memblk; int ** voices; int emu; int * extra; } ;
struct snd_emu10k1 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_emu10k1*,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 struct snd_emu10k1* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1)
{
 struct snd_emu10k1 *VAR_2 = FUNC_3(VAR_1);
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 struct snd_emu10k1_pcm *VAR_4;
 int VAR_5;

 if (VAR_3->private_data == ((void*)0))
  return 0;
 VAR_4 = VAR_3->private_data;
 if (VAR_4->extra) {
  FUNC_1(VAR_4->emu, VAR_4->extra);
  VAR_4->extra = ((void*)0);
 }
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_4->voices[VAR_5]) {
   FUNC_1(VAR_4->emu, VAR_4->voices[VAR_5]);
   VAR_4->voices[VAR_5] = ((void*)0);
  }
 }
 if (VAR_4->memblk) {
  FUNC_0(VAR_2, VAR_4->memblk);
  VAR_4->memblk = ((void*)0);
  VAR_4->start_addr = 0;
 }
 FUNC_2(VAR_1);
 return 0;
}
