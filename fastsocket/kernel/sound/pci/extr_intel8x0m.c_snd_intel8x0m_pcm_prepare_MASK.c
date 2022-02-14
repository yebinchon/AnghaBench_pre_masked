
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int rate; int dma_addr; } ;
struct intel8x0m {int dummy; } ;
struct ichdev {int ac97; int fragsize; int size; int physbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ichdev* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct intel8x0m*,struct ichdev*) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 struct intel8x0m* FUNC_5 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_2)
{
 struct intel8x0m *VAR_3 = FUNC_5(VAR_2);
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;
 struct ichdev *VAR_5 = FUNC_0(VAR_2);

 VAR_5->physbuf = VAR_4->dma_addr;
 VAR_5->size = FUNC_3(VAR_2);
 VAR_5->fragsize = FUNC_4(VAR_2);
 FUNC_1(VAR_5->ac97, VAR_1, VAR_4->rate);
 FUNC_1(VAR_5->ac97, VAR_0, 0);
 FUNC_2(VAR_3, VAR_5);
 return 0;
}
