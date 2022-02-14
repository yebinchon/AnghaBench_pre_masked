
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned short dma_addr; } ;
struct snd_als300 {int reg_lock; int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,unsigned short,unsigned short) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,unsigned short) ;
 unsigned short FUNC_5 (struct snd_pcm_substream*) ;
 unsigned short FUNC_6 (struct snd_pcm_substream*) ;
 struct snd_als300* FUNC_7 (struct snd_pcm_substream*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_4)
{
 u32 VAR_5;
 struct snd_als300 *VAR_6 = FUNC_7(VAR_4);
 struct snd_pcm_runtime *VAR_7 = VAR_4->runtime;
 unsigned short VAR_8 = FUNC_6(VAR_4);
 unsigned short VAR_9 = FUNC_5(VAR_4);

 FUNC_0();
 FUNC_8(&VAR_6->reg_lock);
 VAR_5 = FUNC_3(VAR_6->port, VAR_0);
 VAR_5 &= ~VAR_3;

 FUNC_2("Period bytes: %d Buffer bytes %d\n",
      VAR_8, VAR_9);


 VAR_5 &= 0xffff0000;
 VAR_5 |= VAR_8 - 1;
 FUNC_4(VAR_6->port, VAR_0, VAR_5);


 FUNC_4(VAR_6->port, VAR_2,
     VAR_7->dma_addr);
 FUNC_4(VAR_6->port, VAR_1,
     VAR_7->dma_addr + VAR_9 - 1);
 FUNC_9(&VAR_6->reg_lock);
 FUNC_1();
 return 0;
}
