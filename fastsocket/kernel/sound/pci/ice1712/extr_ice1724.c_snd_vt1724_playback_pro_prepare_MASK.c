
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_ice1712 {int reg_lock; } ;
struct TYPE_2__ {int channels; int dma_addr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snd_ice1712*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (unsigned int,scalar_t__) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (struct snd_pcm_substream*) ;
 struct snd_ice1712* FUNC_6 (struct snd_pcm_substream*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_4)
{
 struct snd_ice1712 *VAR_5 = FUNC_6(VAR_4);
 unsigned char VAR_6;
 unsigned int VAR_7;

 FUNC_7(&VAR_5->reg_lock);
 VAR_6 = (8 - VAR_4->runtime->channels) >> 1;
 FUNC_1(VAR_6, FUNC_0(VAR_5, VAR_0));

 FUNC_2(VAR_4->runtime->dma_addr, FUNC_0(VAR_5, VAR_1));

 VAR_7 = (FUNC_4(VAR_4) >> 2) - 1;

 FUNC_3(VAR_7, FUNC_0(VAR_5, VAR_3));
 FUNC_1(VAR_7 >> 16, FUNC_0(VAR_5, VAR_3) + 2);
 VAR_7 = (FUNC_5(VAR_4) >> 2) - 1;

 FUNC_3(VAR_7, FUNC_0(VAR_5, VAR_2));
 FUNC_1(VAR_7 >> 16, FUNC_0(VAR_5, VAR_2) + 2);

 FUNC_8(&VAR_5->reg_lock);
 return 0;
}
