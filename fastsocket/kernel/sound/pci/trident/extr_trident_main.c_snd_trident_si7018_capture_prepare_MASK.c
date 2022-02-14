
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_trident_voice {int ESO; int FMC; int RVol; int CVol; int GVSel; int Pan; int Vol; int Attribute; int isync2; int isync_mark; scalar_t__ FMS; scalar_t__ Alpha; scalar_t__ EC; int CTRL; scalar_t__ CSO; int LBA; int spurious_threshold; int Delta; struct snd_trident_voice* extra; } ;
struct snd_trident {int reg_lock; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int period_size; int buffer_size; int rate; int dma_addr; struct snd_trident_voice* private_data; } ;


 int VAR_0 ;
 struct snd_trident* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct snd_trident*,struct snd_trident_voice*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_1)
{
 struct snd_trident *VAR_2 = FUNC_0(VAR_1);
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 struct snd_trident_voice *VAR_4 = VAR_3->private_data;
 struct snd_trident_voice *VAR_5 = VAR_4->extra;

 FUNC_6(&VAR_2->reg_lock);

 VAR_4->LBA = VAR_3->dma_addr;
 VAR_4->Delta = FUNC_2(VAR_3->rate);
 VAR_4->spurious_threshold = FUNC_4(VAR_3->rate, VAR_3->period_size);


 VAR_4->CSO = 0;
 VAR_4->ESO = VAR_3->buffer_size - 1;
 VAR_4->CTRL = FUNC_1(VAR_1);
 VAR_4->FMC = 0;
 VAR_4->RVol = 0;
 VAR_4->CVol = 0;
 VAR_4->GVSel = 1;
 VAR_4->Pan = VAR_0;
 VAR_4->Vol = 0;
 VAR_4->EC = 0;
 VAR_4->Alpha = 0;
 VAR_4->FMS = 0;

 VAR_4->Attribute = (2 << (30-16)) |
      (2 << (26-16)) |
      (2 << (24-16)) |
      (1 << (23-16));

 FUNC_5(VAR_2, VAR_4);

 if (VAR_5 != ((void*)0)) {
  VAR_5->Delta = FUNC_3(VAR_3->rate);
  VAR_5->spurious_threshold = VAR_4->spurious_threshold;
  VAR_5->LBA = VAR_4->LBA;
  VAR_5->CSO = 0;
  VAR_5->ESO = (VAR_3->period_size * 2) + 20 - 1;
  VAR_5->CTRL = VAR_4->CTRL;
  VAR_5->FMC = 3;
  VAR_5->GVSel = 0;
  VAR_5->EC = 0;
  VAR_5->Alpha = 0;
  VAR_5->FMS = 0;
  VAR_5->Vol = 0x3ff;
  VAR_5->RVol = VAR_5->CVol = 0x7f;
  VAR_5->Pan = 0x7f;
  VAR_5->Attribute = 0;
  FUNC_5(VAR_2, VAR_5);
  VAR_5->isync2 = 1;
  VAR_5->isync_mark = VAR_3->period_size;
  VAR_5->ESO = (VAR_3->period_size * 2) - 1;
 }

 FUNC_7(&VAR_2->reg_lock);
 return 0;
}
