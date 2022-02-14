
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_runtime {int channels; scalar_t__ buffer_size; scalar_t__ period_size; unsigned int dma_addr; int rate; int format; } ;
struct cs4281_dma {int valDMR; int valDCR; scalar_t__ regDBA; scalar_t__ regDBC; int left_slot; int right_slot; scalar_t__ regFCR; int valFCR; scalar_t__ regFSIC; int fifo_offset; scalar_t__ frag; } ;
struct cs4281 {int src_left_play_slot; int src_right_play_slot; int src_left_rec_slot; int src_right_rec_slot; TYPE_1__* dma; } ;
struct TYPE_2__ {int valDMR; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 unsigned int VAR_16 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 unsigned int VAR_17 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_4 (int) ;
 unsigned int FUNC_5 (struct cs4281*,scalar_t__) ;
 int FUNC_6 (struct cs4281*,scalar_t__,unsigned int) ;
 unsigned int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct cs4281 *VAR_20, struct cs4281_dma *VAR_21,
       struct snd_pcm_runtime *VAR_22,
       int VAR_23, int VAR_24)
{
 int VAR_25;

 VAR_21->valDMR = VAR_13 | VAR_5 |
        (VAR_23 ? VAR_12 : VAR_11);
 if (VAR_22->channels == 1)
  VAR_21->valDMR |= VAR_7;
 if (FUNC_9(VAR_22->format) > 0)
  VAR_21->valDMR |= VAR_14;
 if (FUNC_8(VAR_22->format) > 0)
  VAR_21->valDMR |= VAR_6;
 switch (FUNC_10(VAR_22->format)) {
 case 8: VAR_21->valDMR |= VAR_9;
  if (VAR_22->channels == 1)
   VAR_21->valDMR |= VAR_10;
  break;
 case 32: VAR_21->valDMR |= VAR_8; break;
 }
 VAR_21->frag = 0;
 VAR_21->valDCR = VAR_4 | VAR_3;
 if (VAR_22->buffer_size != VAR_22->period_size)
  VAR_21->valDCR |= VAR_2;

 FUNC_6(VAR_20, VAR_21->regDBA, VAR_22->dma_addr);
 FUNC_6(VAR_20, VAR_21->regDBC, VAR_22->buffer_size - 1);
 VAR_25 = (VAR_20->dma[1].valDMR & VAR_7) == VAR_7;
 FUNC_6(VAR_20, VAR_18, (VAR_20->src_left_play_slot << 0) |
         (VAR_20->src_right_play_slot << 8) |
         (VAR_20->src_left_rec_slot << 16) |
         ((VAR_25 ? 31 : VAR_20->src_right_rec_slot) << 24));
 if (!VAR_24)
  goto __skip_src;
 if (!VAR_23) {
  if (VAR_21->left_slot == VAR_20->src_left_play_slot) {
   unsigned int VAR_26 = FUNC_7(VAR_22->rate, ((void*)0));
   FUNC_4(VAR_21->right_slot != VAR_20->src_right_play_slot);
   FUNC_6(VAR_20, VAR_1, VAR_26);
  }
 } else {
  if (VAR_21->left_slot == VAR_20->src_left_rec_slot) {
   unsigned int VAR_27 = FUNC_7(VAR_22->rate, ((void*)0));
   FUNC_4(VAR_21->right_slot != VAR_20->src_right_rec_slot);
   FUNC_6(VAR_20, VAR_0, VAR_27);
  }
 }
      __skip_src:

 if (VAR_21->regFCR == VAR_15)
  FUNC_6(VAR_20, VAR_21->regFCR, FUNC_5(VAR_20, VAR_21->regFCR) & ~VAR_16);

 VAR_21->valFCR = FUNC_0(VAR_21->left_slot) |
        FUNC_2(VAR_23 && (VAR_21->valDMR & VAR_7) ? 31 : VAR_21->right_slot) |
        FUNC_3(VAR_19) |
        FUNC_1(VAR_21->fifo_offset);
 FUNC_6(VAR_20, VAR_21->regFCR, VAR_21->valFCR | (VAR_23 ? VAR_17 : 0));

 if (VAR_21->regFCR == VAR_15)
  FUNC_6(VAR_20, VAR_21->regFCR, VAR_21->valFCR | VAR_16);

 FUNC_6(VAR_20, VAR_21->regFSIC, 0);
}
