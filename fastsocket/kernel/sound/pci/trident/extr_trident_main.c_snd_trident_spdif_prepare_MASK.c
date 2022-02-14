
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_trident_voice {int Delta; unsigned int LBA; int isync; int isync3; int isync_mark; int isync_max; int ESO; int isync_ESO; int FMC; int RVol; int CVol; int GVSel; int Pan; int Vol; int CSO; int Attribute; int isync2; scalar_t__ FMS; scalar_t__ Alpha; scalar_t__ EC; void* CTRL; void* spurious_threshold; TYPE_1__* memblk; struct snd_trident_voice* extra; } ;
struct snd_trident_pcm_mixer {int vol; int rvol; int cvol; int pan; } ;
struct snd_trident {scalar_t__ device; int spdif_pcm_ctrl; unsigned int spdif_pcm_bits; int reg_lock; struct snd_trident_pcm_mixer* pcm_mixer; } ;
struct snd_pcm_substream {size_t number; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int rate; int period_size; unsigned int dma_addr; int buffer_size; struct snd_trident_voice* private_data; } ;
struct TYPE_2__ {unsigned int offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct snd_trident*,scalar_t__) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (int,int ) ;
 struct snd_trident* FUNC_5 (struct snd_pcm_substream*) ;
 void* FUNC_6 (struct snd_pcm_substream*) ;
 int FUNC_7 (int) ;
 void* FUNC_8 (int,int) ;
 int FUNC_9 (struct snd_trident*,struct snd_trident_voice*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct snd_pcm_substream *VAR_9)
{
 struct snd_trident *VAR_10 = FUNC_5(VAR_9);
 struct snd_pcm_runtime *VAR_11 = VAR_9->runtime;
 struct snd_trident_voice *VAR_12 = VAR_11->private_data;
 struct snd_trident_voice *VAR_13 = VAR_12->extra;
 struct snd_trident_pcm_mixer *VAR_14 = &VAR_10->pcm_mixer[VAR_9->number];
 unsigned int VAR_15, VAR_16;
 unsigned int VAR_17;

 FUNC_10(&VAR_10->reg_lock);

 if (VAR_10->device != VAR_8) {


  VAR_12->Delta = FUNC_7(VAR_11->rate);
  VAR_12->spurious_threshold = FUNC_8(VAR_11->rate, VAR_11->period_size);


  VAR_16 = VAR_11->dma_addr;
  if (VAR_12->memblk)
   VAR_12->LBA = VAR_12->memblk->offset;
  else
   VAR_12->LBA = VAR_16;

  VAR_12->isync = 1;
  VAR_12->isync3 = 1;
  VAR_12->isync_mark = VAR_11->period_size;
  VAR_12->isync_max = VAR_11->buffer_size;


  VAR_15 = VAR_11->buffer_size - 1;
  VAR_12->ESO = VAR_12->isync_ESO = (VAR_11->period_size * 2) + 6 - 1;


  VAR_12->CTRL = FUNC_6(VAR_9);

  VAR_12->FMC = 3;
  VAR_12->RVol = 0x7f;
  VAR_12->CVol = 0x7f;
  VAR_12->GVSel = 1;
  VAR_12->Pan = 0x7f;
  VAR_12->Vol = 0x3ff;
  VAR_12->EC = 0;
  VAR_12->CSO = 0;
  VAR_12->Alpha = 0;
  VAR_12->FMS = 0;
  VAR_12->Attribute = 0;


  FUNC_9(VAR_10, VAR_12);

  FUNC_4((VAR_15 & 0xffff), FUNC_0(VAR_10, VAR_2));
  FUNC_2((VAR_15 >> 16), FUNC_0(VAR_10, VAR_2 + 2));
  FUNC_3((VAR_16 & 0xfffffffc), FUNC_0(VAR_10, VAR_3));
  FUNC_4((VAR_12->CSO & 0xffff), FUNC_0(VAR_10, VAR_1));
  FUNC_2((VAR_12->CSO >> 16), FUNC_0(VAR_10, VAR_1 + 2));


  FUNC_2(VAR_10->spdif_pcm_ctrl, FUNC_0(VAR_10, VAR_1 + 3));
  FUNC_3(VAR_10->spdif_pcm_bits, FUNC_0(VAR_10, VAR_0));

 } else {


  VAR_12->Delta = 0x800;
  VAR_12->spurious_threshold = FUNC_8(48000, VAR_11->period_size);


  if (VAR_12->memblk)
   VAR_12->LBA = VAR_12->memblk->offset;
  else
   VAR_12->LBA = VAR_11->dma_addr;

  VAR_12->CSO = 0;
  VAR_12->ESO = VAR_11->buffer_size - 1;
  VAR_12->CTRL = FUNC_6(VAR_9);
  VAR_12->FMC = 3;
  VAR_12->GVSel = 1;
  VAR_12->EC = 0;
  VAR_12->Alpha = 0;
  VAR_12->FMS = 0;
  VAR_12->Vol = VAR_14->vol;
  VAR_12->RVol = VAR_14->rvol;
  VAR_12->CVol = VAR_14->cvol;
  VAR_12->Pan = VAR_14->pan;
  VAR_12->Attribute = (1<<(30-16))|(7<<(26-16))|
       (0<<(24-16))|(0<<(19-16));

  FUNC_9(VAR_10, VAR_12);

  if (VAR_13 != ((void*)0)) {
   VAR_13->Delta = VAR_12->Delta;
   VAR_13->spurious_threshold = VAR_12->spurious_threshold;
   VAR_13->LBA = VAR_12->LBA;
   VAR_13->CSO = 0;
   VAR_13->ESO = (VAR_11->period_size * 2) + 4 - 1;
   VAR_13->CTRL = VAR_12->CTRL;
   VAR_13->FMC = 3;
   VAR_13->GVSel = VAR_10->device == VAR_8 ? 0 : 1;
   VAR_13->EC = 0;
   VAR_13->Alpha = 0;
   VAR_13->FMS = 0;
   VAR_13->Vol = 0x3ff;
   VAR_13->RVol = VAR_13->CVol = 0x7f;
   VAR_13->Pan = 0x7f;
   VAR_13->Attribute = 0;
   FUNC_9(VAR_10, VAR_13);
   VAR_13->isync2 = 1;
   VAR_13->isync_mark = VAR_11->period_size;
   VAR_13->ESO = (VAR_11->period_size * 2) - 1;
  }

  FUNC_3(VAR_10->spdif_pcm_bits, FUNC_0(VAR_10, VAR_5));
  VAR_17 = FUNC_1(FUNC_0(VAR_10, VAR_7));
  VAR_17 &= ~(1<<19);
  FUNC_3(VAR_17, FUNC_0(VAR_10, VAR_7));
  VAR_17 = FUNC_1(FUNC_0(VAR_10, VAR_4));
  VAR_17 |= VAR_6;
  FUNC_3(VAR_17, FUNC_0(VAR_10, VAR_4));
 }

 FUNC_11(&VAR_10->reg_lock);

 return 0;
}
