
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_util_memhdr {int dummy; } ;
struct snd_sf_sample {int * block; } ;
struct snd_emux {struct snd_emu10k1* hw; } ;
struct snd_emu10k1 {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_emu10k1*,int *) ;

int
FUNC_2(struct snd_emux *VAR_1, struct snd_sf_sample *VAR_2,
   struct snd_util_memhdr *VAR_3)
{
 struct snd_emu10k1 *VAR_4;

 VAR_4 = VAR_1->hw;
 if (FUNC_0(!VAR_2 || !VAR_3))
  return -VAR_0;

 if (VAR_2->block) {
  FUNC_1(VAR_4, VAR_2->block);
  VAR_2->block = ((void*)0);
 }
 return 0;
}
