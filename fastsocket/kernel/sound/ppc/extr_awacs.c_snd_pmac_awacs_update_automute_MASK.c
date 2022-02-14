
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pmac {int* awacs_reg; TYPE_3__* hp_detect_ctl; int card; TYPE_2__* speaker_sw_ctl; TYPE_1__* master_sw_ctl; struct awacs_amp* mixer_data; scalar_t__ auto_mute; } ;
struct awacs_amp {int dummy; } ;
struct TYPE_6__ {int id; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_4__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,int ,int *) ;
 scalar_t__ FUNC_1 (struct snd_pmac*) ;
 int FUNC_2 (struct snd_pmac*,int,int) ;
 int FUNC_3 (struct awacs_amp*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct snd_pmac *VAR_8, int VAR_9)
{
 if (VAR_8->auto_mute) {
  {
   int VAR_10 = VAR_8->awacs_reg[1]
    | (VAR_2 | VAR_4);
   if (VAR_6) {
    VAR_10 &= ~VAR_4;
    VAR_10 |= VAR_3;
   } else if (VAR_7) {
    VAR_10 &= ~VAR_4;
    VAR_10 &= ~VAR_3;
   }
   if (FUNC_1(VAR_8))
    VAR_10 &= ~VAR_2;
   else if (VAR_6)
    VAR_10 &= ~VAR_3;
   else if (VAR_7)
    VAR_10 |= VAR_3;
   else
    VAR_10 &= ~VAR_4;
   if (VAR_9 && VAR_10 == VAR_8->awacs_reg[1])
    return;
   FUNC_2(VAR_8, 1, VAR_10);
  }
  if (VAR_9) {
   FUNC_0(VAR_8->card, VAR_5,
           &VAR_8->master_sw_ctl->id);
   FUNC_0(VAR_8->card, VAR_5,
           &VAR_8->speaker_sw_ctl->id);
   FUNC_0(VAR_8->card, VAR_5,
           &VAR_8->hp_detect_ctl->id);
  }
 }
}
