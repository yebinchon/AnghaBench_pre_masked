
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_21__ {scalar_t__ HiUnit; scalar_t__ LoUnit; scalar_t__* FreeList; TYPE_2__* FoundState; TYPE_1__* MinContext; } ;
struct TYPE_20__ {scalar_t__ Symbol; int Freq; } ;
struct TYPE_19__ {int NumStats; int SummFreq; scalar_t__ Suffix; } ;
typedef TYPE_1__* CTX_PTR ;
typedef scalar_t__ CPpmd_Void_Ref ;
typedef TYPE_2__ CPpmd_State ;
typedef scalar_t__ CPpmd_Byte_Ref ;
typedef TYPE_3__ CPpmd7 ;
typedef int Byte ;
typedef int Bool ;


 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ) ;
 TYPE_2__* FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 TYPE_1__* FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*,scalar_t__) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static CTX_PTR FUNC_10(CPpmd7 *VAR_2, Bool VAR_3)
{
  CPpmd_State VAR_4;
  CTX_PTR VAR_5 = VAR_2->MinContext;
  CPpmd_Byte_Ref VAR_6 = (CPpmd_Byte_Ref)FUNC_7(VAR_2->FoundState);
  CPpmd_State *VAR_7[VAR_0];
  unsigned VAR_8 = 0;

  if (!VAR_3)
    VAR_7[VAR_8++] = VAR_2->FoundState;

  while (VAR_5->Suffix)
  {
    CPpmd_Void_Ref VAR_9;
    CPpmd_State *VAR_10;
    VAR_5 = FUNC_8(VAR_5);
    if (VAR_5->NumStats != 1)
    {
      for (VAR_10 = FUNC_6(VAR_5); VAR_10->Symbol != VAR_2->FoundState->Symbol; VAR_10++);
    }
    else
      VAR_10 = FUNC_2(VAR_5);
    VAR_9 = FUNC_7(VAR_10);
    if (VAR_9 != VAR_6)
    {
      VAR_5 = FUNC_1(VAR_9);
      if (VAR_8 == 0)
        return VAR_5;
      break;
    }
    VAR_7[VAR_8++] = VAR_10;
  }

  VAR_4.Symbol = *(const Byte *)FUNC_3(VAR_2, VAR_6);
  FUNC_9(&VAR_4, VAR_6 + 1);

  if (VAR_5->NumStats == 1)
    VAR_4.Freq = FUNC_2(VAR_5)->Freq;
  else
  {
    UInt32 VAR_11, VAR_12;
    CPpmd_State *VAR_13;
    for (VAR_13 = FUNC_6(VAR_5); VAR_13->Symbol != VAR_4.Symbol; VAR_13++);
    VAR_11 = VAR_13->Freq - 1;
    VAR_12 = VAR_5->SummFreq - VAR_5->NumStats - VAR_11;
    VAR_4.Freq = (Byte)(1 + ((2 * VAR_11 <= VAR_12) ? (5 * VAR_11 > VAR_12) : ((2 * VAR_11 + 3 * VAR_12 - 1) / (2 * VAR_12))));
  }

  while (VAR_8 != 0)
  {

    CTX_PTR VAR_14;
    if (VAR_2->HiUnit != VAR_2->LoUnit)
      VAR_14 = (CTX_PTR)(VAR_2->HiUnit -= VAR_1);
    else if (VAR_2->FreeList[0] != 0)
      VAR_14 = (CTX_PTR)FUNC_5(VAR_2, 0);
    else
    {
      VAR_14 = (CTX_PTR)FUNC_0(VAR_2, 0);
      if (!VAR_14)
        return ((void*)0);
    }
    VAR_14->NumStats = 1;
    *FUNC_2(VAR_14) = VAR_4;
    VAR_14->Suffix = FUNC_4(VAR_5);
    FUNC_9(VAR_7[--VAR_8], FUNC_4(VAR_14));
    VAR_5 = VAR_14;
  }

  return VAR_5;
}
