
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_addr; scalar_t__ rate_den; } ;
struct TYPE_2__ {int dma2; } ;
struct snd_gus_card {int c_period_size; TYPE_1__ gf1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct snd_gus_card*,int ) ;
 int FUNC_2 (struct snd_gus_card*,int ,scalar_t__) ;
 struct snd_gus_card* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_3)
{
 struct snd_gus_card *VAR_4 = FUNC_3(VAR_3);
 struct snd_pcm_runtime *VAR_5 = VAR_3->runtime;

 FUNC_2(VAR_4, VAR_1, VAR_5->rate_den - 2);
 FUNC_2(VAR_4, VAR_2, 0);
 FUNC_1(VAR_4, VAR_2);
 FUNC_0(VAR_4->gf1.dma2, VAR_5->dma_addr, VAR_4->c_period_size, VAR_0);
 return 0;
}
