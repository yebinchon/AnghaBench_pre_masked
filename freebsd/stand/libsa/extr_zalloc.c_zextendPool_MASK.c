
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {uintptr_t mp_Size; void* mp_Base; uintptr_t mp_Used; char* mp_End; } ;
typedef TYPE_1__ MemPool ;



void
FUNC_0(MemPool *VAR_0, void *VAR_1, uintptr_t VAR_2)
{
 if (VAR_0->mp_Size == 0) {
  VAR_0->mp_Base = VAR_1;
  VAR_0->mp_Used = VAR_2;
  VAR_0->mp_End = (char *)VAR_1 + VAR_2;
  VAR_0->mp_Size = VAR_2;
 } else {
  void *VAR_3 = (char *)VAR_0->mp_Base + VAR_0->mp_Size;

  if (VAR_1 < VAR_0->mp_Base) {
   VAR_0->mp_Size += (char *)VAR_0->mp_Base - (char *)VAR_1;
   VAR_0->mp_Used += (char *)VAR_0->mp_Base - (char *)VAR_1;
   VAR_0->mp_Base = VAR_1;
  }
  VAR_1 = (char *)VAR_1 + VAR_2;
  if (VAR_1 > VAR_3) {
   VAR_0->mp_Size += (char *)VAR_1 - (char *)VAR_3;
   VAR_0->mp_Used += (char *)VAR_1 - (char *)VAR_3;
   VAR_0->mp_End = (char *)VAR_1;
  }
 }
}
