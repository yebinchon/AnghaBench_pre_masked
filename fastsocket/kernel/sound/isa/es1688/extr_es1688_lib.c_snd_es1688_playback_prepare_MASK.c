
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int dma_addr; int format; } ;
struct snd_es1688 {unsigned int dma_size; int reg_lock; int dma8; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned int,int) ;
 int FUNC_1 (struct snd_es1688*,int ) ;
 int FUNC_2 (struct snd_es1688*,int) ;
 int FUNC_3 (struct snd_es1688*) ;
 int FUNC_4 (struct snd_es1688*,struct snd_pcm_substream*) ;
 int FUNC_5 (struct snd_es1688*,int,unsigned char) ;
 int FUNC_6 (int ) ;
 unsigned int FUNC_7 (struct snd_pcm_substream*) ;
 unsigned int FUNC_8 (struct snd_pcm_substream*) ;
 struct snd_es1688* FUNC_9 (struct snd_pcm_substream*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_12(struct snd_pcm_substream *VAR_3)
{
 unsigned long VAR_4;
 struct snd_es1688 *VAR_5 = FUNC_9(VAR_3);
 struct snd_pcm_runtime *VAR_6 = VAR_3->runtime;
 unsigned int VAR_7 = FUNC_7(VAR_3);
 unsigned int VAR_8 = FUNC_8(VAR_3);

 VAR_5->dma_size = VAR_7;
 FUNC_10(&VAR_5->reg_lock, VAR_4);
 FUNC_3(VAR_5);
 FUNC_4(VAR_5, VAR_3);
 FUNC_5(VAR_5, 0xb8, 4);
 FUNC_5(VAR_5, 0xa8, (FUNC_2(VAR_5, 0xa8) & ~0x03) | (3 - VAR_6->channels));
 FUNC_5(VAR_5, 0xb9, 2);
 if (VAR_6->channels == 1) {
  if (FUNC_6(VAR_6->format) == 8) {

   FUNC_5(VAR_5, 0xb6, 0x80);
   FUNC_5(VAR_5, 0xb7, 0x51);
   FUNC_5(VAR_5, 0xb7, 0xd0);
  } else {

   FUNC_5(VAR_5, 0xb6, 0x00);
   FUNC_5(VAR_5, 0xb7, 0x71);
   FUNC_5(VAR_5, 0xb7, 0xf4);
  }
 } else {
  if (FUNC_6(VAR_6->format) == 8) {

   FUNC_5(VAR_5, 0xb6, 0x80);
   FUNC_5(VAR_5, 0xb7, 0x51);
   FUNC_5(VAR_5, 0xb7, 0x98);
  } else {

   FUNC_5(VAR_5, 0xb6, 0x00);
   FUNC_5(VAR_5, 0xb7, 0x71);
   FUNC_5(VAR_5, 0xb7, 0xbc);
  }
 }
 FUNC_5(VAR_5, 0xb1, (FUNC_2(VAR_5, 0xb1) & 0x0f) | 0x50);
 FUNC_5(VAR_5, 0xb2, (FUNC_2(VAR_5, 0xb2) & 0x0f) | 0x50);
 FUNC_1(VAR_5, VAR_2);
 FUNC_11(&VAR_5->reg_lock, VAR_4);

 VAR_8 = -VAR_8;
 FUNC_0(VAR_5->dma8, VAR_6->dma_addr, VAR_7, VAR_1 | VAR_0);
 FUNC_10(&VAR_5->reg_lock, VAR_4);
 FUNC_5(VAR_5, 0xa4, (unsigned char) VAR_8);
 FUNC_5(VAR_5, 0xa5, (unsigned char) (VAR_8 >> 8));
 FUNC_11(&VAR_5->reg_lock, VAR_4);
 return 0;
}
