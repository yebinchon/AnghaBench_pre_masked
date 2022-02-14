
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_ymfpci_pcm {TYPE_2__** voices; TYPE_1__* chip; } ;
struct TYPE_6__ {int number; struct snd_ymfpci_pcm* ypcm; int interrupt; } ;
struct TYPE_5__ {TYPE_2__* voices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int,TYPE_2__**) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct snd_ymfpci_pcm *VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_2->voices[1] != ((void*)0) && VAR_3 < 2) {
  FUNC_1(VAR_2->chip, VAR_2->voices[1]);
  VAR_2->voices[1] = ((void*)0);
 }
 if (VAR_3 == 1 && VAR_2->voices[0] != ((void*)0))
  return 0;
 if (VAR_3 == 2 && VAR_2->voices[0] != ((void*)0) && VAR_2->voices[1] != ((void*)0))
  return 0;
 if (VAR_3 > 1) {
  if (VAR_2->voices[0] != ((void*)0) && VAR_2->voices[1] == ((void*)0)) {
   FUNC_1(VAR_2->chip, VAR_2->voices[0]);
   VAR_2->voices[0] = ((void*)0);
  }
 }
 VAR_4 = FUNC_0(VAR_2->chip, VAR_0, VAR_3 > 1, &VAR_2->voices[0]);
 if (VAR_4 < 0)
  return VAR_4;
 VAR_2->voices[0]->ypcm = VAR_2;
 VAR_2->voices[0]->interrupt = VAR_1;
 if (VAR_3 > 1) {
  VAR_2->voices[1] = &VAR_2->chip->voices[VAR_2->voices[0]->number + 1];
  VAR_2->voices[1]->ypcm = VAR_2;
 }
 return 0;
}
