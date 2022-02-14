
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_pcm_indirect2 {int hw_ready; scalar_t__ sw_data; } ;
struct snd_ml403_ac97cr {int reg_lock; } ;
struct TYPE_2__ {scalar_t__ dma_area; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct snd_ml403_ac97cr*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 struct snd_ml403_ac97cr* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static size_t
FUNC_6(struct snd_pcm_substream *VAR_3,
       struct snd_pcm_indirect2 *VAR_4, size_t VAR_5)
{
 struct snd_ml403_ac97cr *VAR_6;
 u16 *VAR_7;
 int VAR_8 = 0;
 u32 VAR_9 = 0;

 VAR_6 = FUNC_3(VAR_3);
 VAR_7 = (u16 *)(VAR_3->runtime->dma_area + VAR_4->sw_data);

 FUNC_4(&VAR_6->reg_lock);
 while (((VAR_9 = (FUNC_2(FUNC_1(VAR_6, VAR_2)) &
     VAR_0)) != VAR_0) && (VAR_5 > 1)) {
  VAR_7[VAR_8] = FUNC_0(FUNC_2(FUNC_1(VAR_6,
             VAR_1)));
  VAR_8++;
  VAR_5 = VAR_5 - 2;
 }
 if (VAR_9 != VAR_0)
  VAR_4->hw_ready = 1;
 else
  VAR_4->hw_ready = 0;
 FUNC_5(&VAR_6->reg_lock);

 return (size_t) (VAR_8 * 2);
}
