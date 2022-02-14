
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int rate; int dma_addr; int format; } ;
struct TYPE_2__ {unsigned int size; int reg; int addr; } ;
struct snd_ad1889 {TYPE_1__ ramc; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_ad1889*,int ) ;
 int FUNC_1 (char*,int ,unsigned int,unsigned int,int,int ) ;
 int FUNC_2 (struct snd_ad1889*,int ) ;
 int FUNC_3 (struct snd_ad1889*,unsigned int) ;
 int FUNC_4 (struct snd_ad1889*,unsigned int) ;
 int FUNC_5 (struct snd_ad1889*,int ) ;
 int FUNC_6 (struct snd_ad1889*,int ,int) ;
 int FUNC_7 (int ) ;
 unsigned int FUNC_8 (struct snd_pcm_substream*) ;
 unsigned int FUNC_9 (struct snd_pcm_substream*) ;
 struct snd_ad1889* FUNC_10 (struct snd_pcm_substream*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(struct snd_pcm_substream *VAR_4)
{
 struct snd_ad1889 *VAR_5 = FUNC_10(VAR_4);
 struct snd_pcm_runtime *VAR_6 = VAR_4->runtime;
 unsigned int VAR_7 = FUNC_8(VAR_4);
 unsigned int VAR_8 = FUNC_9(VAR_4);
 u16 VAR_9;

 FUNC_0(VAR_5, VAR_0);

 VAR_9 = FUNC_5(VAR_5, VAR_1);


 VAR_9 &= ~(VAR_2 | VAR_3);

 if (FUNC_7(VAR_6->format) == 16)
  VAR_9 |= VAR_2;

 if (VAR_6->channels > 1)
  VAR_9 |= VAR_3;


 FUNC_11(&VAR_5->lock);

 VAR_5->ramc.size = VAR_7;
 VAR_5->ramc.reg = VAR_9;
 VAR_5->ramc.addr = VAR_6->dma_addr;

 FUNC_6(VAR_5, VAR_1, VAR_5->ramc.reg);


 FUNC_2(VAR_5, VAR_5->ramc.addr);
 FUNC_3(VAR_5, VAR_7);
 FUNC_4(VAR_5, VAR_8);


 FUNC_5(VAR_5, VAR_1);

 FUNC_12(&VAR_5->lock);

 FUNC_1("prepare capture: addr = 0x%x, count = %u, "
   "size = %u, reg = 0x%x, rate = %u\n", VAR_5->ramc.addr,
   VAR_8, VAR_7, VAR_9, VAR_6->rate);
 return 0;
}
