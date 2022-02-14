
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pmac {TYPE_3__* hp_detect_ctl; int card; TYPE_2__* speaker_sw_ctl; TYPE_1__* master_sw_ctl; scalar_t__ auto_mute; } ;
struct TYPE_6__ {int id; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_4__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int *) ;
 scalar_t__ FUNC_2 (struct snd_pmac*) ;
 int FUNC_3 (struct snd_pmac*,int ) ;
 int FUNC_4 (struct snd_pmac*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct snd_pmac *VAR_7, int VAR_8)
{
 if (VAR_7->auto_mute) {
  int VAR_9 = FUNC_0("iMac");
  int VAR_10, VAR_11;
  VAR_10 = VAR_11 = FUNC_3(VAR_7,
    VAR_5);
  VAR_10 &= VAR_9 ? ~(VAR_3 | VAR_4
    | VAR_0 | VAR_1)
   : ~(VAR_3 | VAR_4
    | VAR_2);
  if (FUNC_2(VAR_7))
   VAR_10 |= VAR_9 ? (VAR_0 | VAR_1)
    : (VAR_3
     | VAR_4);
  else
   VAR_10 |= VAR_9 ? (VAR_3
     | VAR_4)
    : (VAR_2);
  if (VAR_8 && VAR_10 == VAR_11)
   return;
  FUNC_4(VAR_7,
    VAR_5, VAR_10);
  if (VAR_8) {
   FUNC_1(VAR_7->card, VAR_6,
           &VAR_7->master_sw_ctl->id);
   FUNC_1(VAR_7->card, VAR_6,
           &VAR_7->speaker_sw_ctl->id);
   FUNC_1(VAR_7->card, VAR_6,
           &VAR_7->hp_detect_ctl->id);
  }
 }
}
