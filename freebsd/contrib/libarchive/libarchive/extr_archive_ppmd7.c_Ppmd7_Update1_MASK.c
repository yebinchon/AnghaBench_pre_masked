
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* FoundState; TYPE_1__* MinContext; } ;
struct TYPE_10__ {scalar_t__ Freq; } ;
struct TYPE_9__ {int SummFreq; } ;
typedef TYPE_2__ CPpmd_State ;
typedef TYPE_3__ CPpmd7 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(CPpmd7 *VAR_1)
{
  CPpmd_State *VAR_2 = VAR_1->FoundState;
  VAR_2->Freq += 4;
  VAR_1->MinContext->SummFreq += 4;
  if (VAR_2[0].Freq > VAR_2[-1].Freq)
  {
    FUNC_2(&VAR_2[0], &VAR_2[-1]);
    VAR_1->FoundState = --VAR_2;
    if (VAR_2->Freq > VAR_0)
      FUNC_1(VAR_1);
  }
  FUNC_0(VAR_1);
}
