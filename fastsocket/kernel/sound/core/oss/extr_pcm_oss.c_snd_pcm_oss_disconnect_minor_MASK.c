
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm {TYPE_2__* card; scalar_t__ device; } ;
struct TYPE_4__ {int reg_mask; scalar_t__ reg; } ;
struct TYPE_6__ {TYPE_1__ oss; } ;
struct TYPE_5__ {size_t number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 TYPE_3__* FUNC_0 (struct snd_pcm*) ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ,TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm *VAR_3)
{
 if (FUNC_0(VAR_3)->oss.reg) {
  if (FUNC_0(VAR_3)->oss.reg_mask & 1) {
   FUNC_0(VAR_3)->oss.reg_mask &= ~1;
   FUNC_2(VAR_0,
        VAR_3->card, 0);
  }
  if (FUNC_0(VAR_3)->oss.reg_mask & 2) {
   FUNC_0(VAR_3)->oss.reg_mask &= ~2;
   FUNC_2(VAR_0,
        VAR_3->card, 1);
  }
  if (VAR_2[VAR_3->card->number] == (int)VAR_3->device) {



  }
  FUNC_0(VAR_3)->oss.reg = 0;
 }
 return 0;
}
