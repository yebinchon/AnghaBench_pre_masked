
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; TYPE_1__* pcm; } ;
struct snd_pcm_runtime {scalar_t__ dma_area; } ;
struct snd_card_aica {int clicks; } ;
struct TYPE_2__ {struct snd_card_aica* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long,scalar_t__,int,int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(int VAR_7, int VAR_8,
        struct snd_pcm_substream *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 struct snd_card_aica *VAR_13;
 struct snd_pcm_runtime *VAR_14;
 unsigned long VAR_15;
 VAR_11 = 0;
 VAR_13 = VAR_9->pcm->private_data;
 VAR_12 = VAR_13->clicks;
 VAR_12 %= (VAR_4 / VAR_7);
 VAR_14 = VAR_9->runtime;
 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  FUNC_3(VAR_15);
  VAR_11 = FUNC_1(VAR_2,
          (unsigned long) (VAR_14->dma_area +
      (VAR_0 * VAR_10) /
      VAR_7 +
      VAR_5 *
      VAR_12),
          VAR_1 + VAR_10 * VAR_6 +
          VAR_5 * VAR_12,
          VAR_8 / VAR_7, VAR_3);
  if (FUNC_4(VAR_11 < 0)) {
   FUNC_2(VAR_15);
   break;
  }
  FUNC_0(VAR_2);
  FUNC_2(VAR_15);
 }
 return VAR_11;
}
