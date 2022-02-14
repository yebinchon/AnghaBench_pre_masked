
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_3__ {int* Stamps; int Size; scalar_t__ Text; scalar_t__ UnitsStart; scalar_t__ LoUnit; scalar_t__ HiUnit; } ;
typedef TYPE_1__ CPpmd8 ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static UInt32 FUNC_2(const CPpmd8 *VAR_1)
{
  UInt32 VAR_2 = 0;
  unsigned VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    VAR_2 += VAR_1->Stamps[VAR_3] * FUNC_0(VAR_3);
  return VAR_1->Size - (UInt32)(VAR_1->HiUnit - VAR_1->LoUnit) - (UInt32)(VAR_1->UnitsStart - VAR_1->Text) - FUNC_1(VAR_2);
}
