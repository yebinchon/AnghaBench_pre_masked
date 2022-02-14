
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int format; int dma_addr; } ;
struct es1938 {unsigned int dma2_size; int dma2_shift; int dma2_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct es1938*,int ,int) ;
 int FUNC_1 (struct es1938*) ;
 int FUNC_2 (struct es1938*,struct snd_pcm_substream*,int ) ;
 int FUNC_3 (struct es1938*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 unsigned int FUNC_6 (struct snd_pcm_substream*) ;
 unsigned int FUNC_7 (struct snd_pcm_substream*) ;
 struct es1938* FUNC_8 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_4)
{
 struct es1938 *VAR_5 = FUNC_8(VAR_4);
 struct snd_pcm_runtime *VAR_6 = VAR_4->runtime;
 int VAR_7, VAR_8, VAR_9;
 unsigned int VAR_10 = FUNC_6(VAR_4);
 unsigned int VAR_11 = FUNC_7(VAR_4);

 VAR_5->dma2_size = VAR_10;
 VAR_5->dma2_start = VAR_6->dma_addr;

 VAR_9 = (VAR_6->channels > 1) ? 0 : 1;
 VAR_8 = FUNC_5(VAR_6->format) == 16 ? 0 : 1;
 VAR_7 = FUNC_4(VAR_6->format);

 VAR_5->dma2_shift = 2 - VAR_9 - VAR_8;

        FUNC_3(VAR_5);


        FUNC_2(VAR_5, VAR_4, VAR_0);

 VAR_11 >>= 1;
 VAR_11 = 0x10000 - VAR_11;
 FUNC_0(VAR_5, VAR_3, VAR_11 & 0xff);
 FUNC_0(VAR_5, VAR_2, VAR_11 >> 8);


 FUNC_0(VAR_5, VAR_1, 0x40 | (VAR_7 ? 0 : 4) |
          (VAR_9 ? 0 : 2) | (VAR_8 ? 0 : 1));


 FUNC_1(VAR_5);

 return 0;
}
