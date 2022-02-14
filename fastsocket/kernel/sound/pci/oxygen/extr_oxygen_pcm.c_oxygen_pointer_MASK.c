
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ dma_addr; } ;
struct oxygen {int dummy; } ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (struct snd_pcm_runtime*,scalar_t__) ;
 int * VAR_0 ;
 scalar_t__ FUNC_1 (struct oxygen*,int ) ;
 unsigned int FUNC_2 (struct snd_pcm_substream*) ;
 struct oxygen* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_4(struct snd_pcm_substream *VAR_1)
{
 struct oxygen *VAR_2 = FUNC_3(VAR_1);
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 unsigned int VAR_4 = FUNC_2(VAR_1);
 u32 VAR_5;


 VAR_5 = FUNC_1(VAR_2, VAR_0[VAR_4]);
 return FUNC_0(VAR_3, VAR_5 - (u32)VAR_3->dma_addr);
}
