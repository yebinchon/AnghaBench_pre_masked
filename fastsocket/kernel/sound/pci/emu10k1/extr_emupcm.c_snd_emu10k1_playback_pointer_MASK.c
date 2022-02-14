
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned int buffer_size; struct snd_emu10k1_pcm* private_data; } ;
struct snd_emu10k1_pcm {unsigned int ccca_start_addr; TYPE_1__** voices; int running; } ;
struct snd_emu10k1 {int dummy; } ;
typedef unsigned int snd_pcm_uframes_t ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_emu10k1*,int ,int ) ;
 struct snd_emu10k1* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct snd_emu10k1 *VAR_2 = FUNC_1(VAR_1);
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 struct snd_emu10k1_pcm *VAR_4 = VAR_3->private_data;
 unsigned int VAR_5;

 if (!VAR_4->running)
  return 0;
 VAR_5 = FUNC_0(VAR_2, VAR_0, VAR_4->voices[0]->number) & 0x00ffffff;





 if (VAR_5 < VAR_4->ccca_start_addr)
  VAR_5 += VAR_3->buffer_size - VAR_4->ccca_start_addr;
 else {
  VAR_5 -= VAR_4->ccca_start_addr;
  if (VAR_5 >= VAR_3->buffer_size)
   VAR_5 -= VAR_3->buffer_size;
 }






 return VAR_5;
}
