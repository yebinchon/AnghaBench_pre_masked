
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int rate; int format; } ;
struct snd_emu10k1_voice {int number; TYPE_1__* epcm; } ;
struct snd_emu10k1_pcm_mixer {int ** send_volume; int ** send_routing; } ;
struct TYPE_6__ {scalar_t__ addr; } ;
struct snd_emu10k1 {int reg_lock; TYPE_3__ silent_page; TYPE_2__* card_capabilities; scalar_t__ audigy; } ;
typedef int send_routing ;
typedef int send_amount ;
struct TYPE_5__ {scalar_t__ emu_model; } ;
struct TYPE_4__ {unsigned int ccca_start_addr; struct snd_pcm_substream* substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 unsigned int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 unsigned int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int,int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned char*,int *,int) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 (unsigned char*) ;
 int FUNC_7 (unsigned char*) ;
 int FUNC_8 (struct snd_emu10k1*,int ,int,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_12(struct snd_emu10k1 *VAR_31,
           int VAR_32, int VAR_33,
           struct snd_emu10k1_voice *VAR_34,
           unsigned int VAR_35,
           unsigned int VAR_36,
           struct snd_emu10k1_pcm_mixer *VAR_37)
{
 struct snd_pcm_substream *VAR_38 = VAR_34->epcm->substream;
 struct snd_pcm_runtime *VAR_39 = VAR_38->runtime;
 unsigned int VAR_40, VAR_41;
 int VAR_42, VAR_43, VAR_44;
 unsigned char VAR_45, VAR_46[8];
 unsigned char VAR_47[8];
 unsigned long VAR_48;
 unsigned int VAR_49;
 unsigned int VAR_50;

 VAR_42 = VAR_34->number;
 VAR_43 = VAR_39->channels == 2;
 VAR_44 = FUNC_9(VAR_39->format) == 16;

 if (!VAR_33 && VAR_43) {
  VAR_35 >>= 1;
  VAR_36 >>= 1;
 }
 if (VAR_44) {
  VAR_35 >>= 1;
  VAR_36 >>= 1;
 }

 FUNC_10(&VAR_31->reg_lock, VAR_48);


 if (VAR_33) {
  VAR_45 = 0;
  FUNC_4(VAR_47, 0, sizeof(VAR_47));
  VAR_47[0] = 0;
  VAR_47[1] = 1;
  VAR_47[2] = 2;
  VAR_47[3] = 3;
  FUNC_4(VAR_46, 0, sizeof(VAR_46));
 } else {

  VAR_41 = VAR_43 ? (VAR_32 ? 1 : 2) : 0;
  FUNC_3(VAR_47, &VAR_37->send_routing[VAR_41][0], 8);
  FUNC_3(VAR_46, &VAR_37->send_volume[VAR_41][0], 8);
 }

 VAR_50 = FUNC_1(VAR_43, VAR_44);

 if (VAR_32) {
  VAR_34->epcm->ccca_start_addr = VAR_35 + VAR_50;
  if (VAR_33) {
   VAR_35 += VAR_50;
   VAR_36 += VAR_50;
  }
  if (VAR_43 && !VAR_33) {
   FUNC_8(VAR_31, VAR_7, VAR_42, VAR_8);
   FUNC_8(VAR_31, VAR_7, (VAR_42 + 1), VAR_8);
  } else {
   FUNC_8(VAR_31, VAR_7, VAR_42, 0);
  }
 }


 if (VAR_31->audigy) {
  FUNC_8(VAR_31, VAR_2, VAR_42,
          FUNC_5(VAR_47));
  FUNC_8(VAR_31, VAR_3, VAR_42,
          FUNC_6(VAR_47));
  FUNC_8(VAR_31, VAR_4, VAR_42,
          ((unsigned int)VAR_46[4] << 24) |
          ((unsigned int)VAR_46[5] << 16) |
          ((unsigned int)VAR_46[6] << 8) |
          (unsigned int)VAR_46[7]);
 } else
  FUNC_8(VAR_31, VAR_16, VAR_42,
          FUNC_7(VAR_47));


 FUNC_8(VAR_31, VAR_26, VAR_42, (VAR_46[0] << 8) | VAR_46[1]);
 FUNC_8(VAR_31, VAR_11, VAR_42, VAR_36 | (VAR_46[3] << 24));
 FUNC_8(VAR_31, VAR_25, VAR_42, VAR_35 | (VAR_46[2] << 24));
 if (VAR_31->card_capabilities->emu_model)
  VAR_49 = VAR_24;
 else
  VAR_49 = FUNC_0(VAR_39->rate);
 if (VAR_33)
  FUNC_8(VAR_31, VAR_5, VAR_42, VAR_35 |
         FUNC_2(VAR_49) |
         (VAR_44 ? 0 : VAR_6));
 else
  FUNC_8(VAR_31, VAR_5, VAR_42, (VAR_35 + VAR_50) |
         FUNC_2(VAR_49) |
         (VAR_44 ? 0 : VAR_6));

 FUNC_8(VAR_31, VAR_29, VAR_42, 0);
 FUNC_8(VAR_31, VAR_30, VAR_42, 0);

 VAR_40 = ((unsigned int)VAR_31->silent_page.addr << 1) | VAR_21;
 FUNC_8(VAR_31, VAR_19, VAR_42, VAR_40);
 FUNC_8(VAR_31, VAR_20, VAR_42, VAR_40);

 FUNC_8(VAR_31, VAR_9, VAR_42, 0xffff);
 FUNC_8(VAR_31, VAR_28, VAR_42, 0xffff);
 FUNC_8(VAR_31, VAR_0, VAR_42, 0);
 FUNC_8(VAR_31, VAR_10, VAR_42, 0x007f);
 FUNC_8(VAR_31, VAR_17, VAR_42, 0x8000);
 FUNC_8(VAR_31, VAR_18, VAR_42, 0x8000);
 FUNC_8(VAR_31, VAR_15, VAR_42, 0);
 FUNC_8(VAR_31, VAR_27, VAR_42, 0);
 FUNC_8(VAR_31, VAR_14, VAR_42, 0);
 FUNC_8(VAR_31, VAR_12, VAR_42, 0x8000);

 FUNC_8(VAR_31, VAR_1, VAR_42, 0x7f7f);
 FUNC_8(VAR_31, VAR_13, VAR_42, 0x0000);

 FUNC_8(VAR_31, VAR_22, VAR_42, 0x7f);

 FUNC_8(VAR_31, VAR_23, VAR_42, 0);

 FUNC_11(&VAR_31->reg_lock, VAR_48);
}
