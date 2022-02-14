
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_emu10k1_pcm* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_emu10k1_pcm {int start_addr; int * memblk; } ;
struct snd_emu10k1_memblk {int mapped_page; } ;
struct snd_emu10k1 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int * FUNC_2 (struct snd_emu10k1*,struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_emu10k1*,int *) ;
 int FUNC_4 (struct snd_emu10k1_pcm*,int ) ;
 int FUNC_5 (struct snd_pcm_substream*,int ) ;
 struct snd_emu10k1* FUNC_6 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_2,
       struct snd_pcm_hw_params *VAR_3)
{
 struct snd_emu10k1 *VAR_4 = FUNC_6(VAR_2);
 struct snd_pcm_runtime *VAR_5 = VAR_2->runtime;
 struct snd_emu10k1_pcm *VAR_6 = VAR_5->private_data;
 int VAR_7;

 if ((VAR_7 = FUNC_4(VAR_6, FUNC_1(VAR_3))) < 0)
  return VAR_7;
 if ((VAR_7 = FUNC_5(VAR_2, FUNC_0(VAR_3))) < 0)
  return VAR_7;
 if (VAR_7 > 0) {
  int VAR_8;
  if (VAR_6->memblk != ((void*)0))
   FUNC_3(VAR_4, VAR_6->memblk);
  VAR_6->memblk = FUNC_2(VAR_4, VAR_2);
  VAR_6->start_addr = 0;
  if (! VAR_6->memblk)
   return -VAR_0;
  VAR_8 = ((struct snd_emu10k1_memblk *)VAR_6->memblk)->mapped_page;
  if (VAR_8 < 0)
   return -VAR_0;
  VAR_6->start_addr = VAR_8 << VAR_1;
 }
 return 0;
}
