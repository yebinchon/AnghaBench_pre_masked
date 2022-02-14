
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int dummy; } ;
struct emu_pcm_info {unsigned int** emu10k1_volcache; int dev; int * sm; int card; int is_emu10k1; int mch_disabled; int route; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,int ,int) ;
 struct emu_pcm_info* FUNC_2 (struct snd_mixer*) ;
 int FUNC_3 (int *,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_4(struct snd_mixer *VAR_22, unsigned VAR_23, unsigned VAR_24, unsigned VAR_25)
{
 struct emu_pcm_info *VAR_26;

 VAR_26 = FUNC_2(VAR_22);

 switch (VAR_23) {
 case 128:
  switch (VAR_26->route) {
  case 137:
   if (VAR_26->sm != ((void*)0))
    FUNC_3(VAR_26->sm, VAR_23, VAR_24, VAR_25);
   if (VAR_26->mch_disabled) {




    if (VAR_26->is_emu10k1) {
     VAR_26->emu10k1_volcache[0][0] = VAR_24;
     VAR_24 = VAR_24 * VAR_26->emu10k1_volcache[1][0] / 100;
     VAR_26->emu10k1_volcache[0][1] = VAR_25;
     VAR_25 = VAR_25 * VAR_26->emu10k1_volcache[1][1] / 100;
    }

    FUNC_1(VAR_26->card, VAR_19, VAR_24);
    FUNC_1(VAR_26->card, VAR_20, VAR_25);
    if (!VAR_26->is_emu10k1) {
     FUNC_1(VAR_26->card, VAR_18, (VAR_24+VAR_25)/2);
     FUNC_1(VAR_26->card, VAR_21, (VAR_24+VAR_25)/2);

    }
   }
   break;
  case 136:
   FUNC_1(VAR_26->card, VAR_19, VAR_24);
   FUNC_1(VAR_26->card, VAR_20, VAR_25);
   break;
  case 138:
   FUNC_1(VAR_26->card, VAR_18, (VAR_24+VAR_25)/2);
   break;
  case 135:
   FUNC_1(VAR_26->card, VAR_21, (VAR_24+VAR_25)/2);
   break;
  }
  break;
 case 129:
  switch (VAR_26->route) {
  case 137:
   if (VAR_26->sm != ((void*)0))
    FUNC_3(VAR_26->sm, VAR_23, VAR_24, VAR_25);
   if (VAR_26->mch_disabled) {

    if (VAR_26->is_emu10k1) {
     VAR_26->emu10k1_volcache[1][0] = VAR_24;
     VAR_24 = VAR_24 * VAR_26->emu10k1_volcache[0][0] / 100;
     VAR_26->emu10k1_volcache[1][1] = VAR_25;
     VAR_25 = VAR_25 * VAR_26->emu10k1_volcache[0][1] / 100;
    }
    FUNC_1(VAR_26->card, VAR_19, VAR_24);
    FUNC_1(VAR_26->card, VAR_20, VAR_25);

    if (!VAR_26->is_emu10k1) {
     FUNC_1(VAR_26->card, VAR_18, (VAR_24+VAR_25)/2);
     FUNC_1(VAR_26->card, VAR_21, (VAR_24+VAR_25)/2);

    }
   }
   break;
  case 136:
   FUNC_1(VAR_26->card, VAR_0, VAR_24);
   FUNC_1(VAR_26->card, VAR_1, VAR_25);
   break;
  case 138:
   FUNC_1(VAR_26->card, VAR_2, (VAR_24+VAR_25)/2);
   break;
  case 135:
   FUNC_1(VAR_26->card, VAR_3, (VAR_24+VAR_25)/2);
   break;
  }
  break;
 case 134:
   FUNC_1(VAR_26->card, VAR_6, VAR_24);
   FUNC_1(VAR_26->card, VAR_7, VAR_25);
  break;
 case 133:
   if (VAR_26->is_emu10k1) {

    FUNC_1(VAR_26->card, VAR_10, VAR_24);
    FUNC_1(VAR_26->card, VAR_11, VAR_25);
   } else {

    FUNC_1(VAR_26->card, VAR_8, VAR_24);
    FUNC_1(VAR_26->card, VAR_9, VAR_25);
   }
  break;
 case 131:
   FUNC_1(VAR_26->card, VAR_12, VAR_24);
   FUNC_1(VAR_26->card, VAR_13, VAR_25);
  break;
 case 132:
   FUNC_1(VAR_26->card, VAR_14, VAR_24);
   FUNC_1(VAR_26->card, VAR_15, VAR_25);
  break;
 case 130:
   FUNC_1(VAR_26->card, VAR_16, VAR_24);
   FUNC_1(VAR_26->card, VAR_17, VAR_25);
  break;
 default:
  if (VAR_26->sm != ((void*)0)) {

   FUNC_1(VAR_26->card, VAR_4, 100);
   FUNC_1(VAR_26->card, VAR_5, 100);
   FUNC_3(VAR_26->sm, VAR_23, VAR_24, VAR_25);
  } else
   FUNC_0(VAR_26->dev, "mixer error: unknown device %d\n", VAR_23);
 }
 return (0);
}
