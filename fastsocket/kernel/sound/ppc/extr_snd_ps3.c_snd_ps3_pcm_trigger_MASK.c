
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ps3_card_info {int running; int dma_lock; } ;
struct snd_pcm_substream {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 struct snd_ps3_card_info* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_ps3_card_info*) ;
 int FUNC_4 (struct snd_ps3_card_info*,int ) ;
 int FUNC_5 (struct snd_ps3_card_info*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_4,
          int VAR_5)
{
 struct snd_ps3_card_info *VAR_6 = FUNC_2(VAR_4);
 int VAR_7 = 0;

 switch (VAR_5) {
 case 129:

  FUNC_9(VAR_0, 0);

  FUNC_6(&VAR_6->dma_lock);
  {
   VAR_6->running = 1;
  }
  FUNC_7(&VAR_6->dma_lock);

  FUNC_4(VAR_6,
        VAR_2);
  FUNC_3(VAR_6);
  while (FUNC_1(FUNC_0(7)) &
         VAR_1) {
   FUNC_8(1);
  }
  FUNC_4(VAR_6, VAR_3);
  FUNC_3(VAR_6);
  break;

 case 128:
  FUNC_6(&VAR_6->dma_lock);
  {
   VAR_6->running = 0;
  }
  FUNC_7(&VAR_6->dma_lock);
  FUNC_5(VAR_6);
  break;
 default:
  break;

 }

 return VAR_7;
}
