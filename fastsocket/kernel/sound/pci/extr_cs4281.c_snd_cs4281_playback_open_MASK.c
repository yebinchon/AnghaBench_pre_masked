
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; struct cs4281_dma* private_data; } ;
struct cs4281_dma {int right_slot; scalar_t__ left_slot; struct snd_pcm_substream* substream; } ;
struct cs4281 {struct cs4281_dma* dma; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ,int,int) ;
 struct cs4281* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct cs4281 *VAR_2 = FUNC_1(VAR_1);
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 struct cs4281_dma *VAR_4;

 VAR_4 = &VAR_2->dma[0];
 VAR_4->substream = VAR_1;
 VAR_4->left_slot = 0;
 VAR_4->right_slot = 1;
 VAR_3->private_data = VAR_4;
 VAR_3->hw = VAR_0;



 FUNC_0(VAR_3, 0, 32, 20);
 return 0;
}
