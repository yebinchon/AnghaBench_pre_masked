
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_6__ {int tcr2; int rcr2; int configured; int tcr1; int rcr1; } ;
struct TYPE_5__ {int wdsize; } ;


 int VAR_0 ;



 TYPE_4__ VAR_1 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int ,int,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int,int ,int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_3,
    struct snd_pcm_hw_params *VAR_4,
    struct snd_soc_dai *VAR_5)
{
 int VAR_6 = 0;

 VAR_1.tcr2 &= ~0x1f;
 VAR_1.rcr2 &= ~0x1f;
 switch (FUNC_0(VAR_4)) {
 case 130:
  VAR_1.tcr2 |= 15;
  VAR_1.rcr2 |= 15;
  VAR_2->wdsize = 2;
  break;
 case 129:
  VAR_1.tcr2 |= 23;
  VAR_1.rcr2 |= 23;
  VAR_2->wdsize = 3;
  break;
 case 128:
  VAR_1.tcr2 |= 31;
  VAR_1.rcr2 |= 31;
  VAR_2->wdsize = 4;
  break;
 }

 if (!VAR_1.configured) {
  VAR_1.configured = 1;
  VAR_6 = FUNC_2(VAR_2, VAR_1.rcr1,
          VAR_1.rcr2, 0, 0);
  if (VAR_6) {
   FUNC_1("SPORT is busy!\n");
   return -VAR_0;
  }

  VAR_6 = FUNC_3(VAR_2, VAR_1.tcr1,
          VAR_1.tcr2, 0, 0);
  if (VAR_6) {
   FUNC_1("SPORT is busy!\n");
   return -VAR_0;
  }
 }

 return 0;
}
