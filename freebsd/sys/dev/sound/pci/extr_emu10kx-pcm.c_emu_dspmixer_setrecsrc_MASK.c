
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int32_t ;
struct snd_mixer {int dummy; } ;
struct emu_pcm_info {int ac97_recdevs; int card; scalar_t__ is_emu10k1; int * sm; } ;
struct TYPE_4__ {size_t input; scalar_t__ recdev; } ;
struct TYPE_3__ {size_t input; scalar_t__ recdev; } ;


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
 TYPE_2__* VAR_20 ;
 TYPE_1__* VAR_21 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct emu_pcm_info* FUNC_2 (struct snd_mixer*) ;
 scalar_t__ FUNC_3 (int *,int) ;

__attribute__((used)) static u_int32_t
FUNC_4(struct snd_mixer *VAR_22, u_int32_t VAR_23)
{
 struct emu_pcm_info *VAR_24;
 int VAR_25;
 u_int32_t VAR_26;
 int VAR_27[8];

 VAR_24 = FUNC_2(VAR_22);
 VAR_26 = 0;
 for (VAR_25=0; VAR_25 < 8; VAR_25++)
  VAR_27[VAR_25]=0;

 if (VAR_24->sm != ((void*)0))
  if ((VAR_23 & VAR_24->ac97_recdevs) !=0)
   if (FUNC_3(VAR_24->sm, VAR_23 & VAR_24->ac97_recdevs) == 0) {
    VAR_26 |= (VAR_23 & VAR_24->ac97_recdevs);


    VAR_27[0] = 1;
   }
 if (VAR_24->is_emu10k1) {
  for (VAR_25 = 0; VAR_25 < VAR_18; VAR_25++) {
   if (VAR_20[VAR_25].recdev)
    if ((VAR_23 & (1 << VAR_25)) == ((uint32_t)1 << VAR_25)) {
    VAR_26 |= (1 << VAR_25);

    VAR_27[VAR_20[VAR_25].input] = 1;
    }
  }
 } else {
  for (VAR_25 = 0; VAR_25 < VAR_18; VAR_25++) {
   if (VAR_21[VAR_25].recdev)
    if ((VAR_23 & (1 << VAR_25)) == ((uint32_t)1 << VAR_25)) {
    VAR_26 |= (1 << VAR_25);

    VAR_27[VAR_21[VAR_25].input] = 1;
    }
  }
 }
 FUNC_1(VAR_24->card, VAR_4, VAR_27[0] == 1 ? 100 : 0);
 FUNC_1(VAR_24->card, VAR_5, VAR_27[0] == 1 ? 100 : 0);

 FUNC_1(VAR_24->card, VAR_6, VAR_27[1] == 1 ? 100 : 0);
 FUNC_1(VAR_24->card, VAR_7, VAR_27[1] == 1 ? 100 : 0);

 if (!VAR_24->is_emu10k1) {
  FUNC_1(VAR_24->card, VAR_8, VAR_27[2] == 1 ? 100 : 0);
  FUNC_1(VAR_24->card, VAR_9, VAR_27[2] == 1 ? 100 : 0);
 }

 if (VAR_24->is_emu10k1) {
  FUNC_1(VAR_24->card, VAR_10, VAR_27[3] == 1 ? 100 : 0);
  FUNC_1(VAR_24->card, VAR_11, VAR_27[3] == 1 ? 100 : 0);
 }

 FUNC_1(VAR_24->card, VAR_12, VAR_27[4] == 1 ? 100 : 0);
 FUNC_1(VAR_24->card, VAR_13, VAR_27[4] == 1 ? 100 : 0);

 FUNC_1(VAR_24->card, VAR_14, VAR_27[5] == 1 ? 100 : 0);
 FUNC_1(VAR_24->card, VAR_15, VAR_27[5] == 1 ? 100 : 0);

 FUNC_1(VAR_24->card, VAR_16, VAR_27[6] == 1 ? 100 : 0);
 FUNC_1(VAR_24->card, VAR_17, VAR_27[6] == 1 ? 100 : 0);


 if ((VAR_23 & (1 << VAR_19)) == (1 << VAR_19)) {
  FUNC_1(VAR_24->card, VAR_1, FUNC_0(VAR_24->card, VAR_0));
  FUNC_1(VAR_24->card, VAR_3, FUNC_0(VAR_24->card, VAR_2));
 } else {
  FUNC_1(VAR_24->card, VAR_1, 0);
  FUNC_1(VAR_24->card, VAR_3, 0);
 }

 return (VAR_26);
}
