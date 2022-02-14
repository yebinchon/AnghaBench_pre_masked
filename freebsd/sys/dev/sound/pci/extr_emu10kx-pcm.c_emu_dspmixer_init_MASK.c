
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_mixer {int dummy; } ;
struct emu_pcm_info {scalar_t__ route; int ac97_playdevs; int ac97_recdevs; scalar_t__ is_emu10k1; int * sm; int * codec; int * ac97_mixerclass; int dev; } ;
struct TYPE_4__ {scalar_t__ recdev; scalar_t__ present; } ;
struct TYPE_3__ {scalar_t__ recdev; scalar_t__ present; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 struct emu_pcm_info* FUNC_0 (struct snd_mixer*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_mixer*,int) ;
 int FUNC_4 (struct snd_mixer*,int) ;
 int * FUNC_5 (int ,int *,int *,char*) ;

__attribute__((used)) static int
FUNC_6(struct snd_mixer *VAR_6)
{
 struct emu_pcm_info *VAR_7;
 int VAR_8;
 int VAR_9, VAR_10;

 VAR_9 = 0;
 VAR_10 = 0;

 VAR_7 = FUNC_0(VAR_6);

 if (VAR_7->route == VAR_0) {

  if ((VAR_7->ac97_mixerclass != ((void*)0)) && (VAR_7->codec != ((void*)0))) {
   VAR_7->sm = FUNC_5(VAR_7->dev, VAR_7->ac97_mixerclass, VAR_7->codec, "ac97");
   if (VAR_7->sm != ((void*)0)) {
    VAR_9 = FUNC_1(VAR_7->sm);
    VAR_10 = FUNC_2(VAR_7->sm);
   }
  }

  VAR_7->ac97_playdevs = VAR_9;
  VAR_7->ac97_recdevs = VAR_10;
 }


 VAR_9 |= (1 << VAR_2);
 VAR_9 |= (1 << VAR_3);

 if (VAR_7->route == VAR_0) {
  if (VAR_7->is_emu10k1) {
   for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
    if (VAR_4[VAR_8].present)
     VAR_9 |= (1 << VAR_8);
    if (VAR_4[VAR_8].recdev)
     VAR_10 |= (1 << VAR_8);
   }
  } else {
   for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
    if (VAR_5[VAR_8].present)
     VAR_9 |= (1 << VAR_8);
    if (VAR_5[VAR_8].recdev)
     VAR_10 |= (1 << VAR_8);
   }
  }
 }

 FUNC_3(VAR_6, VAR_9);
 FUNC_4(VAR_6, VAR_10);

 return (0);
}
