
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int rate; } ;
struct snd_emu10k1_voice {unsigned int number; TYPE_2__* epcm; } ;
struct snd_emu10k1 {TYPE_1__* card_capabilities; } ;
struct TYPE_4__ {scalar_t__ type; struct snd_pcm_substream* substream; } ;
struct TYPE_3__ {scalar_t__ emu_model; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_emu10k1*,int ,unsigned int,unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct snd_emu10k1*,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct snd_emu10k1 *VAR_5, struct snd_emu10k1_voice *VAR_6, int VAR_7, int VAR_8)
{
 struct snd_pcm_substream *VAR_9;
 struct snd_pcm_runtime *VAR_10;
 unsigned int VAR_11, VAR_12, VAR_13;

 if (VAR_6 == ((void*)0))
  return;
 VAR_9 = VAR_6->epcm->substream;
 VAR_10 = VAR_9->runtime;
 VAR_11 = VAR_6->number;

 VAR_12 = FUNC_2(VAR_10->rate) >> 8;
 if (VAR_5->card_capabilities->emu_model)
  VAR_13 = VAR_2;
 else
  VAR_13 = FUNC_0(VAR_10->rate);
 FUNC_1(VAR_5, VAR_4, VAR_11, VAR_13);
 if (VAR_7 || VAR_6->epcm->type == VAR_3)
  FUNC_1(VAR_5, VAR_0, VAR_11, VAR_13);
 FUNC_1(VAR_5, VAR_1, VAR_11, VAR_12);
 if (VAR_8)
  FUNC_3(VAR_5, VAR_11);
}
