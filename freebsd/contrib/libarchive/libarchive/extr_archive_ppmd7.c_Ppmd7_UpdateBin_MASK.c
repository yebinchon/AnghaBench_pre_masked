
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int PrevSuccess; int RunLength; TYPE_1__* FoundState; } ;
struct TYPE_5__ {int Freq; } ;
typedef TYPE_2__ CPpmd7 ;
typedef int Byte ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(CPpmd7 *VAR_0)
{
  VAR_0->FoundState->Freq = (Byte)(VAR_0->FoundState->Freq + (VAR_0->FoundState->Freq < 128 ? 1: 0));
  VAR_0->PrevSuccess = 1;
  VAR_0->RunLength++;
  FUNC_0(VAR_0);
}
