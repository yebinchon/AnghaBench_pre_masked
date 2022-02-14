
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar5212NfCalHist {size_t currIndex; int * nfCalBuffer; } ;
typedef int int16_t ;


 size_t VAR_0 ;

__attribute__((used)) static __inline void
FUNC_0(struct ar5212NfCalHist *VAR_1, int16_t VAR_2)
{
  VAR_1->nfCalBuffer[VAR_1->currIndex] = VAR_2;
      if (++VAR_1->currIndex >= VAR_0)
  VAR_1->currIndex = 0;
}
