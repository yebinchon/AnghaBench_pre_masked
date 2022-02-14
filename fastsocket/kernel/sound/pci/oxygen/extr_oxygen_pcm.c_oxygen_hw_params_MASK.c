
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct oxygen {int dummy; } ;
struct TYPE_2__ {scalar_t__ dma_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__* VAR_3 ;
 unsigned int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct oxygen*,scalar_t__,int) ;
 int FUNC_2 (struct oxygen*,scalar_t__,int) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_substream*,int) ;
 struct oxygen* FUNC_6 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_4,
       struct snd_pcm_hw_params *VAR_5)
{
 struct oxygen *VAR_6 = FUNC_6(VAR_4);
 unsigned int VAR_7 = FUNC_0(VAR_4);
 int VAR_8;

 VAR_8 = FUNC_5(VAR_4,
           FUNC_3(VAR_5));
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_2(VAR_6, VAR_3[VAR_7],
         (u32)VAR_4->runtime->dma_addr);
 if (VAR_7 == VAR_2) {
  FUNC_2(VAR_6, VAR_0,
          FUNC_3(VAR_5) / 4 - 1);
  FUNC_2(VAR_6, VAR_1,
          FUNC_4(VAR_5) / 4 - 1);
 } else {
  FUNC_1(VAR_6, VAR_3[VAR_7] + 4,
          FUNC_3(VAR_5) / 4 - 1);
  FUNC_1(VAR_6, VAR_3[VAR_7] + 6,
          FUNC_4(VAR_5) / 4 - 1);
 }
 return 0;
}
