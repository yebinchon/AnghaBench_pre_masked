
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_trident {scalar_t__ ChanPCMcnt; scalar_t__ ChanPCM; int* ChanMap; } ;


 size_t VAR_0 ;

__attribute__((used)) static int FUNC_0(struct snd_trident * VAR_1)
{
 int VAR_2;

 if (VAR_1->ChanPCMcnt >= VAR_1->ChanPCM)
  return -1;
 for (VAR_2 = 31; VAR_2 >= 0; VAR_2--) {
  if (!(VAR_1->ChanMap[VAR_0] & (1 << VAR_2))) {
   VAR_1->ChanMap[VAR_0] |= 1 << VAR_2;
   VAR_1->ChanPCMcnt++;
   return VAR_2 + 32;
  }
 }
 return -1;
}
