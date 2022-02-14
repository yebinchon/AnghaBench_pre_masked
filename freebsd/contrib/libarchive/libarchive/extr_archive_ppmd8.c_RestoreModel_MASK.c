
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_25__ {scalar_t__ RestoreMethod; int* Stamps; int Size; int MaxOrder; int OrderFall; scalar_t__ GlueCount; TYPE_1__* MaxContext; TYPE_1__* MinContext; } ;
struct TYPE_24__ {int Symbol; int Freq; } ;
struct TYPE_23__ {scalar_t__ NumStats; int Flags; int SummFreq; scalar_t__ Suffix; } ;
typedef TYPE_1__* CTX_PTR ;
typedef TYPE_2__ CPpmd_State ;
typedef TYPE_3__ CPpmd8 ;
typedef void* Byte ;


 int FUNC_0 (TYPE_3__*,TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_2__* FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_1__*,int,int) ;
 int FUNC_6 (TYPE_3__*,TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 TYPE_2__* FUNC_8 (TYPE_1__*) ;
 void* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_11(CPpmd8 *VAR_2, CTX_PTR VAR_3



    )
{
  CTX_PTR VAR_4;
  CPpmd_State *VAR_5;
  FUNC_4(0);
  for (VAR_4 = VAR_2->MaxContext; VAR_4 != VAR_3; VAR_4 = FUNC_9(VAR_4))
    if (--(VAR_4->NumStats) == 0)
    {
      VAR_5 = FUNC_8(VAR_4);
      VAR_4->Flags = (Byte)((VAR_4->Flags & 0x10) + 0x08 * (VAR_5->Symbol >= 0x40));
      *FUNC_3(VAR_4) = *VAR_5;
      FUNC_10(VAR_2, VAR_5);
      FUNC_3(VAR_4)->Freq = (Byte)(((unsigned)FUNC_3(VAR_4)->Freq + 11) >> 3);
    }
    else
      FUNC_5(VAR_2, VAR_4, (VAR_4->NumStats+3) >> 1, 0);

  for (; VAR_4 != VAR_2->MinContext; VAR_4 = FUNC_9(VAR_4))
    if (!VAR_4->NumStats)
      FUNC_3(VAR_4)->Freq = (Byte)(FUNC_3(VAR_4)->Freq - (FUNC_3(VAR_4)->Freq >> 1));
    else if ((VAR_4->SummFreq += 4) > 128 + 4 * VAR_4->NumStats)
      FUNC_5(VAR_2, VAR_4, (VAR_4->NumStats + 2) >> 1, 1);
  if (VAR_2->RestoreMethod == VAR_1 || FUNC_2(VAR_2) < (VAR_2->Size >> 1))
    FUNC_7(VAR_2);
  else
  {
    while (VAR_2->MaxContext->Suffix)
      VAR_2->MaxContext = FUNC_9(VAR_2->MaxContext);
    do
    {
      FUNC_0(VAR_2, VAR_2->MaxContext, 0);
      FUNC_1(VAR_2);
    }
    while (FUNC_2(VAR_2) > 3 * (VAR_2->Size >> 2));
    VAR_2->GlueCount = 0;
    VAR_2->OrderFall = VAR_2->MaxOrder;
  }
}
