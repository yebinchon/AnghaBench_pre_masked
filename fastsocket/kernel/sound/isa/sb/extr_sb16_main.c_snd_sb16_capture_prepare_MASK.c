
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {unsigned int c_dma_size; int mode; unsigned int dma8; unsigned int dma16; int reg_lock; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int dma_addr; int rate; int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (unsigned int,int ,unsigned int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct snd_pcm_substream*) ;
 unsigned int FUNC_3 (struct snd_pcm_substream*) ;
 struct snd_sb* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (struct snd_sb*,struct snd_pcm_runtime*) ;
 int FUNC_6 (struct snd_sb*,int ,int ) ;
 int FUNC_7 (struct snd_sb*,unsigned int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_13)
{
 unsigned long VAR_14;
 struct snd_sb *VAR_15 = FUNC_4(VAR_13);
 struct snd_pcm_runtime *VAR_16 = VAR_13->runtime;
 unsigned char VAR_17;
 unsigned int VAR_18, VAR_19, VAR_20;

 FUNC_5(VAR_15, VAR_16);
 if (FUNC_1(VAR_16->format) > 0) {
  VAR_17 = VAR_16->channels > 1 ? VAR_7 : VAR_6;
 } else {
  VAR_17 = VAR_16->channels > 1 ? VAR_5 : VAR_4;
 }
 FUNC_6(VAR_15, VAR_16->rate, VAR_12);
 VAR_18 = VAR_15->c_dma_size = FUNC_2(VAR_13);
 VAR_20 = (VAR_15->mode & VAR_11) ? VAR_15->dma8 : VAR_15->dma16;
 FUNC_0(VAR_20, VAR_16->dma_addr, VAR_18, VAR_1 | VAR_0);

 VAR_19 = FUNC_3(VAR_13);
 FUNC_8(&VAR_15->reg_lock, VAR_14);
 if (VAR_15->mode & VAR_10) {
  VAR_19 >>= 1;
  VAR_19--;
  FUNC_7(VAR_15, VAR_2);
  FUNC_7(VAR_15, VAR_17);
  FUNC_7(VAR_15, VAR_19 & 0xff);
  FUNC_7(VAR_15, VAR_19 >> 8);
  FUNC_7(VAR_15, VAR_8);
 } else {
  VAR_19--;
  FUNC_7(VAR_15, VAR_3);
  FUNC_7(VAR_15, VAR_17);
  FUNC_7(VAR_15, VAR_19 & 0xff);
  FUNC_7(VAR_15, VAR_19 >> 8);
  FUNC_7(VAR_15, VAR_9);
 }
 FUNC_9(&VAR_15->reg_lock, VAR_14);
 return 0;
}
