
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; unsigned int dma_addr; int buffer_size; unsigned int period_size; int rate; int format; } ;
struct cmipci_pcm {int fmt; int shift; unsigned int offset; int dma_size; int ch; scalar_t__ running; scalar_t__ is_dac; } ;
struct cmipci {unsigned int ctrl; int reg_lock; scalar_t__ chip_version; scalar_t__ can_96k; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_0 (struct cmipci*,struct cmipci_pcm*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct cmipci*,int ,int ) ;
 unsigned int FUNC_3 (int) ;
 unsigned int FUNC_4 (struct cmipci*,unsigned int) ;
 int FUNC_5 (struct cmipci*,int ,int ) ;
 int FUNC_6 (struct cmipci*,unsigned int,unsigned int) ;
 int FUNC_7 (struct cmipci*,unsigned int,unsigned int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct cmipci *VAR_24, struct cmipci_pcm *VAR_25,
     struct snd_pcm_substream *VAR_26)
{
 unsigned int VAR_27, VAR_28, VAR_29, VAR_30;
 unsigned int VAR_31;
 struct snd_pcm_runtime *VAR_32 = VAR_26->runtime;

 VAR_25->fmt = 0;
 VAR_25->shift = 0;
 if (FUNC_8(VAR_32->format) >= 16) {
  VAR_25->fmt |= 0x02;
  if (FUNC_8(VAR_32->format) > 16)
   VAR_25->shift++;
 }
 if (VAR_32->channels > 1)
  VAR_25->fmt |= 0x01;
 if (VAR_25->is_dac && FUNC_0(VAR_24, VAR_25, VAR_32->channels) < 0) {
  FUNC_9("cannot set dac channels\n");
  return -VAR_23;
 }

 VAR_25->offset = VAR_32->dma_addr;

 VAR_25->dma_size = VAR_32->buffer_size << VAR_25->shift;
 VAR_31 = VAR_32->period_size << VAR_25->shift;
 if (VAR_32->channels > 2) {

  VAR_25->dma_size = (VAR_25->dma_size * VAR_32->channels) / 2;
  VAR_31 = (VAR_31 * VAR_32->channels) / 2;
 }

 FUNC_10(&VAR_24->reg_lock);


 VAR_27 = VAR_25->ch ? VAR_17 : VAR_15;
 FUNC_6(VAR_24, VAR_27, VAR_25->offset);

 VAR_27 = VAR_25->ch ? VAR_18 : VAR_16;
 FUNC_7(VAR_24, VAR_27, VAR_25->dma_size - 1);
 FUNC_7(VAR_24, VAR_27 + 2, VAR_31 - 1);


 VAR_30 = VAR_25->ch ? VAR_12 : VAR_11;
 if (VAR_25->is_dac)
  VAR_24->ctrl &= ~VAR_30;
 else
  VAR_24->ctrl |= VAR_30;
 FUNC_6(VAR_24, VAR_21, VAR_24->ctrl);



 VAR_28 = 0;
 VAR_29 = 0;
 if (VAR_32->rate > 48000)
  switch (VAR_32->rate) {
  case 88200: VAR_29 = VAR_6; break;
  case 96000: VAR_29 = VAR_7; break;
  case 128000: VAR_29 = VAR_5; break;
  default: FUNC_1(); break;
  }
 else
  VAR_28 = FUNC_3(VAR_32->rate);
 VAR_30 = FUNC_4(VAR_24, VAR_22);
 if (VAR_25->ch) {
  VAR_30 &= ~VAR_13;
  VAR_30 |= (VAR_28 << VAR_14) & VAR_13;
 } else {
  VAR_30 &= ~VAR_1;
  VAR_30 |= (VAR_28 << VAR_2) & VAR_1;
 }
 FUNC_6(VAR_24, VAR_22, VAR_30);



 VAR_30 = FUNC_4(VAR_24, VAR_19);
 if (VAR_25->ch) {
  VAR_30 &= ~VAR_9;
  VAR_30 |= VAR_25->fmt << VAR_10;
 } else {
  VAR_30 &= ~VAR_3;
  VAR_30 |= VAR_25->fmt << VAR_4;
 }
 if (VAR_24->can_96k) {
  VAR_30 &= ~(VAR_8 << (VAR_25->ch * 2));
  VAR_30 |= VAR_29 << (VAR_25->ch * 2);
 }
 FUNC_6(VAR_24, VAR_19, VAR_30);


 if (!VAR_25->is_dac && VAR_24->chip_version) {
  if (VAR_32->rate > 44100)
   FUNC_5(VAR_24, VAR_20, VAR_0);
  else
   FUNC_2(VAR_24, VAR_20, VAR_0);
 }

 VAR_25->running = 0;
 FUNC_11(&VAR_24->reg_lock);

 return 0;
}
