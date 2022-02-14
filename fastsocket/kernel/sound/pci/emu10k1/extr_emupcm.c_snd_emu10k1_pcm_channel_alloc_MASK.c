
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_emu10k1_pcm {scalar_t__ type; TYPE_2__* extra; TYPE_2__** voices; TYPE_1__* emu; } ;
struct TYPE_7__ {int number; int interrupt; struct snd_emu10k1_pcm* epcm; } ;
struct TYPE_6__ {TYPE_2__* voices; } ;


 int FUNC_0 (TYPE_2__**) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ,int,TYPE_2__**) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(struct snd_emu10k1_pcm * VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;

 if (VAR_4->voices[1] != ((void*)0) && VAR_5 < 2) {
  FUNC_2(VAR_4->emu, VAR_4->voices[1]);
  VAR_4->voices[1] = ((void*)0);
 }
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  if (VAR_4->voices[VAR_7] == ((void*)0))
   break;
 }
 if (VAR_7 == VAR_5)
  return 0;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4->voices); VAR_7++) {
  if (VAR_4->voices[VAR_7]) {
   FUNC_2(VAR_4->emu, VAR_4->voices[VAR_7]);
   VAR_4->voices[VAR_7] = ((void*)0);
  }
 }
 VAR_6 = FUNC_1(VAR_4->emu,
          VAR_4->type == VAR_2 ? VAR_1 : VAR_0,
          VAR_5,
          &VAR_4->voices[0]);

 if (VAR_6 < 0)
  return VAR_6;
 VAR_4->voices[0]->epcm = VAR_4;
 if (VAR_5 > 1) {
  for (VAR_7 = 1; VAR_7 < VAR_5; VAR_7++) {
   VAR_4->voices[VAR_7] = &VAR_4->emu->voices[VAR_4->voices[0]->number + VAR_7];
   VAR_4->voices[VAR_7]->epcm = VAR_4;
  }
 }
 if (VAR_4->extra == ((void*)0)) {
  VAR_6 = FUNC_1(VAR_4->emu,
           VAR_4->type == VAR_2 ? VAR_1 : VAR_0,
           1,
           &VAR_4->extra);
  if (VAR_6 < 0) {





   for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
    FUNC_2(VAR_4->emu, VAR_4->voices[VAR_7]);
    VAR_4->voices[VAR_7] = ((void*)0);
   }
   return VAR_6;
  }
  VAR_4->extra->epcm = VAR_4;
  VAR_4->extra->interrupt = VAR_3;
 }
 return 0;
}
