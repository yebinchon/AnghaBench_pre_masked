
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {unsigned char* dma_area; } ;


 int FUNC_0 (unsigned char*,char,int) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_0,
 int VAR_1, snd_pcm_uframes_t VAR_2, snd_pcm_uframes_t VAR_3)
{
 unsigned char *VAR_4 = VAR_0->runtime->dma_area;
 VAR_4 += VAR_2 * 8 * 4;
 FUNC_0(VAR_4, '\0', VAR_3 * 8 * 4);

 return 0;
}
