
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* MaxContext; TYPE_2__* MinContext; int InitRL; int RunLength; TYPE_1__* FoundState; } ;
struct TYPE_8__ {int SummFreq; } ;
struct TYPE_7__ {int Freq; } ;
typedef TYPE_3__ CPpmd8 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;

void FUNC_2(CPpmd8 *VAR_1)
{
  VAR_1->MinContext->SummFreq += 4;
  if ((VAR_1->FoundState->Freq += 4) > VAR_0)
    FUNC_0(VAR_1);
  VAR_1->RunLength = VAR_1->InitRL;
  FUNC_1(VAR_1);
  VAR_1->MinContext = VAR_1->MaxContext;
}
