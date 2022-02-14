
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UInt32 ;
typedef void* UInt16 ;
struct TYPE_8__ {scalar_t__ AlignOffset; scalar_t__ Size; int GlueCount; scalar_t__ LoUnit; scalar_t__ HiUnit; scalar_t__* FreeList; } ;
struct TYPE_7__ {scalar_t__ Next; scalar_t__ Prev; int Stamp; unsigned int NU; } ;
typedef scalar_t__ CPpmd7_Node_Ref ;
typedef TYPE_1__ CPpmd7_Node ;
typedef TYPE_2__ CPpmd7 ;


 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,unsigned int) ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_3 (unsigned int) ;

__attribute__((used)) static void FUNC_4(CPpmd7 *VAR_1)
{




  CPpmd7_Node_Ref VAR_2 = VAR_1->AlignOffset + VAR_1->Size;


  CPpmd7_Node_Ref VAR_3 = VAR_2;
  unsigned VAR_4;

  VAR_1->GlueCount = 255;


  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  {
    UInt16 VAR_5 = FUNC_0(VAR_4);
    CPpmd7_Node_Ref VAR_6 = (CPpmd7_Node_Ref)VAR_1->FreeList[VAR_4];
    VAR_1->FreeList[VAR_4] = 0;
    while (VAR_6 != 0)
    {
      CPpmd7_Node *VAR_7 = FUNC_2(VAR_6);
      VAR_7->Next = VAR_3;
      VAR_3 = FUNC_2(VAR_3)->Prev = VAR_6;
      VAR_6 = *(const CPpmd7_Node_Ref *)VAR_7;
      VAR_7->Stamp = 0;
      VAR_7->NU = (UInt16)VAR_5;
    }
  }
  FUNC_2(VAR_2)->Stamp = 1;
  FUNC_2(VAR_2)->Next = VAR_3;
  FUNC_2(VAR_3)->Prev = VAR_2;
  if (VAR_1->LoUnit != VAR_1->HiUnit)
    ((CPpmd7_Node *)VAR_1->LoUnit)->Stamp = 1;


  while (VAR_3 != VAR_2)
  {
    CPpmd7_Node *VAR_8 = FUNC_2(VAR_3);
    UInt32 VAR_9 = (UInt32)VAR_8->NU;
    for (;;)
    {
      CPpmd7_Node *VAR_10 = FUNC_2(VAR_3) + VAR_9;
      VAR_9 += VAR_10->NU;
      if (VAR_10->Stamp != 0 || VAR_9 >= 0x10000)
        break;
      FUNC_2(VAR_10->Prev)->Next = VAR_10->Next;
      FUNC_2(VAR_10->Next)->Prev = VAR_10->Prev;
      VAR_8->NU = (UInt16)VAR_9;
    }
    VAR_3 = VAR_8->Next;
  }


  for (VAR_3 = FUNC_2(VAR_2)->Next; VAR_3 != VAR_2;)
  {
    CPpmd7_Node *VAR_11 = FUNC_2(VAR_3);
    unsigned VAR_12;
    CPpmd7_Node_Ref VAR_13 = VAR_11->Next;
    for (VAR_12 = VAR_11->NU; VAR_12 > 128; VAR_12 -= 128, VAR_11 += 128)
      FUNC_1(VAR_1, VAR_11, VAR_0 - 1);
    if (FUNC_0(VAR_4 = FUNC_3(VAR_12)) != VAR_12)
    {
      unsigned VAR_14 = FUNC_0(--VAR_4);
      FUNC_1(VAR_1, VAR_11 + VAR_14, VAR_12 - VAR_14 - 1);
    }
    FUNC_1(VAR_1, VAR_11, VAR_4);
    VAR_3 = VAR_13;
  }
}
