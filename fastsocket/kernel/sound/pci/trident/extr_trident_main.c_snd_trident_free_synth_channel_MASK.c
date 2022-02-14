
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ChanSynthCount; } ;
struct snd_trident {int* ChanMap; TYPE_1__ synth; } ;


 size_t VAR_0 ;

__attribute__((used)) static void FUNC_0(struct snd_trident *VAR_1, int VAR_2)
{
 if (VAR_2 < 0 || VAR_2 > 31)
  return;
 VAR_2 &= 0x1f;
 if (VAR_1->ChanMap[VAR_0] & (1 << VAR_2)) {
  VAR_1->ChanMap[VAR_0] &= ~(1 << VAR_2);
  VAR_1->synth.ChanSynthCount--;
 }
}
