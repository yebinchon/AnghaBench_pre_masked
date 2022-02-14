
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
 int VAR_1 ;

 TYPE_4__ VAR_2 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int ,int,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int,int ,int ) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_4,
 struct snd_pcm_hw_params *VAR_5,
 struct snd_soc_dai *VAR_6)
{
 int VAR_7 = 0;

 VAR_2.tcr2 &= ~0x1f;
 VAR_2.rcr2 &= ~0x1f;
 switch (FUNC_0(VAR_5)) {
 case 128:
  VAR_2.tcr2 |= 31;
  VAR_2.rcr2 |= 31;
  VAR_3->wdsize = 4;
  break;

 default:
  FUNC_1("not supported PCM format yet\n");
  return -VAR_1;
  break;
 }

 if (!VAR_2.configured) {
  VAR_7 = FUNC_2(VAR_3, VAR_2.rcr1,
   VAR_2.rcr2, 0, 0);
  if (VAR_7) {
   FUNC_1("SPORT is busy!\n");
   return -VAR_0;
  }

  VAR_7 = FUNC_3(VAR_3, VAR_2.tcr1,
   VAR_2.tcr2, 0, 0);
  if (VAR_7) {
   FUNC_1("SPORT is busy!\n");
   return -VAR_0;
  }

  VAR_2.configured = 1;
 }

 return 0;
}
