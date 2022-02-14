
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * Stamps; scalar_t__* FreeList; } ;
struct TYPE_4__ {int NU; scalar_t__ Next; int Stamp; } ;
typedef scalar_t__ CPpmd8_Node_Ref ;
typedef TYPE_1__ CPpmd8_Node ;
typedef TYPE_2__ CPpmd8 ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(CPpmd8 *VAR_1, void *VAR_2, unsigned VAR_3)
{
  ((CPpmd8_Node *)VAR_2)->Stamp = VAR_0;
  ((CPpmd8_Node *)VAR_2)->Next = (CPpmd8_Node_Ref)VAR_1->FreeList[VAR_3];
  ((CPpmd8_Node *)VAR_2)->NU = FUNC_0(VAR_3);
  VAR_1->FreeList[VAR_3] = FUNC_1(VAR_2);
  VAR_1->Stamps[VAR_3]++;
}
